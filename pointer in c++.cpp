#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int* ptr=&a;
    cout<<a<<" "<<ptr<<" "<<*ptr<<"\n";
    a=100;
    cout<<a<<" "<<ptr<<" "<<*ptr<<"\n";
    return 0;
}
