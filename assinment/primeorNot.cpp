#include<iostream>
using namespace std;
int main()
{
    int i, n;
    bool isPrime;
    cout<<"Enter any positive integer number:"<<endl;
    cin>>n;

    if (n==0 || n==1)
    {
        isPrime=false;
    }

    for(i=2; i<=n/2; ++i)
    {
        if (n % i ==0)
        {
            isPrime=false;
            break;
        }
    }

    if(isPrime)
    {
        cout<< n <<" is a prime number"<<endl;
    }
    else
    {
        cout<< n << " is a not a prime number." <<endl;
    }
}