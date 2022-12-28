#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin>>n;
    int *x = new int [n];
    for(int i=0; i<n; i++)
    {
        x[i]=i;
        cout<<"\n"<<i;
    }
    delete[]x;
    return 0;
}
