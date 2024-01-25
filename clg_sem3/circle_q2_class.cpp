#include<iostream>
using namespace std;

class circle {
    private:
    const double PI=3.14;
    double redius;

    public: 
    circle(double r){
        redius =r;
    }
    double getcircumfrenece(){
        return 2 * PI * redius;
    }
};

int main() {
    double redius;
    cout<<"Enter the redius of the circle: "<<endl;
    cin>>redius;
    circle circle(redius);
    cout<<"The Circumfrenece of the circle is "<<circle.getcircumfrenece()<<endl;
}