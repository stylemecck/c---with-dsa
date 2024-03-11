// area of the trangle using heroins law
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a,b,c,s,area;
    cout<<"Enter the lenghs of three side of the trangle: ";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));

    cout<<"Area of the trangle is "<<area<<endl;
}