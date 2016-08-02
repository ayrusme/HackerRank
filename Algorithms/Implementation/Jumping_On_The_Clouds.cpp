#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,c[100],i,count=0;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>c[i];
        }
       i=0;
       while(i<n-1)
        {
        if(c[i+2]==0)
            {
            i=i+2;
            count=count+1;
            }
        else if(c[i+1]==0)
            {
            i=i+1;
            count=count+1;
            }
        }
        cout<<count;
    return 0;
}