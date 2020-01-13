#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,l;
    char n [101];
    cin>>T;

    for(i=1; i<=T; i++)
    {
        cin>>n;

        if( n[strlen(n)-1] %2 == 0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
    }

    return 0;
}
