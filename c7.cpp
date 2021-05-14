#include<string>
#include<iostream>
using namespace std;
int main()
{
	
	int t,count,j,l;
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
			
			
			if((arr[i][l]=='1')&&(arr[i][l+1]=='0'))
			{
				count=count+1;
				l=l+1;
			}
			else
			{
				l=l+1;
			}
		}
		
		if((arr[i][j-1]=='1')&&(arr[i][j-2]=='0'))
		{
			count=count+1;
		}
		cout<<count<<endl;
		i=i+1;
		
		
		
		
	}
	return 0;
}
