#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swapAlter(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1 < size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int arr1[6] = {2,5,8,9,6,4};
    int arr2[5] = {2,5,8,9,6};
    swapAlter(arr1,6);
    for(auto value:arr1)
    {
        cout <<value <<" ";
    }
    cout <<endl;
    swapAlter(arr2,5);
    for(auto value:arr2)
    {
        cout <<value <<" ";
    }
}