from Uno.Card import Card
from Uno.Deck import Deck



def find_solution(player_deck, discard_deck):
    # base condition
    if(len(player_deck) == 0):
        return True

    top_card = discard_deck[-1]
    playable_cards = []

    # list of all valid moves 
    for card in player_deck:
        if card.is_compatable(top_card):
            playable_cards.append(card)

    for card in playable_cards:
        # apply value step: 
        player_deck.remove(card)
        discard_deck.append(card)

        # Recursive step 
        if find_solution(player_deck, discard_deck) == True:
            return True

        # remove the change we just made
        player_deck.append(card)
        discard_deck.remove(card)

    return False





def main(): 

    deck = Deck() #Creating a deck of cards

    player_deck = []
    discard_deck = []

    # Giving the player a set of cards
    for i in range(24):
        player_deck.append(deck.draw_card())

    discard_deck.append(deck.draw_top_card())


    # displaying all of our cards before 
    for card in player_deck:
        print(card)

    print('\n\n')
    print(f'Top card: {discard_deck[-1]}')


    # call backtracking algorithm

    if find_solution(player_deck, discard_deck) == True:
        print('We can place all of our cards\n\n')

        for card in discard_deck:
            print(card)

    else:
        print('we cant place all of our cards')


    return 0


if __name__ == '__main__':
    exit(main())
