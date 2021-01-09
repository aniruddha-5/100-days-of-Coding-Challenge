#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		string s;
		cin>>s;
		while(q--)
		{
			int x,y;
			cin>>x>>y;
			char temp_l=s[x-1];
			char temp_r=s[y-1];
			int count=0;
			if((x)==1 && (y)==n)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				for(int i=0;i<(x-1);i++)
				{
					if(temp_l==s[i])
					{
						count++;
						break;
					}
				}
				for(int i=y;i<n;i++)
				{
					if(temp_r==s[i])
					{
						count++;
						break;
					}
				}
				if(count>0)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					cout<<"NO"<<endl;
				}
			}
		}
	}
} 
