#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,T,n,j;
    cin>>T;

    for(i = 1; i<= T; i++)
    {
        cin>>n;
        printf("Case %d:",i);

        for(j=1; j<=n; j++)
        {
            if(n%j == 0)
            {
                printf(" %d",j);
            }
        }
        printf("\n");
    }
    return 0;
}
