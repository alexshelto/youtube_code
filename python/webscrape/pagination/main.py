# Alexander Shelton
# Webscraping tutorial using page pagination 

# Base URL: https://www.scrapethissite.com/pages/forms/

# NOTE: the page works by changing pages like this: https://www.scrapethissite.com/pages/forms/?page_num=2
# So all we need to do is dynamically put a new page number into the end of the URL 





from bs4 import BeautifulSoup
import requests

import time # Used to slow down scraping to keep server happy 


def scrape_pages(url) -> None:
    # max_pages = 24
    max_pages = 3 # doing 3 pages for examples sake
    current_page = 1

    # Loop through all pages dynamically and build the url using the page number suffix the website uses
    while current_page <= max_pages:
        print(f'{url}?page_num={current_page}')

        # Get each page's html
        raw_html = requests.get(f'{url}?page_num={current_page}')
        soup = BeautifulSoup(raw_html.text, 'html.parser')

        # Find all table rows and from each table row get the needed data 
        for entry in soup.find_all('tr', {'class': 'team'}):
            team = entry.find('td', {'class': 'name'}).text.strip()
            wins = entry.find('td', {'class': 'wins'}).text.strip()
            year = entry.find('td', {'class': 'year'}).text.strip()
            losses = entry.find('td', {'class': 'losses'}).text.strip()

            
            print(f'Team: {team} | Wins: {wins} | Year: {year} | Losses: {losses}')

            

        time.sleep(10) # sleep before scraping next page to not send too many requests at once 
        current_page += 1
        print('\n\n') # Clearing console up 




def main() -> int: 
    URL = 'https://www.scrapethissite.com/pages/forms/'
    scrape_pages(URL)

    return 0


if __name__ == '__main__':
    exit(main())



