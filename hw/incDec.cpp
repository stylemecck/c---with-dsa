//increment and decrement 
#include<iostream>
using namespace std;
int main(){
    int a=10,b;
    //left shifting
    a=(a<<2);
    b=(++a)*(a++);
    cout<<b<<endl;
    //printing value of the a
    cout<<a;
} 