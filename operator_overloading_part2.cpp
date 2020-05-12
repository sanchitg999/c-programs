#include<iostream>
using namespace std;
class comp
{
    private:
    int a;
    public:
    void get_data()
    {
        cout<<"Enter the value of a = ";
        cin>>a;
    
    }
    void showdata()
    {
        cout<<"The result is = "<<a<<endl;
    }
    comp operator -()
    {
        comp temp;
        temp.a=-a;
               return(temp);
    }
};
int main()
{
    comp c1,c3;
    c1.get_data();
       c3=-c1;
    c3.showdata();
    return 0;
} 