import requests
from pprint import pprint

city = input("Enter City Name : ")
url = f"http://api.openweathermap.org/data/2.5/weather?q={city}&appid=277607675933f3fb5143251f8a1c85ee&units=metric"

res = requests.get(url)
data = res.json()

curr_temp = data["main"]["temp"]
min_temp = data["main"]["temp_min"]
max_temp = data["main"]["temp_max"]
desc = data["weather"][0]["description"]
wind = data["wind"]["speed"]


print(
    f"""City : {city}
Weather Description : {desc}
Current Temprature : {curr_temp}
Wind Speed : {wind}
"""
)

