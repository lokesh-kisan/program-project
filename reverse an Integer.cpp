#include<iostream>
using namespace std;
int main()
{
    int n,reversed_no=0,remainder;
    cout<<"Enter a number";
    cin>>n;
    while(n!=0){
        remainder=n%10;
        reversed_no=reversed_no*10+remainder;
        n/=10;
    }
    cout<<"Reverse number ="<<reversed_no;
}
