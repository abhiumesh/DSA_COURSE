#include<iostream>
using namespace std;

bool ArrayFun(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
            return true;
    }
    return false;
}

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
    int key;
    cout <<"Enter the key :- "<<endl;
    cin >> key;
    bool access = ArrayFun(arr,size,key);
    if(access)
    {
        cout <<"Number is founded"<<endl;
    }
    else{
        cout <<"Number is not founded"<<endl;
    }
}