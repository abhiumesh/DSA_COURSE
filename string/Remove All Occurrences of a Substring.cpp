#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s = "daabcbaabcbc";
  string part = "abc";
  while(s.length()!=0 && (s.find(part)<s.size()))
    {
      s.erase(s.find(part),part.length());
    }
  cout << s <<endl;
}