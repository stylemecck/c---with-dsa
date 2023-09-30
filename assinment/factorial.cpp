#include<iostream>
using namespace std;

int main() 
{
    int n, fact;

    cout<<"Enter the num:" <<endl;
    cin>>n;
    if (n<0)
    {
        cout<<"Error! the factorial of negative num is doesnot exists:";
    }

    else
    {
        for(int i=1; i<=1; ++i)
        {
            fact *= i;
        }
        cout<<"The factorial of "<< n << " = " << fact <<endl;
    
    }
}