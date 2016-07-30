#include <iostream>
using namespace std;

int main(){
    int a[3],b[3];
    
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];
    
    int alice=0,bob=0;
             
        if(a[0]==b[0])
        {
         
        }
        else if(a[0]>b[0])
        {
            alice++;
        }
        else 
            {
            bob++;
        }
    if(a[1]==b[1])
        {
         
        }
        else if(a[1]>b[1])
        {
            alice++;
        }
        else 
            {
            bob++;
        }
    if(a[2]==b[2])
        {
         
        }
        else if(a[2]>b[2])
        {
            alice++;
        }
        else 
            {
            bob++;
        }
        
    
    
    cout<<alice<<" "<<bob;
    return 0;
}
