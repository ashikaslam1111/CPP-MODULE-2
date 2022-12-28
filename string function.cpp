#include<iostream>
using namespace std;
void sr(string &s)
{
    s.pop_back();
    s.erase(s.begin()+0);
}
int main()
{
    string s1;
    getline(cin,s1);
    sr(s1);
    cout<<"\n"<<s1;
    return 0;
}

