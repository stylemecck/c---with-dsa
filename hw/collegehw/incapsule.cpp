#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
    string name;
    int age;

    public:
    Person(string name, int age)
    {
        this->name=name;
        this-> age = age;
    }

    void setName(string name)
    {
        this-> name =name;
    }

    string getName()
    {
        return name;
    }

    void setAge(int age)
    {
        this-> age= age;
    }
    int getAge (){
        return age;
    };
};
int main()
{
        Person person("asutosh",120);
        cout<<"Name:"<<person.getName()<<endl;
        cout<<"Age:"<<person.getAge()<<endl;

        cout<<"Enter name and age:"<<endl;
        cin>>person.setName();
        person.setAge(20);
        cout<<"Name:"<<person.getName()<<endl;
        cout<<"Age:"<<person.getAge()<<endl;
}
