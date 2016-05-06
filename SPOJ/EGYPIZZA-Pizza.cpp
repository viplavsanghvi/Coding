#include <iostream> 
#include <stdio.h>

using namespace std;

int main()
{
	int n,res=0;
	string x;
	cin >>n;
	int a[3]={0,0,0};
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x=="1/4")
		{
			a[0]+=1;	
		}
		else if(x=="1/2")
		{
			a[1]+=1;	
		}
		else if(x=="3/4")
		{
			a[2]+=1;	
		}
	}

	a[0]=max(a[0]-a[2],0);
	res=1+a[2]+(a[0]+2*a[1])/4;
	if((a[0]+2*a[1])%4>0)
	{
		res++;
	}
	cout<<res<<endl;
	return 0;
}