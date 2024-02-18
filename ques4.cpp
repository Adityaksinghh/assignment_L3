//Ques : Given the length and breadth of a rectangle,
//write a program to find whether numerically the area of the rectangle is greater than its perimeter.


#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"enter length of rectangle: ";
    cin>>l;
    cout<<"enter breadth of rectangle: ";
    cin>>b;
    int area=l*b;
    int perimeter=2*(l+b);
    if(area>perimeter){
        cout<<area<<" area is greater than perimeter "<<perimeter;

    }
   else{
    cout<<area<<" area is not greater than perimeter"<<perimeter;

   }
}
