#include<bits/stdc++.h>
using namespace std;
int main()
{
	const unsigned int M = 1000000007;
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		vector<int>A(N);
		int pos=-1;
		for(int i=0;i<N;i++)
		{
			cin>>A[i];
			if(A[i]==1)
			{
				pos=i;
			}
		}
		int Q;
		cin>>Q;
		while(Q--)
		{
			long long int R;
			cin>>R;
			long long int q=(R/N);
			long long int r=(R%N);
			long long int ans1=0,ans=1,temp=0;
			if(pos==0)
			{
				if(r==0)
				ans=(ans*q)%M;
				else
				ans=(ans*q+1)%M;
				cout<<ans<<endl;
			}
			else if(pos==N-1)
			{
				
				for(int i=0;i<N;i++)
				{
					if(A[i]%2==1)
					ans1=(ans1+A[i]-1)%M;
					else
					ans1=(ans1+A[i])%M;
					
					if(i==r-1)
					temp=ans1;
				}
				if(A[r-1]%2==1)
				temp=(temp+1)%M;
				
				if(q>0)
				{
					ans1=((ans1*q)+(temp+1))%M;
					cout<<ans1<<endl;
				}
				else
				{
					cout<<temp<<endl;
				}
				
			}
			else if(pos>0 && pos<N-1)
			{
				for(int i=0;i<N;i++)
				{
					if(A[i]%2==0)
					{
						if(i==N-1)
						ans1=(ans1+A[i]-1)%M;
						else if(i==pos-1)
						ans1=(ans1+A[i]-1)%M;
						else
						ans1=(ans1+A[i])%M;
					}
					else
					{
						if(i!=pos)
						ans1=(ans1+A[i]-1)%M;	
					}
					if(i==r-1)
					temp=ans1;	
				}
				if(A[r-1]%2)
				temp=(temp+1)%M;
				
				if(q>0)
				{
					ans1=((ans1*q)+temp)%M;
					cout<<ans1<<endl;
				}
				else
				{
					cout<<temp<<endl;
				}	
			}
			else
			{
				for(int i=0;i<N;i++)
				{
					if(A[i]%2==0)
					{
						if(i==N-1)
						ans1=(ans1+A[i]-1)%M;
						else
						ans1=(ans1+A[i])%M;
					}
					else
					{
						if(i==N-1)
						ans1=(ans1+A[i])%M;
						else
						ans1=(ans1+A[i]-1)%M;
					}
					if(i==r-1)
					temp=ans1;
				}
				if(A[r-1]%2==1)
				temp=(temp+1)%M;
				
				if(q>0)
				{
					ans1=((ans1*q)+temp)%M;
					cout<<ans1<<endl;
				}
				else
				{
					cout<<temp<<endl;
				}
			}			
		}
		
	}
}
