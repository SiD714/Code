#find current working directory
import os
import shutil
print(os.getcwd())
print(shutil.disk_usage("/"))
#cheak usages of my entire system by writing(/)
total , used,free=shutil.disk_usage("/")
#// ka matlab hota hai floor division matlab approx value
print("Total disk space is", total//(2**30))
#2**30 use karke bytes ko Gb me convert kar sakte hai
print("used disk space is", used//(2**30))
print("free disk space is", free//(2**30))

#F string-format string
#agar hum f string use karenge
print(f"Total Disk Space Is: {total//(2**30)} Gbs ")
print(f"used disk space is: {used//(2**30)} Gbs")
print(f"free disk space is: {free//(2**30)} Gbs")
