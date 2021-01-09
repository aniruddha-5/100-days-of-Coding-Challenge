#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		multiset<int> ms;
		vector<pair<int,int>> ans;
		for (int i = 1; i <= n; i++) 
		{
			ms.insert(i);
		}
		for(int i=0;i<n-1;i++)
		{
		auto it = ms.end();
		it--;
		int a = *it;
		ms.erase(it);
		it = ms.end();
		it--;
		int b = *it;
		ms.erase(it);
		ms.insert((a+b+1)/2);
		ans.push_back(make_pair(a,b));
		}
		cout << *ms.begin() << endl;
		for (int i = 0; i <ans.size(); i++) 
		{
			cout << ans[i].first << ' ' << ans[i].second << endl;
		}
		}
	
}
