//Function to find area odf the circle
#include<iostream>
using namespace std;
void CircleArea(int Redius)
{
    float area=3.14*Redius*Redius;
    cout<<"Area of the circle "<< area;
} 
int main()
{
    int term;
    cout<<"Enter the redius of circle"<<endl;
    cin>>term;
    CircleArea(term);
}