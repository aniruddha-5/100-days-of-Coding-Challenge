#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int cnt=0,ans1=0,ans2=0;
    	vector<int> a(n);
    	for (int i = 0; i < n; ++i)
		{
    	    cin >> a[i];
    	}
    	for (int i = 1; i < n; ++i)
		{
    	    if(a[i]==a[i-1])
    	    cnt++;
    	}
    	sort(a.begin(), a.end());
    	if(n==1)
    	{
    		cout<<a[0]<<endl;
		}
		else if(n==2)
		{
			cout<<max(a[0],a[1])<<endl;
		}
		else if(n==3)
		{
			if(cnt==3)
			{
				cout<<2*a[0]<<endl;
			}
			else
			{
				ans1=a[0]+a[1];
				ans2=a[0]+a[2];
				if(ans1<=a[2])
				{
					cout<<a[2]<<endl;
				}
				else
				{
					cout<<min(ans1,ans2)<<endl;
				}
			}
		}
		else if(n==4)
		{
			if(cnt==4)
			{
				cout<<2*a[0]<<endl;
			}
			else
			{
				ans1=a[1]+a[2];
				ans2=a[0]+a[3];
				if((a[0]+a[1]+a[2])<=a[3])
				{
					cout<<a[3]<<endl;
				}
				else
				{
					cout<<min(ans1,ans2)<<endl;
				}
			}
		}
	}
}
    
