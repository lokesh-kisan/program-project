#include<iostream>
using namespace std;
int main()
{
    int a,b,H;
    cout<<"Enter two numbers";
    cin>>a>>b;
    for(H=a<b?a:b; H>=1; H--)
        if(a%H==0 && b%H==0)
            break;
    cout<<"HCF is "<<H;
}
