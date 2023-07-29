#include<iostream>
using namespace std;
int main()
{
    int M[10],n,key;
    cout<<"enter num of elemnt:";
    cin>>n;
    cout<<"enter array element:";
    for(int i=0;i<n;i++)
    {
        cin>>M[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<M[i];

    }
    cout<<"enter a key:";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==M[i])
        {
            cout<<"found it";
            return 0;
        }

    }
    cout<<"not found it";
    return 0;
}
