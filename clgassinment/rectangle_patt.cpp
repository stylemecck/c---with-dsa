#include<iostream>
using namespace std;

int main(){
    int digit;
    cout<<"Enter a single-digits number: ";
    cin>>digit;

    if(digit >=0 && digit <= 9) {
        for(int i=0; i<6; i++){
            for (int j=0; j<4; j++){
                cout<<digit<<" ";
            }
            cout<<endl;
        }
    }
    else 
    {
        cout<<"Please enter a valid single-digit number. " <<endl;
    }
    return 0;

}