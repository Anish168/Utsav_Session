import requests
import pandas as pd
import json
from datetime import date, timedelta
keyboard=input("Enter a keyword: ")
keyword1=keyword
keyboard=keyboard +"site:quora.com site:reditt.com"
site_list=["quora.com","reditt.com", "microsoft.com"]
for site in site_list:
    keyword=keyword+"site:"+site
    print(keyword)
    keyword=keyword1