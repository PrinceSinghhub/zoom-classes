n = int(input())
if n<=1:
    print("Valid No")
c = 2
r=0
while (c*c<=n):      #n-2 compression n 7 = 2....6     O(n) O(1)
    if n%c*c == 0:    #c*c = O(1) min compresion  O(1)  O(1)
        r+=1
        break
    c+=1
if r==0:
    print("Prime")
else:
    print("No")
        