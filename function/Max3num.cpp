#include<iostream>
using namespace std;
int FindMaximum1(int a, int b, int c)
{
    int ans1 = max(a,b);
    int finalAnswer = max(ans1,c);
    return finalAnswer;
    
}

int main(){
    int num1, num2, num3;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    int maximum = FindMaximum1(num1, num2, num3);
    cout<<"maximum no is "<<maximum;
}