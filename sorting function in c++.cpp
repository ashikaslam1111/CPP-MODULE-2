#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a= {1,5,3,6,7,2};
    sort(a.begin(),a.end());
    for(int i=0; i<6; i++)
    {
        cout<<a[i];
        cout<<"\n";
    }
    return 0;
}
