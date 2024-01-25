// Write a C++ program to find the total number of minutes between two given times (formatted with a colon and am or pm).
#include<iostream>
#include<sstream>

using namespace std;

int time2mintues( const string & time) {
    int hh, mm;
    char ampm;
    stringstream ss(time);
    ss>>hh;
    ss.ignore(1, ':');
    ss>>mm;
    ss >> ampm;
    //adjusting hours for am and pm
    if(ampm == 'p' || ampm=='P') {
        hh +=12;
    }

    return hh * 60 + mm;
}

int main() {
    string time1, time2;
    cout<<"Enter the first time (hh:mm am/pm): ";
    getline(cin, time1);

    cout<<"Enter the second time (hh:mm am/pm): ";
    getline(cin, time2);

    //convert time to minutes
    int minutes1 = time2mintues(time1);
    int minutes2 = time2mintues(time2);

    //calculate diff. in minutes.

    int diff = abs(minutes2-minutes1);
    cout<<"The total number of minitues between the two time is "<<diff<< " minutes"<<endl; 
}