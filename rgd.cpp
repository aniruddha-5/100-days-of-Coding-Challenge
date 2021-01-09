#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1;
		string s2;
		cin>>s1;
		cin>>s2;
		int ans=0,a=0,b=0;
		for(int i=0;i<s1.length();i++)
		{
			if(i%2==1 && s1[i]!=s2[i])
			{
				a++;
			}
			else if(i%2==0 && s1[i]!=s2[i])
			{
				b++;
			}
			else if(i%2==1 && s1[i]==s2[i])
			{
				if(a>0)
				{
					ans++;
					a=0;
				}
			}
			else if(i%2==0 && s1[i]==s2[i])
			{
				if(b>0)
				{
					ans++;
					b=0;
				}
			}
		}
		if(b>0)
		{
			ans++;
		}
		if(a>0)
		{
			ans++;
		}
		cout<<ans<<endl;
	}
	
}
