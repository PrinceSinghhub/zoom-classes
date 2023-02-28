with open("search.txt",'w') as p:
    p.write("name           roll no        age\n")
    p.write("khushi         1001           15\n")
    p.write("ajeet          5005           200\n")
    p.write("codex coder     07            18\n")
with open("search.txt",'r') as p:
    # n=input("command = ")
    with open("past.txt", 'a') as p1:
        n = input("command = ")
        # for i in p:
        #     if n in i:
        #         p1.write(i)
        a=p.readline()
        while a!='':
            if n in a:
                p1.write(a)
            a=p.readline()







