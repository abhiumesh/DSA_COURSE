#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int size)
{
    int start = 0;
    int end = size-1;
    while(start<=end)
    {
        swap(arr[start++],arr[end--]);
    }
}
int main()
{
    int arr[6] = {2,5,8,9,6,4};
    cout <<"Array Element :- "<<endl;
    for(auto value:arr)
    {
        cout <<value <<" ";
    }
    cout << endl;
    reverseArray(arr,6);
    cout <<"Reverse the array Element:- "<<endl;
    for(auto value:arr)
    {
        cout <<value <<" ";
    }
}