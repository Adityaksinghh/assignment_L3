//Ques : Given three points (x1, y1), (x2, y2) and 
//(x3, y3), write a program to check if all the three points fall on one straight line.

#include<iostream>
using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3,slope1,slope2;
    cout<<"enter the value(x1,y1):  ";
    cin>>x1>>y1;
    cout<<"enter the value (x2,y2): ";
    cin>>x2>>y2;
    cout<<"enter the value (x3,y3): ";
    cin>>x3>>y3;
    slope1=(y2-y1) / (x2-x1);
    slope2=(y3-y2) / (x3-x2);
    if(slope1==slope2){
        cout<<"all the three point points fall on one straight line";
    }
    else{
        cout<<"all the three points don't fall on straight line ";
    }

}