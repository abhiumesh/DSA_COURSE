#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the number:- "<<endl;
    vector<int> arr;
    for(int i=0;i<5;i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    for(auto value:arr)
    {
        cout << value<<" ";
    }
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    }
    cout << endl;
    for(auto value:arr)
    {
        cout << value<<" ";
    }
}