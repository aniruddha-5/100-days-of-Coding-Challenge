#include<bits/stdc++.h>
using namespace std;
int main()
{
	const unsigned int M=1000000007;
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		vector<int>a(N);
		for(int i=0;i<N;i++)
		{
			cin>>a[i];
		}
		int Q;
		cin>>Q;
		while(Q--)
		{
			long long R;
			cin>>R;
			long long q=R/N;
			long long r=R%N;
			long long cnt=0,sum1=0,sum2=0,rem_sum1=0,rem_sum2=0,ans=0;
			for(long long i=0;i<N;i++)
			{
				while(cnt%2==0)
				{
					if(a[i]%2==0)
					{
						sum1=(sum1+a[i])%M;
						break;	
					}
					else if(a[i]==1)
					{
						sum1=(sum1+1)%M;
						cnt++;
						i++;
						break;	
					}
					else
					{
						sum1=(sum1+a[i]-1)%M;
						break;
					}	
				}
				while(cnt%2==1)
				{
					if(a[i]%2==0)
					{
						sum2=(sum2+a[i])%M;
						break;	
					}
					else if(a[i]==1)
					{
						sum2=(sum2+1)%M;
						cnt++;
						i++;
						break;	
					}
					else
					{
						sum2=(sum2+a[i]-1)%M;
						break;
					}	
				}
				if(i==(r-1))
				{
					rem_sum1=sum1;
					rem_sum2=sum2;	
				}	
			}
			cout<<cnt<<endl;
			if(cnt%2==1 && q!=0)
			{
				ans=(q*(sum1)+rem_sum1)%M;
				cout<<ans<<endl;	
			}
			else if(cnt%2==0 && q!=0)
			{
				if(q%2==0)
				{
					ans=((q/2)*(sum1+sum2)+rem_sum1)%M;
					cout<<ans<<endl;	
				}
				else
				{
					ans=((q/2)*(sum1+sum2)+rem_sum2+(sum1))%M;
					cout<<ans<<endl;	
				}	
			}
			else
			cout<<rem_sum1<<endl;	
		}
		cout<<endl;
		
	}
}
