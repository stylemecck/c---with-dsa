#include <iostream>
#include<string>
using namespace std;

void ReverseString (string str) {
    int length = str.length();
    for (int i = length-1; i>=0; i--){
        cout<<str[i];
    }
}
int main(){
    string str;
    cout<<"Enter String:"<<endl;
    getline(cin, str);
      cout << "The reversed string is: ";
    ReverseString(str);
}