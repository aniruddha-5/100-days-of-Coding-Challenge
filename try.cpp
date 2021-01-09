#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		a=1;
		else
		a=0;
		for(int j=0;j<=i;j++)
		{
			cout<<a;
			if(a==1)
			a=0;
			else
			a=1;
		}
		cout<<endl;
	}
}
