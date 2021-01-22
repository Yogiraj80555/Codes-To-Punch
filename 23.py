'''
import json
with open('new.txt') as json_file:
	data = json.loads(json_file.read())
	for content in data:
		print(content.get('memory'))
		message_stats = content.get('message_stats')
		key = "message_stats"
		if key in content:
			print("Ack:- ",message_stats.get('ack'))
			print('Deliver:- ',message_stats.get('deliver'))
		print("Message ready:- ",content.get('messages_ready'),"\n\n")


	'''
    
import json
import urllib.request

data = urllib.request.urlopen("http://182.168.10.200/exceltojson/upload/new.txt");
data = json.loads(data.read())
for content in data:
    print(content.get('memory'))
    message_stats = content.get('message_stats')
    key = "message_stats"
    if key in content:
        print("Ack:- ",message_stats.get('ack'))
        print('Deliver:- ',message_stats.get('deliver'))
    print("Message ready:- ",content.get('messages_ready'),"\n\n")