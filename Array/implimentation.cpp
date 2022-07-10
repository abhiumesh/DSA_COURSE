#include<iostream>
using namespace std;
int main()
{
    int size;
    cout <<"Enter the size of array:- "<<endl;
    cin >> size;
    int arr[size];
    cout <<"Enter the element:- "<<endl;
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    cout <<"This is container:- "<<endl;
    for(auto value : arr)
    {
        cout <<value<<" ";
    }
}