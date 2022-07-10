#include <bits/stdc++.h>
using namespace std;

void reverse_The_Array(vector<int> &arr, int m)
{
    int start = m + 1;
    int end = arr.size() - 1;
    while (start <= end)
    {
        swap(arr[start++], arr[end--]);
    }
}

int main()
{
    int size;
    cout << "Enter the Size of array:- " << endl;
    cin >> size;
    cout << "Enter the number:- " << endl;
    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    for (auto value : arr)
    {
        cout << value << " ";
    }
    int position;
    cout << "Enter the Position:- " << endl;
    cin >> position;

    reverse_The_Array(arr, position);

    cout << "After passing the Array Array Look like.." << endl;
    for (auto value : arr)
    {
        cout << value << " ";
    }
}
