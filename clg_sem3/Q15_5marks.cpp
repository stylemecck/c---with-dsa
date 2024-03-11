//Write down a detailed c++ program to demonstrate the use of try, catch and throw block.
#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
    //try block
    try{ 
        int numinator = 10;
        int denominator = 0;
        //check if denominator is zero then throw the error.

        if(denominator == 0){
            throw runtime_error("Division by zero are not allowed");
        }

        // calculate if no error
        int res = numinator / denominator;
        cout<<"Result after divisions: "<<res<<endl;
    }

        //catch block to catch the throw exception
        catch (const exception &e){
            cerr<<"Exception: "<<e.what()<< endl;
        }
       
    
}