#include<iostream>
using namespace std;
void sw(int &x,int &y);
int main()
{
    int a=10;
    int b=20;
    sw(a,b);
    cout<<a<<" "<<b;
    return 0;
}
void sw(int &x,int &y)
{
    int z;
    z=x;
    x=y;
    y=z;
}
