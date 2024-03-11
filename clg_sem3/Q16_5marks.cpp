//Write a progarm involving function template
#include<iostream>
using namespace std;
#define pi 3.174

void AreaAndCercumfrence(int redius){
    double area = pi * redius * redius;
    cout<<"The area of the circle is : "<<area <<endl;

    //cercumfrence of the circle
    double circum = 2 * pi * redius;
    cout<< "The Circumfrence of the circle is : "<<circum <<endl;
}

int main(){
    int redius;
    cout<<"Enter the redius of the circle is : "<<endl;
    cin>>redius;
    AreaAndCercumfrence(redius);
}
