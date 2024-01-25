#include<iostream>
using namespace std;

void tableNum(int number){
    for(int i=1; i<=10; i++ ){
        cout<<i*number<<endl;
    }
}
int main(){
    tableNum(6);
}