// Fibonacci Series Program in C++ 
#include<iostream>
using namespace std;

int fibSeries(int n){
    if(n <= 1) return n;
    return fibSeries(n-1)+(n-2);
}

int main(){
    int n;
    cout<<"Enter the no of term: ";
    cin>>n;
    cout<<"Fibonacci Series: ";
    for(int i=0; i<n; i++){
        cout<<fibSeries(i)<<" ";
    }
}