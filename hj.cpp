#include<bits/stdc++.h> 
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int i=0,c=0,temp=0,t=0;
		string s1,s2;
		cin>>s1;
		cin>>s2;
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		cout<<s1<<" "<<s2<<endl;  
		while(i<n)
		{
			if(s1[i]>s2[i])
			{
				break;
			}
			else if(s1[i]==s2[i])
			{
				i++;
			}
			else if(s1[i]<s2[i])
			{
				temp=abs(s1[i]-s2[i]);
				i++;
				c++;
				while(temp==abs(s1[i]-s1[i]) && i<n)
				{
					c++;
					i++;
				}
				if(c%k==0)
				{
					t=1;
					c=0;
				}
				else
				{
					t=0;
					i=n;
					break;
				}	
			}	
		}
		if(i==n && t==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	
} 
