/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/
#include <iostream>
using namespace std;

long long int isprime(long long int a)
{
    if(a==1 ||a<1){
    return 0;
    }
    long long int count=0;
        for(int i=2;i<a/2;i++)
        {
            if(a%i==0)
            count++;
            
        }
        if(count>=1)
        return 0;
        else
        return 1;
}

int main()
{
    long long int j;
    long long int no;
    long long int ans;
    cin>>no;
    long long int lar=0;
     for(j=1;j<=no;j++)
    {
        if(no%j==0){
            if(isprime(j)){
                if(j>lar){
                    lar=j;
                    cout<<lar<<",";
                }
            }
        }
        
    }
} 