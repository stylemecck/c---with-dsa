#include<iostream>
using namespace std;
int Factorial( int n)
{   
    if(n==0 || n==1)
    {
        return 1;
    }     
    else
    {
        return n * Factorial(n-1);
    }
}
int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Factorial of " << num << " = " << Factorial(num);
    return 0;
}