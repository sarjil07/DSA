#include<iostream>
using namespace std;
int main()
{
	int t,n,sum;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		int p[n],s[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i]>>s[i];
		}
		int a[8]={0};
		for(int i=0;i<n;i++)
		{
			if(p[i]<9)
			{
				a[(p[i])-1]=max(a[p[i]-1],s[i]);
			}
		}
		sum=0;
		for(int i=0;i<8;i++)
		{
			sum=sum+a[i];
		}
		cout<<sum<<"\n";
		t--;
	}
}
