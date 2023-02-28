with open("CDU.txt",'w') as p:
    p.write("name           roll no        age\n")
    p.write("khushi         1001           15\n")
    p.write("ajeet          5005           200\n")
    p.write("codex coder     07            18\n")
# todo check
with open("CDU.txt","r") as p:
    n = input("Enter command = ")
    for i in p:
        if n in i:
            print("Data found")
            print(i)
            break
# todo delet or pass data
with open("CDU.txt","r") as p:
    n = input("Enter command = ")
    for i in p:
        if n in i:
            continue
        print(i)
# todo update
with open("CDU.txt",'r') as p:
    n = input("Enter command = ")
    with open("update data.txt",'w') as p1:
        for i in p:
            if n in i:
                n = input("data command = ")
                p1.write(n)
                p1.write("\n")
                continue
            p1.write(i)


