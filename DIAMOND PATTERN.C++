#include<iostream>
using namespace std;

/*

ENTER THE SIZE OF THE PATTERN = 5
  1
 123
12345
 123
  1

*/
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF THE PATTERN = ";
    cin>>n;
    int x=n/2,inc=1;
    for(int i=1;i<=n;i=i+1)
    {
        for(int j=1;j<=x;j=j+1)
        {
            cout<<" ";
        }
        for(int j=1;j<=inc;j=j+1)
        {
            cout<<j;
        }
        if(i<(n/2+1))
        {
            x=x-1;
            inc=inc+2;
        }
        else
        {
            x=i-n/2;
            inc=inc-2;
        }
        cout<<endl;
    }
}
    
