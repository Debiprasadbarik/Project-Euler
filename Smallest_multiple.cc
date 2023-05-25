/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/
#include<iostream>
using namespace std;
int check(int n){
    int count=0;
    for(int i=1;i<=20;i++){
        if(n%i!=0)
            count++;
    }
    if (count>=1)
    return 0;
    else
    {
        return 1;
    }
    
}

int main()
{
 int sc=100;
 while(sc>1)
 {
    if(check(sc)==1){
    cout<<sc;
    break;}
    else
    sc++;
 }
}