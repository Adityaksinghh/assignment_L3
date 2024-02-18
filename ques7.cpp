//Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). 

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter value of x: ";
    cin>>x;
    cout<<"enter value of y: ";
    cin>>y;
    if(x==0 && y==0){
        cout<<"the point lies on origin";

    }
    else if(x!=0 && y==0){
        cout<<"the point lies on x-axis";

    }
    else if(x==0 && y!=0){
        cout<<"the point lies on y-axis";

    }
    else{
        cout<<"the point lies on plane";
    }

}