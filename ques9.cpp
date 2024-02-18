//Ques : Write a C++ program to input any character and
//check whether it is the alphabet, digit or special character.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character:  ";
    cin>>ch;
    int ascii=(int)ch;
    if((ascii>=65 && ascii<=90) || (ch>=97 && ch<=122)){
        cout<<ch<<" is an alphabet";
        }
    else if(ascii>=48 && ch<=57){
            cout<<ch<<" is a digit";
        }
        else{
            cout<<ch<<" is special character";
        }
}