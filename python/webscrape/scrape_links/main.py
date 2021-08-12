
from bs4 import BeautifulSoup
import requests


def scrape_method1(url: str) -> None: 
    ''' Here we scrape by finding each 'page' element then printing the anchor from all of those
    * This is probably the best way to do it * 
    '''
    page = requests.get(url)
    soup = BeautifulSoup(page.text, 'html.parser')

    link_containers = soup.find_all('div', {'class': 'page'})
    for item in link_containers: 
        print(item.find('a'))


def scrape_method2(url: str) -> None: 
    '''Here we will scrape by using the header class: "page title" '''
    page = requests.get(url)
    soup = BeautifulSoup(page.text, 'html.parser')

    for link in soup.find_all('h3', {'class': 'page-title'}):
        print(link.text)


def scrape_method3(url: str) -> None: 
    '''here we will scrape by pulling all links off of the page '''
    page = requests.get(url)
    if page.status_code == 200:
        print("this worked")
    else:
        print(f'Something went wrong, received a status: {page.status_code}')

    # Displaying the Raw HTML
    # print(page.text)

    soup = BeautifulSoup(page.text, 'html.parser')

    '''
    for anchor in soup.find_all('a'):
        print(anchor)
    '''

    body = soup.find('div', {'class': 'col-md-6 col-md-offset-3'})

    for anchor in body.find_all('a'):
        print(anchor.text)



def main() -> int: 
    URL = 'https://www.scrapethissite.com/pages/'
    #scrape_method1(URL)
    #scrape_method2(URL)
    #scrape_method3(URL)

    return 0



if __name__ == '__main__':
    exit(main())



