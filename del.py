no=int(input())
for i in range(no):
    x=list(map(int,input().split()))

sum=0
while(True):
    
    j=0
    big=0
    rem=x[j]%10
    x[j]=x[j]/10
    if rem>big:
        big=rem
    sum=sum+big
    j+=1

print("ff")