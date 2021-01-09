#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<pair<int,int>> V;
		int N;
		cin>>N;
		int f[N],c[N];
		for(int i=0;i<N;i++)
		{
			cin>>f[i];
		}
		for(int i=0;i<N;i++)
		{
			cin>>c[i];
		}
		for(int i=0;i<N;i++)
		{
			V.push_back(make_pair(c[i],f[i]));
		}
		sort(V.begin(),V.end());
		int i=0,cost=0;
		while(N!=0)
		{
			if(V[i].second<=N)
			{
				cost=cost+(V[i].second*V[i].first);
			}
			else
			{
				cost=cost+(N*V[i].first);
			}
			i++;
		}
		cout<<cost<<endl;
		
	}
	
}
