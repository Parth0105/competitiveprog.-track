#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;

        }
        else if(n%2==1)
        {

            long long int ctr=1;
            for(int i=2;i<=n/2;i++)
            {
                if(n%i==0)
                    ctr=i;

            }
            cout<<ctr<<" "<<n-ctr<<endl;


        }
    }


}
