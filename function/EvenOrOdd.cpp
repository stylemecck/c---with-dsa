//Chcek even or not
#include<iostream>
using namespace std;
void EvenOrNot( int num)
{
    if(num%2==0){
        cout<<"Given number is Even";
    }
    else{
        cout<<"Given no is odd";
    }
}
int main()
{
    int InputNum;
    cout<<"Input integer number to know that is even or odd:"<<endl;
    cin>>InputNum;
    EvenOrNot(InputNum);
}