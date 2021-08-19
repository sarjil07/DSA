#include<iostream>
using namespace std;
int main()
{
	int e,o,t,i;
	cin>>t;
	int arr[t];
	while(i<t)
	{
		cin>>arr[i];
		if(arr[i]%2==0)
		{
			e=e+1;
			i=i+1;
		}
		else
		{
			o=o+1;
			i=i+1;
		}
	}
	if(e>o)
	{
		cout<<"READY FOR BATLLE"<<endl;
	}
	else
	{
		cout<<"NOT READY"<<endl;
	}
	return 0;
	
}
