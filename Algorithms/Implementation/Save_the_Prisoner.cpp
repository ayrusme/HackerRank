#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long int test_cases,nop,nos,start_id,op;
    cin>>test_cases;
    while(test_cases)
    {
     cin>>nop>>nos>>start_id;
     if(nos>nop){
     op=((nos-nop)+(start_id-1))%nop;
     }
     else
     {
     op=(nos+start_id)-1;
     }
     cout<<op<<"\n";
     test_cases-=1;
    }
    return 0;
}
