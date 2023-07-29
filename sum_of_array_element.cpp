#include<iostream>
using namespace std;
int main()
{
    int A[10],n,i,sum;
    sum=0;
    cout<<"Enter num of element: ";
    cin>>n;
    cout << "\nEnter the elements of the array : ";
    for (i = 0; i < n; i++)
    cin >> A[i];
    for(i=0;i<n;i++)
    {
        sum+=A[i];
    }
    cout<<"Sum is: "<<sum;
    return 0;

}



