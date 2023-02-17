#include<iostream>
#include<conio.h>
using namespace std;
void max(int,int,int);
int main()
{
    
    int x,y,z;
    cout<<"enter three numbers \n";
    cin>>x>>y>>z;
    max(x,y,z);
    getch();
}
void max(int a, int b,int c)
{
    if(a>b && b>c)
    cout<<"max="<<a;
    else if (b>a && a>c)
    cout<<"max="<<b;
    else
    cout<<"max="<<c;
}
