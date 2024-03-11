#include<iostream>
using namespace std;
int sumDivisibleBy9(int start, int end){
    int sum=0;
    for(int i=start; i<end; i++){
        if (i % 9 == 0){
            sum += i;
        }
    }
    return sum;
}
int main(){
    int start = 100;
    int end = 200;
    int sum = sumDivisibleBy9(start,end);
    cout<<"The sum of all integer between "<< start <<" and "<< end <<" which are divisible by 9 "<< sum <<endl;
}