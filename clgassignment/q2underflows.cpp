#include<iostream>
#include<limits>
using namespace std;

//addition overflow check
bool addOverflows(int a, int b) {
    return (b > 0 && a > numeric_limits<int>::max() - b); 
}
//substraction overflows check.
bool subOverflows(int a, int b) {
    return (b < 0 && a > numeric_limits<int>::max() + b); 
}
//multiply overflows check
bool mulOverflows(int a, int b) {
   return (a > 0 && b > 0 && a > numeric_limits<int>::max() / b) || (a < 0 && b < 0 && a < numeric_limits<int>::max() / b); 
}

//division overflows check
bool divOverflows(int a, int b) {
   return  (b == 0)||(a == numeric_limits<int>::min() && b == -1);
}

int main() {
    int a = 2147483647;                 
    int b = 1;

    //check over/underflows for addition
    if(addOverflows(a,b)){
        cout<<"Addition Overflows"<<endl;
    }
    else {
        cout<<"Addition dose not overflow"<<endl;
    }

    //check for substraction.
    if(subOverflows(a,b)) {
        cout<<"substraction Overflows"<<endl;
    }
    else {
        cout<<"substraction dose not overflow"<<endl;
    }

    //check for multiplication
    if(mulOverflows(a, b)) {
        cout<<"Multiplication Overflows"<<endl;
    }
    else {
        cout<<"Multiplication dose not overflow"<<endl;
    }

    //check for division 
    if(divOverflows(a, b)) {
        cout<<"Division Overflows"<<endl;
    }
    else {
        cout<<"Division dose not overflow"<<endl;
    }
    return 0;
}
