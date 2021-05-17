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

    const int N = 10^6;
    int idx[N];

    for(int i=0; i<N; i++)
    {
       idx[i] = -1;
    }
    
    int minnum = INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(idx[arr[i]] != -1)
        {
           minnum = min(minnum, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }

    if(minnum == INT_MAX)
    {
         cout<<"-1"<<endl;
    }
    else
    {
        cout<<"First Repeating Element is : "<<minnum + 1<<endl;
    }

    return 0;
}