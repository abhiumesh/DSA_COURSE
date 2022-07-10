#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[8] = {4,3,2,7,8,2,3,1};
    unordered_map<int,int> umap;
    for(int i=0;i<8;i++)
    {
        umap[arr[i]]++;
    }
    vector<int> ans;
    for(auto value:umap)
    {
        if(value.second == 2)
        {
            ans.push_back(value.first);
        }
    }
    cout <<"This are Dupicate number:- "<<endl;
    for(auto value:ans)
    {
        cout <<value<<" ";
    }
}