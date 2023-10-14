#include<iostream>
using namespace std;
/*
ENTER THE SIZE OF THE PATTERN = 5
  *  
  *
*****
  *
  *
*/
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF THE PATTERN = ";
    cin>>n;
    for(int i=0;i<n;i=i+1)
    {
        for(int j=0;j<n;j=j+1)
        {
            if(i==n/2 || j==n/2)
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
