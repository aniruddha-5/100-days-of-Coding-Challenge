#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> a(n);
		long long int sum=0;
		long long int mx=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];	
		}
		if(sum%(n-1)>0)
		{
			mx=(sum/(n-1)+1);
		}
		else
		{
			mx=(sum/(n-1));
		}
		
		cout<<(mx*(n-1)-sum)<<endl;
		
	}
}
