class codex:
    def __init__(self,a):
        self.arry=a
        x=self.arry
        y=zeros(x,int)
        self.ayya=y
        z=len(y)
        i=0
        while(z>i):
            n = int(input("Enter your collom element = "))
            y[i]=n
            i+=1
        self.z1=y
    def palandrome(self):
        aj=self.z1
        k=[]
#         painr of 3
        for i in aj:
            kj=i
            x = kj
            rev = 0
            for i in range(kj):

                if kj > 0:
                    rev = (rev * 10) + (kj % 10)
                    kj = kj // 10
            if x==rev:
                k.append(rev)
        print(aj)
        k1=array(k)
        print(k1)

from numpy import *
n=int(input("Enter your collom = "))
p=codex(n)
p.palandrome()
