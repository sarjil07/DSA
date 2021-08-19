#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	long long int n;
	cin>>n;
	cin>>s1>>s2;
	int i=0;
	int count=0;
	while(i<n)
	{
		if(s1[i]==s2[i])
		{
			i++;
		}
		else
		{
			if((s1[i]==s2[i+1])&&(s2[i]==s1[i+1])&&(i!=(n-1)))
			{
				count++;
				i=i+2;
			}
			else
			{
				i++;
				count++;
			}
			
		}
	}
	cout<<count<<"\n";
	
}
