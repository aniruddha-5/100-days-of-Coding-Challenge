#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		vector<int>A(N);
		int pos=-1,l=0;
		for(int i=0;i<N;i++)
		{
			cin>>A[i];
			if(A[i]==1)
			{
				if(i==0)
				{
					l=1;
				}
				else if(i!=N-1)
				{
					l=2;
					pos=i;
				}
			}
		}
		if(l==1)
		{
			long long int Q;
			cin>>Q;
			while(Q--)
			{
				long long int R;
				cin>>R;
				long long int q=R/N;
				long long int r=R%N;
				long long int ans=0,temp=0;
				if(N==1 || r==0)
				{
					ans=(q)%M;
					cout<<ans<<endl;
				}
				else
				{
					ans=(q+1)%M;
					cout<<ans<<endl;
				}
			}
		}
		else if(l==2)
		{
			long long int Q;
			cin>>Q;
			while(Q--)
			{
			long long int R;
			cin>>R;
			long long int q=R/N;
			long long int r=R%N;
			long long int ans=0,temp=0;
			for(int i=0;i<N;i++)
			{
				if(i!=pos)
				{
					if(A[i]%2==0)
					{
						if(i==N-1)
						ans=(ans+A[i]-1)%M;
						else if(i==pos-1)
						ans=(ans+A[i]-1)%M;
						else
						ans=(ans+A[i])%M;
					}
					else if(A[i]%2==1)
					{
						if(i==N-1)
						ans=(ans+A[i])%M;
						else if(i==pos-1)
						ans=(ans+A[i])%M;
						else
						ans=(ans+A[i]-1)%M;
					}
						
				}
				if(i==r-1)
				{
					if(A[i]==1 && A[i-1]%2==0)
					{
						temp=(ans+2)%M;
					}
					else if(A[i]==1 && A[i-1]%2==1)
					{
						temp=(ans)%M;
					}
					else
					{
						if(A[i]%2==1)
						temp=(ans+1)%M;
						else
						temp=ans%M;
					}	
				}	
			}
			if(q>0 && r>0)
			{
				ans=(ans*q+temp)%M;
				cout<<ans<<endl;
			}
			else if(q>0 && r==0)
			{
				if(A[N-1]%2==0)
				ans=(ans*q+1)%M;
				else
				ans=(ans*q)%M;
				
				cout<<ans<<endl;
			}
			else
			{
				cout<<temp<<endl;
			}
			}	
		}
		else
		{
			long long int Q;
			cin>>Q;
			while(Q--)
			{
			long long int R;
			cin>>R;
			long long int q=R/N;
			long long int r=R%N;
			long long int ans=0,temp=0;
			for(int i=0;i<N;i++)
			{
				if(i!=N-1)
				{
					if(A[i]%2==0)
					ans=(ans+A[i])%M;
					else if(A[i]%2==1)
					ans=(ans+A[i]-1)%M;
				}
				else
				{
					if(A[i]%2==0)
					ans=(ans+A[i]-1)%M;
					else if(A[i]%2==1)
					ans=(ans+A[i])%M;
				}
				
				
				if(i==r-1)
				{
					if(A[i]%2==1)
					temp=(ans+1)%M;
					else
					temp=ans%M;
				}
			}
			if(q>0 && r>0)
			{
				ans=(ans*q+temp)%M;
				cout<<ans<<endl;
			}
			else if(q>0 && r==0)
			{
				if(A[N-1]%2==0)
				ans=(ans*q+1)%M;
				else
				ans=(ans*q)%M;
				
				cout<<ans<<endl;
			}
			else
			{
				cout<<temp<<endl;
			}
			}
		}	
	}
}
