// ENTER THE NUMBER= 8
// ********
// ***  ***
// **    **
// *      *
// **    **
// ***  ***
// ********




#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cout<<"ENTER THE NUMBER= ";
    cin>>n;
    int x=n/2,inc=0;
    for(int i=1;i<n;i=i+1)
    {
        for(int j=1;j<=x;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=inc;j++)
        {
            cout<<" ";
        }
         for(int j=1;j<=x;j++)
        {
            cout<<"*";
        }
        if(i<n/2)
        {
            x=x-1;
            inc=inc+2;
        }
        else
        {
            x=x+1;
            inc=inc-2;
        }
          cout<<endl;
    }
  
 }