n=int(input("Enter your no = "))
x=n
rev=0
for i in range(n):
    print(i,end=" ")
    if n>0:
        rev=(rev*10)+(n%10)
        n=n//10
if x==rev:
    print("no is palandrome")
