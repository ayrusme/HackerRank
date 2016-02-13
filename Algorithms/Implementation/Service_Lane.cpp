#include <iostream>
using namespace std;
int main() {
    int n,t,i,j,min,a[100000];
    cin>>n>>t;
    for(i=0;i<n;i++)
        {
        cin>>a[i];
    }
    while(t--)
        {
        cin>>i>>j;
         min=a[i];
        for(int k=i;k<=j;k++)
            { 
            if(min>a[k])
               min=a[k]; 
        }
        cout<<min<<endl;;
    }
    return 0;
}
