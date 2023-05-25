'''A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.'''

def palin(n):
    rev=0
    p=n
    while n>0:
        rem=n%10
        rev=(rev*10)+rem
        n=n//10
    if rev==p:
        return 1
    else:
        return 0
lar=0
for i in range(100,1000):
    for j in range(i,1000):
        k=i*j
        if palin(k)==1:
            if k>lar:
                lar=k
            else:
                continue
print(lar)