#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(int arr[],int size)
{
    unordered_map<int,int> umap;
    for(int i=0;i<size;i++)
    {
        umap[arr[i]]++;
    }
    unordered_map<int,int> umap2;
    for(auto it: umap)
    {
        umap2[it.second]++;
    }
    if(umap.size()==umap2.size())
        return true;
    else
        return false;
}
int main()
{
    int arr1[6] = {1,2,2,1,1,2};
    int result = uniqueOccurrences(arr1,6);
    if(result)
    {
        cout <<"True"<<endl;
    }
    else
    cout <<"False"<<endl;
}