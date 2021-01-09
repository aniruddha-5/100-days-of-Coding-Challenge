#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long N,X;
		scanf("%lld %lld",&N,&X);
		long long A[N];
		long long bits=30;
		vector<vector<long long>> pos(31);
		vector<long long> count(31,0);
		for(long long i=0;i<N;i++)
		{
			scanf("%lld",&(A[i]));
			if(i==N-1)
			continue;
			for(long long j=30;j>=0;j--)
			{
				if(A[i]&(1LL<<j))
				pos[j].push_back(i);
			}
		}
		for(long long i=0;i<N-1;i++)
		{
			for(long long j=30;j>=0;j--)
			{
				long long temp,n;
				temp=1LL<<j;
				if((A[i]&temp)==0)
				continue;
				
				A[i]=A[i]^temp;
				if(++count[j]<pos[j].size())
				{
					n=pos[j][count[j]++];
				}
				else
				{
					n=N-1;
				}
				
				A[n]=A[n]^temp;
				if(--X==0)
				{
					break;
				}
			}
			if(X==0)
			{
				break;
			}
		}
		for(long long i=0;i<N;i++)
		{
			cout<<A[i]<<" ";
		}
		cout<<"\n";
	}
}
