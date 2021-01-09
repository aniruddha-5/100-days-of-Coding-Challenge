#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,M,K,count=0;
	cin>>N>>M>>K;
	while(N--)
	{
		vector<int>T(K);
		int Q;
		int sum=0;
		for(int i=0;i<K+1;i++)
		{
			if(i==K)
			{
				cin>>Q;
			}
			else
			{
				cin>>T[i];
				sum=sum+T[i];
			}
		}
		if(sum>=M && Q<=10)
		{
			count++;
		}
	}
	cout<<count<<endl;
}
