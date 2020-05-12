#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"\t\t\t\tPlease Wait While Loading........"<<endl;
    char a=177,b=219;
    cout<<"\t\t\t";
    for(int k=0;k<=15;k++)
    cout<<a;
    cout<<"\r";
    cout<<"\t\t\t";
    for(int l=0;l<=15;l++)
    {
        cout<<b;
       for(int j=0;j<=1e7;j++); //You can also use another functions..
    }
    system("cls");
    cout<<"Welcome to Tips and Tricks\nPlease Subscribe";
    getch();
}