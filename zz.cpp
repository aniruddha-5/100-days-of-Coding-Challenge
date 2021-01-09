#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
for(int i = 0 ; i < s.size() ; i++)
{
    auto tmp=s;
    tmp.erase(i, 1);
    cout << tmp <<endl;
}
}
