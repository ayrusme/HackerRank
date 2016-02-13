#include <iostream>
using namespace std;


int main() {
    int n,i,j,x;
    cin>>n;
    if (n>100||n<0)
        {
        goto end;
    }
    x=n;
    for(i=0;i<n;i++)
        {
    for(j=0;j<x-1;j++)
        {
        cout<<" ";
    }
        for(j=x-1;j<n;j++)
            {
            cout<<"#";
        }
        cout<<"\n";
        x--;
    }
    end:
    return 0;
}