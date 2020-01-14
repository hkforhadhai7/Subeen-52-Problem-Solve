#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,T,n,rem,rem1;

    cin>>T;

    for(i = 1; i<=T; i++)
    {
      cin>>n;
      rem = n%10;

      while(n>=10)
      {
          n = n/10;
      }
      rem1 = n%10;

      cout<<"Sum = "<<rem+rem1<<endl;
    }

    return 0;
}
