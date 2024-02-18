//Ques : Write a program to input sides of a triangle and
//check whether a triangle is equilateral, scalene or isosceles triangle.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter first side: ";
    cin>>a;
    cout<<"enter second side: ";
    cin>>b;
    cout<<"enter third side: ";
    cin>>c;
    if((a==b) &&(b==c)){
        cout<<"it is an equilateral tringle";
            }
            else if (a==b  || b==c || a==c)
            {
                cout<<"it is an isosceles triangle";
            }
            else{
                cout<<"it is an scalene triangle";
            }
}