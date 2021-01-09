#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int X,Y,N;
		cin>>X>>Y>>N;
		long long int c=0;
		for(int i=0;i<=N;i++)
		{
			if((X^i)<(Y^i))
			c++;
		}
		cout<<c<<endl;
	}
}
