//Ques : If the marks of A, B and C are input through the keyboard, 
//write a program to determine the student scoring least marks. 

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter first marks: ";
    cin>>a;
    cout<<"enter second marks: ";
    cin>>b;
    cout<<"enter third marks: ";
    cin>>c;
    if((a<b) && (a<c)){
        cout<<a<<" is least marks";

    }
    else if((b<a) && (b<c)){
        cout<<b<<" is least marks";
    }
    else{
        cout<<c<<" is least marks";
    }
    
    
            
        
    }