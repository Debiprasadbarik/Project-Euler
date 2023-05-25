import math
no=int(input()) #731671765313316
lis1=[]
while(no):
    rem=no%10
    lis1.append(rem)
    no=no//10
lis1.reverse()
le=len(lis1)
res=1
for i in range(le):
   for j in range(i+5):
       res=lis1[i]*res
       print(res," ")
