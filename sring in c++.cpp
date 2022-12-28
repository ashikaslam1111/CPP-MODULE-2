#include<iostream>
using namespace std;
int main()
{
    string s1,s2,s3;
    s1="hello world";
    s2="como esta";
    s3=s1+" "+s2;
    cout<<s3<<"\n";
    cout<<s3.size()<<"\n";// this is a way to find the len of sring
    for(int i =0; i<s3.size(); i++)
    {
        if(s3[i]!= ' ')
        {
            s3[i]=s3[i]+1;
        }
    }
    cout<<s3<<"\n";
    return 0;
}
