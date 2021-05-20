#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cout<<"Enter the num of element in array : ";
    cin>>n;

    cout<<"Give a sum for comparison : ";
    cin>>s;

    int arr[n];
    cout<<"Enter the value of array "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    int i=0, j=0, st=-1, ed=-1, sum=0;

    while(j<n && sum+arr[j]<=s)
    {
        sum+=arr[j];
        j++;
    } 
    
    if(sum == s)
    {
        cout<<"Matched Subarray is :"<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n)
    {
        sum+=arr[j];
        
        while(sum > s)
        {
            sum-=arr[i];
            i++;
        }

        if( sum == s )
        {
           st = i+1;
           ed = j+1;
           break;
        }
        
        j++;
    }

   cout<<"Matched Subarray is :"<<st<<" "<<ed<<endl;

   return 0;

}