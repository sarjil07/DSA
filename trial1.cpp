#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a,b,s;
	int t,l;
	cin>>t;
	while(t>0)
	{
		cin>>s;
		l=s.size();
		if(l%2==0)
		{
			a=s.substr(0,l/2);
			b=s.substr(l/2,l);
			sort(a.begin(),a.end());
			sort(b.begin(),b.end());
			
			
		}
		else
		{
			a=s.substr(0,l/2);
			b=s.substr(l/2+1,l);
			sort(a.begin(),a.end());
			sort(b.begin(),b.end());
		}
	    
	    if(a==b)
	    {
	    	cout<<"YES"<<"\n";
		}
		else
		{
			cout<<"NO"<<"\n";
		}
		t--;
	}
	
    return 0;
	
}
