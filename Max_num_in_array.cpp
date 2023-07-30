#include<iostream>
using namespace std;
int main()
{



    int A[10];
    int i,n,max;
    max=0;
    cout<<"enter a array element size: ";
    cin>>n;
    cout<<"enter a array element: ";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for( i=0;i<n;i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
    }
    cout<<"Max num is: "<<max;
    return 0;
}
