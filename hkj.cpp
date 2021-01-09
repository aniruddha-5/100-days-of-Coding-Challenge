#include<bits/stdc++.h> 
using namespace std; 
    
int main() 
{
 
    string s1 = "g";  
    string s2 = "a";
	//sort(s.begin(), s.end()); 
	if(s1>s2)
    cout << abs(s2[0]-s1[0]);
	else
	cout<<"false"; 
    return 0; 
} 
