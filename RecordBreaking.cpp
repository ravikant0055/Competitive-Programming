#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num of element in array : ";
    cin>>n;
    
    int arr[n+1];
    arr[n] = -1;
   
    cout<<"Enter the value of array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    if(n == 1)
    {
        cout<<"1"<<endl;
        return 0;
    }

    int ans = 0;
    int maxnum = -1;

    for(int i=0 ; i<n; i++)
    {
        if(arr[i]>maxnum && arr[i]>arr[i+1])
        {
            ans++;
        }
        maxnum = max(maxnum, arr[i]); 
    }

    cout<<"Record breaking days : "<<ans<<endl;

    return 0;
}