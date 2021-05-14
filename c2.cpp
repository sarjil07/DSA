#include<iostream>
using namespace std;
int main()
{
	int n,h,x,t;
	int i=0;
	int flag=0;
	cin>>n;
	cin>>h;
	cin>>x;
	int arr[n];
	while(i<n)
	{
		cin>>arr[i];
		if((arr[i]+x)>=h)
		{
			
			flag=1;
			break;
		}
		else
		{
			i++;
		}
	}
	if(flag==0)
	{
		cout<<"NO";
	}
	else if(flag==1)
	{
		cout<<"YES";
	}
	return 0;
}
