#include <iostream>
using namespace std;
int main() {
    int a[100][100],m,n,diff,i,j,sum1=0,sum2=0;
    cin>>n;
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
        cin>>a[i][j];
    }
    }
    m=n;i=0;j=0;
    while(m)
        {
        sum1=sum1+a[i][j];
        i=i+1;j=j+1;
        m=m-1;
    }
    m=n;i=0;j=n-1;
    while(m)
        {
        sum2=sum2+a[i][j];
        i=i+1;j=j-1;
        m=m-1;
    }
    if(sum1>sum2)
    diff=sum1-sum2;
    else
       diff = sum2-sum1;
    cout<<diff;
    return 0;
}