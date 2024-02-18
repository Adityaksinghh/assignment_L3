//Ques : Given the radius of the circle predict whether numerically
//area of this circle is larger than the circumference or not

#include<iostream>
using namespace std;
int main(){
    float r;
    cout<<"enter the radius: ";
    cin>>r;
    float area=3.14*r*r;
    float circum=2*3.14*r;
    if(area>circum){
        cout<<area<<" area of circle is larger than circumference "<<circum;

    }
    else{
        cout<<area<<" area of circle is not larger than circumference "<<circum;

    }
}