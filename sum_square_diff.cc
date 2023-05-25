/*The sum of the squares of the first ten natural numbers is, 

The square of the sum of the first ten natural numbers is,

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/
#include<iostream>
#include<math.h>
using namespace std;
int power(int n)
{
    long long int po;
    po=n*n;
    return po;
}

int sum_o_square()
{
    int sum=0;
    for(int i=1;i<=100;i++)
    {
        sum=sum+power(i);
    }
    return sum;
}

int square_o_sum()
{
    long long int su=0;
    long long int sr;
    for(int i=1;i<=100;i++)
    {
        su=su+i;
        sr=power(su);
    }
    return sr;
}
int main()
{
    long long int diff;
    diff= square_o_sum() - sum_o_square();
    cout<<"difference is="<<diff<<endl;
}