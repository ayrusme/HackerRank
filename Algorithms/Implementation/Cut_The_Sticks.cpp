#include <iostream>
using namespace std;


int main() {
    int n,a[1000],temp,i,j,min,count;
    cin>>n;
    
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
        }
    
    for(i=0;i<n-1;i++)
        {
    for(j=i+1; j<n;j++)
        {
        if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
        }
    min=a[0];
    while(a[n-1]!=0)
        { count=0;
        for(i=0;i<n;i++)
            {
            if(a[i]!=0)
                {
            a[i]=a[i]-min;
                count++;
                }
            }
         cout<<count<<"\n";
         for(i=0;i<n;i++)
             {
             if(a[i]!=0)
                 {
                 min=a[i];
                 break;
                 }
             }
        }
    
    return 0;
}