#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int i,n,a[100],sum=0,ans=0;

    cin>>n;
    for (i=0;i<n;i++)
        cin>>a[i+1];
    for (i=1;i<=n;i++)
    {
        if (sum<0)
            sum=0;
        sum+=a[i];
        if (sum>ans)
            ans=sum;
    }
    cout<<ans<<endl;
    return 0;
}

