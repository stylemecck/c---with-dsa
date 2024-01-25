#include<iostream>
using  namespace std;

bool isPrime( int num) {
    if (num<=1)
        return false;
    for (int i=2; i * i <=num; i++) {
        if(num % i == 0)
        return false;
    }
    return true;
}

int main() {
    int term;
    cout<<"Enter any Postive integer:"<<endl;
    cin>>term;
    cout<<"prime no upto " << term<< " are: ";
    for(int i=2; i<=term; i++)
    {
        if(isPrime(i))
        cout<<i<<" ";
    }
    return 0;
}