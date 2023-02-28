with open("empty or not.txt",'r') as p:
    a=p.read()
    if a!='':
        print("file is not empty")
    else:
        print("file is empty")

import os
f=os.path.getsize("empty or not.txt")
if f == 0:
    print("empty")
print(f)

a=os.stat("empty or not.txt").st_size==0
if a == True:
    print("empty")
else:
    print("not")
