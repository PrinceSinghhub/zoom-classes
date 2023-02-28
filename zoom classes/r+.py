with open('codex.txt','a+') as aj:
    print(aj.tell())
    a="ajeet"
    b=a[2:4]
    print()
    aj.write(b)
    aj.write("\n")
    aj.seek(0)
    print(aj.read())