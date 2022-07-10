#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ss;
    cout << "Enter the some character:- " << endl;
    getline(cin, ss);

    string temp;             // To make a valid string
    for (int i = 0; i < ss.size(); i++)
    {
        if ((ss[i] >= 'a' && ss[i] <= 'z')||(ss[i] >= '0' && ss[i] <= '9'))
            temp.push_back(ss[i]);
        if(ss[i]>='A' && ss[i]<='Z')
          {
            temp.push_back(ss[i]+32);
          }
    }
    
    int start = 0,end = temp.size()-1;
    bool right = true;
    while(start<=end)
    {
        if(temp[start++]!=temp[end--])
            right = false;
            break;
    }
    if(right)
        cout <<"success"<<endl;
    else
        cout <<"Not success"<<endl;
}