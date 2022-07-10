#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr,int n)
{
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[5] = {1,1,2,2,3};
    int unique = findUnique(arr,5);
    cout <<"Uniqe element :- "<<unique<<endl;
}