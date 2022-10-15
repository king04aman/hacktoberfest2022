import speedtest as s

st = s.Speedtest()

download = st.download()
upload = st.upload()
#Convert them in mbps(MegaBit per second)
download = download / 1000000
upload = upload / 1000000
print("My download speed is ", round(download,3),'mbps')
print("My upload speed is ", round(upload,3),'mbps')
st.get_servers([])#Dynamic Pinging
ping = st.results.ping
print("Your ping result is ", ping)