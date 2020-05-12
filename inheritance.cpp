//single inheritance
/*#include<iostream>
using namespace std;
class a
{
    protected:
        int x=5;
};
class b:public a
{
    public:
        void show()
        {
            cout<<"The value of x = "<<x;
        }
};
int main()
{
    b b1;
    b1.show();
    return 0;
}*/
//multilevel inheritance
/*#include<iostream>
using namespace std;
class a
{
    protected:
        int x=5;
};
class b:public a
{
    protected:
    int y =7;
    public:
        void show()
        {
            cout<<"The value of x = "<<x;
        }
};
class c:public b
{
    public:
    void show1()
    {
        cout<<"\nThe value of y = "<<y;
    }
};
int main()
{
    c c1;
    c1.show();
    c1.show1();
    return 0;
}*/
//multiple inheritance
/*#include<iostream>
using namespace std;
class a//Father
{
    protected:
        int x=5;
};
class b//Mother
{
    protected:
    int y =7;
};
class c:public a,public b//child
{
    public:
    void show()
    {
        cout<<"\nThe value of x = "<<x;
        cout<<"\nThe value of y = "<<y;
    }
};
int main()
{
    c c1;
    c1.showFather();
    c1.show();

    return 0;
}
*/
//herarchical inheritance
#include<iostream>
using namespace std;
class a//Father
{
    protected:
        int x=5;
};
class b:public a//child 1
{
    public:
    void show()
    {
        cout<<"the value of ++x = "<<++x;
    }
};
class c:public a//chid 2
{
    public:
    void show1()
    {
        cout<<"\nThe value of x++ = "<<x++;
    }
};
int main()
{
    c c1;
    b b1;
    b1.show();
    c1.show1();
    return 0;
}