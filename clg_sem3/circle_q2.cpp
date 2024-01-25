// Write a program to calculate the circumference of a circle using const keyword.
#include<iostream>
using namespace std;
void circleCerum(int redius){
    const float pi=3.142;
    float cercum = 2*pi*redius;
    cout<<"The Circumference of a circle is = "<<cercum;
}
int main(){
    int redius;
    cout<<"Enter the redius of circle: "<<endl;
    cin>>redius;
    circleCerum(redius);
}