#include <iostream>
using namespace std;
int main()
{
int n1, n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    if(n1==n2 || n1==n3 || n1==n4)
    {  if(n1==n4 && n2!=n3 && n2!=n4 )
        {cout<<"2";}
        else if(n2==n3 || n2==n4 )
        {
            if(n3==n4) {cout<<"3";}
            else {cout<<"2";}
         }
        else{cout<<"1"<<endl;}
        }

    return 0;
}