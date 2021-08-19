#include<iostream>
using namespace std;
int main()
{
	int t,n,rev,temp;
	cin>>t;
	int a[t];
	int i=0;
	while(i<t)
	{
		cin>>a[i];
		rev=0;
		while(a[i]>0){
			temp=a[i]%10;
			rev = rev*10 + temp;
			a[i]=a[i]/10;
		}
		cout<<rev;
		i++;
		
	}
	return 0;
}
