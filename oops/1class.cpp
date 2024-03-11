#include<iostream>
#include<string>
using namespace std;

class Student{
    //gf name declear in private to hide details 
    private:
    string gfName;

    public:
    int id;
    int age;
    string name;
    bool present;
    int nos;

    //default constructor
    Student(){
        cout<<"Default constructor is called."<<endl; 
    }
    //constructor called with gf
    Student(int id, int age, string name, bool present, int nos, string gfName) {
        this-> id =  id;
        this-> age =  age;
        this-> name = name;
        this-> present =  present;
        this-> nos =  nos;
        this-> gfName = gfName;
        cout<<"Constructor is called with gf name"<<endl;
    }

    //constructor called without gf
    Student(int id, int age, string name,  bool present, int nos){
        this-> id =  id;
        this-> age = age;
        this-> name = name;
        this-> present = present;
        this-> nos = nos;
        cout<<"Constructor called without gf."<<endl;
    }

     // gf Name function to get gf name which is define in private
     
    void gfNamefun (string gf){
         gf = gfName;
        cout<<"GF name is : "<< gf <<endl;
    }
};

int main(){
    ::string gf;
    Student s1(101,30,"Amritpaal", 1,5, "Priti");
    cout<<"Name: "<<s1.name<<endl<<"Age: "<<s1.age<<endl;
    s1.gfNamefun(gf);
}