#include <iostream> 
#include <stdio.h>

using namespace std;

int main()
{
	int n,res=0;

	cin >>n;

	for(int i=0;i<n;i++)
	{
		string op;
		cin>>op;
		if(op[1]=='+')
		{
			res++;
		}
		else
		{
			res--;
		}
	}
	cout<<res<<endl;
	return 0;
}