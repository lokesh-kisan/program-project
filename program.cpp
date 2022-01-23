#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
using namespace std;
class program
{
    int N,i;
public:
    void prime();
    int facto(int); //recursion
    void star();

};
void program::star()
{
    int i,row,k,flag=1;
    cout<<"Enter number of line";
    cin>>row;
    for(i=1,k=0;i<=2*row-1;i++){
        if(i<row-k)
            printf(" ");
        else{
            if(flag)
              cout<<"*";
            else
                cout<<" ";
        flag=1-flag;
    }
    if(i==row+k){
        k++;
        cout<<"\n";
        if(i==2*row-1)
            break;
        i=0;
        flag=1;
    }
  }
}
int program:: facto(int n)
    {

        if(n>0)
            return(n*facto(n-1));
        else
            return(1);
    }
void program::prime()
    {
        int x=2;
        cout<<"Enter a number";
        cin>>N;
        while(N)
        {
             for(i=2;i<x;i++)
                if(x%i==0)
                    break;
              if(i==x){
                cout<<" "<<x;
                N--;
              }
              x++;
        }
    }
int menu()
{
    int choice;
    cout<<"n1. prime numbers"<<endl;
    cout<<"n2. factorial number"<<endl;
    cout<<"n3. star pattern"<<endl;
    cout<<"n4. exit"<<endl;
    cin>>choice;
    return choice;
}
int main()
{
    int no,choice;
    program i1;
    while(1){
        system("cls");
        switch(menu())
        {
        case 1:
            i1.prime();
            getch();
            break;
        case 2:
            cout<<"Enter a number";
            cin>>no;
            cout<<i1.facto(no);
            getch();
            break;
        case 3:
            i1.star();
            getch();
            break;
        case 4:
            cout<<"Thank you for using this application";
            cout<<"Press any key to exit";
            getch();
            exit(0);
        default:
            cout<<"\n Invalid choice";
            getch();
       }
    }
}
