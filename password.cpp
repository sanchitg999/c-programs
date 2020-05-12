#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter Password - ";
    char ch;
    string password="";
    ch=getch();
    while(ch!=13)//13 means Enter so it will stop when enter is pressed
    {
        password.push_back(ch);
        cout<<"*";
        ch=getch();
    }
    cout<<"\nNow you can use in your Programs..."<<endl;
    cout<<"Thankyou Please Subscribe....!!!";
    return 0;

}