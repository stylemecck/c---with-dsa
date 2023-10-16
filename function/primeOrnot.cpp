//check prime or not
 #include<iostream>
 #include <cmath>
 using namespace std;
bool Checkprime( int num)
 {
   if (num <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    if (num <= 3) {
        return true; // 2 and 3 are prime numbers
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Divisible by 2 or 3
    }
     

    return true;
}
 
 int main()
 {
    int number;
    cin>>number;
    if(Checkprime(number))
    {
        cout<<"is prime";
    }
    else{
        cout<<"not prime";
    }
 }