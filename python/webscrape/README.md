# Webscraping tutorial

## Step 1
before webscraping anyones site, be polite and check their robots.txt to see what you are allowed to do.   
Do this by visiting https://<website to be scraped>.com/robots.txt    
Here they will leave permissions about what pages you are allowed to scrape and potential request limits.   


## Step 2: Using Requests library
Webscraping is essentially parsing the HTML elements of a webpage you wish to scrape to get the content you need.   
Since we dont have the raw HTML code on our system, we will need to download it from the web page... this is why we use the requests library.   

You can get the raw html by doing something like: `raw_html = requests.get(<url of page>)`
To check that you have sucsessfully downloaded the page HTML, you can do `raw_html.status_code` you should expect to see 200. 
If you get a 404 or another code, the page may not exist, you may not have permissions, or there could be server issues on their end. You can google response codes for websites. 

To view your raw HTML you have downloaded you can use the text attribute: `raw_html.text`   


## Step 3: Using beautiful soup
Now that we have sucsessfully downloaded the raw html it is time to parse it. 
You can do something such as `soup = BeautifulSoup(raw_html.text, 'html.parser')` Note there are more parsers you can use but you may have to download them. 
From here it is simple, refer to the beautiful soup library documentation and begin searching different page elements to webscrape.  
