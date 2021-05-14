#include<string>
#include<iostream>
using namespace std;
int main()
{
	
	int t,count,j,l;
	string s;
	int i=0;
	
	cin>>t;
	string arr[t];
	while(i<t)
	{
		count=0;
		l=0;
		cin>>arr[i];
		j=arr[i].size();
		while(l<(j-1))
		{
			
			s=arr[i];
			if((s[l]=='1')&&(s[l+1]=='0'))
			{
				count=count+1;
				l=l+1;
			}
			else
			{
				l=l+1;
			}
		}
		s=arr[i];
		if((s[j-1]=='1')&&(s[j-2]=='0'))
		{
			count=count+1;
		}
		cout<<count<<endl;
		i=i+1;
		
		
		
		
	}
	return 0;
}
