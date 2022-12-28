#include<iostream>
using namespace std;
int main()
{
    string s="ashik aslam";
    s.pop_back();// it remove element from the back one by one.
    s.erase(s.begin()+0);
    cout<<s<<"\n";
    string s1;
    getline(cin,s1);
    cout<<"\n"<<s1;
    return 0;
}
