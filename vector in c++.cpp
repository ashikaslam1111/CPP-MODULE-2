#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    for(int i=0; i<10; i++)
    {
        cout<<"before push "<<a.size()<<"\n";
        a.push_back(i);
        cout<<"after push "<<a.size()<<"\n";
    }
    a.insert(a.begin()+0,100);
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<"\n";
    }
    a.erase(a.begin()+0);
    cout<<"after delete\n";
    a.pop_back();
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}
