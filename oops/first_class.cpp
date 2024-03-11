#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student
{
    private:  
    string gf;
    // Student(){
    //     cout<<"Default constructor is called: ctor is equal to constructor"<<endl;
    // }

    public:
    int id;
    int age;
    bool present;
    string name;
    int nos;

    //default constructor.
    Student(){
        cout<<"Default constructor is called: ctor is equal to constructor"<<endl;
    }
    // constructor called with gf
    // Student (int id, int age, bool present, string name, int nos, string gf) {
    //     this->id= id;
    //     this->age = age;
    //     this->present = present;
    //     this->name = name;
    //     this->nos = nos;
    //     this->gf = gf;
    // }
    //  // constructor called with no gf.
    // Student (int id, int age, bool present, string name, int nos){
    //     this->id = id;
    //     this->age = age;
    //     this ->present = present;
    //     this->name = name;
    //     this->nos = nos;
    // }
};

int main (){
    
    Student s1;

    // Student s2(1, 18, 1, "satyam", 5, "Swetanjali");
    // cout<<"Name: "<<s2.name<<endl;
    // cout<<"Age: "<<s2.age<<endl;
    // cout<<"Gf name: "<<s2.gf<<endl;
}