#include<iostream>
using namespace std;

//addition overflow check
bool addOverflows(int a, int b) {
    return(a+b)<a || (a+b) <b;
}

//substraction overflows check.
bool subOverflows(int a, int b) {
    return (a-b) > a || (a-b) >b;
}

//multiply overflows check
bool mulOverflows(int a, int b) {
    return (a/b)*b != a || (a*b)/a !=b;
}

//division overflows check
bool divOverflows(int a, int b) {
   return (a/b)*b != a || (a/b)*b != b;
}

int main() {
    int num1 = 21;
    int num2 = 10;

    //check over/underflows for addition
    if(addOverflows(num1,num2)){
        cout<<"Addition Overflows"<<endl;
    }
    else {
        cout<<"Addition dose not overflow"<<endl;
    }

    //check for substraction.
    if(subOverflows(num1,num2)) {
        cout<<"substraction Overflows"<<endl;
    }
    else {
        cout<<"substraction dose not overflow"<<endl;
    }

    //check for multiplication
    if(mulOverflows(num1, num2)) {
        cout<<"Multiplication Overflows"<<endl;
    }
    else {
        cout<<"Multiplication dose not overflow"<<endl;
    }

    //check for division 
    if(divOverflows(num1, num2)) {
        cout<<"Division Overflows"<<endl;
    }
    else {
        cout<<"Division dose not overflow"<<endl;
    }
    return 0;
}
