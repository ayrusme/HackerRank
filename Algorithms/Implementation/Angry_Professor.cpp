#include <iostream>
using namespace std;

int main() { 
    int t,n,k,a,in;
    cin>>t;
    while(t--)
        {  in=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
            {
            cin>>a;
            if(a<=0)
                {
                in=in+1;
                }
        }
        if(in>=k)
            {
            cout<<"NO\n";
        }
        else if(in<k)
            {
            cout<<"YES\n";
        }
    }
    return 0;
}
