#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,T,n,k;
    cin>>T;

    for(i = 1; i<=T; i++)
    {
        cin>>n;
        for(j = 1; j<=n; j++){

           for(k=1; k<=n; k++)
           {
                cout<<"*";
           }

        cout<<endl;
        }

       if(T>i)
            {
               cout<<endl;
            }

    }
    return 0;
}
