#include<iostream>
using namespace std;
class comp
{
    private:
    int a,b;
    public:
    void get_data()
    {
        cout<<"Enter the value of a = ";
        cin>>a;
        cout<<"Enter the value of b = ";
        cin>>b;
    
    }
    void showdata()
    {
        cout<<"The sum is = "<<a<<"\t"<<b<<endl;
    }
    comp operator +(comp c)
    {
        comp temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};
int main()
{
    comp c1,c2,c3;
    c1.get_data();
    c2.get_data();
    c3=c1+c2;
    c3.showdata();
    return 0;
} 