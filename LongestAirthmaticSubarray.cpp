#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num of element in array : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the value of array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int pd = arr[1]-arr[0];
    int count = 2, ans = 2, i = 2;
    
    while(i<n)
    {
       if(pd == arr[i] - arr[i-1])
       {
           count++;
       }
       else
       {
           pd = arr[i] - arr[i-1];
           count = 2;
       }
       ans = max(count,ans);
       i++;
    }

    cout<<"Longest Aithmetic Subarray is : "<<ans;

    return 0;
}