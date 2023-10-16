//Sum N even number
#include<iostream>
using namespace std;
void SumNeven(int num)
{
    int sum;
    for(int i=0; i<=num; i++)
    {
        int Even_Numer=2*i;
        sum=sum+Even_Numer;
    }
    cout<<sum;
}
int main()
{
    int term;
    cout<<"Enter the n term of the number"<<endl;
    cin>>term;
   SumNeven(term); 
}