#include <iostream>
using namespace std;

char ti[10];
int h1,h2,m1,m2,s1,s2;
void AM();
void PM();
void integer_conv();
int main() {
    cin>>ti;
    if(ti[8]=='P')
        PM();
    else
        AM();
    
    cout<<h1<<h2<<":"<<m1<<m2<<":"<<s1<<s2;
    return 0;
}
void integer_conv()
    {
    h1=ti[0]-'0';
    h2=ti[1]-'0';
    m1=ti[3]-'0';
    m2=ti[4]-'0';
    s1=ti[6]-'0';
    s2=ti[7]-'0';
}
void AM()
    {
  integer_conv();
    if(h2==2)
        {
        h1=0;
        h2=0;
    }
}
void PM()
    {
    integer_conv();
    if(h1==1&&h2==2)
        {
        h1=1;
        h2=2;
    }
    else 
        {
        if(h2<8)
            {
            h1+=1;
            h2+=2;
        }
        else if(h2>=8)
            {
            h1+=2;
            h2+=2;
        }
    }
}