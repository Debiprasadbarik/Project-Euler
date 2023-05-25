/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?*/
#include<iostream>
#include<math.h>
using namespace std;
int checkprime(int n)
{
    int count=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        count++;}
    if(count>=1){
        return 0;} 
    else{
    return 1;}
    
}

int main()
{
    int flag=0,no;
    cout<<"enter no:"<<endl;
    cin>>no;
    
        for(int j=2;j<=1000000;j++)
        {
            if(checkprime(j)!=1 && flag<=10001)
            {
                continue;
            }
            else
            {
                flag++;
                //cout<<flag<<"-prime no="<<j<<endl;
                if(flag==no){
                cout<<j<<endl;}
            }
        }
}