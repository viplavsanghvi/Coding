#include <iostream> 
#include <stdio.h>

using namespace std;

int main()
{
	int n,a,b,max=0,cnt=0;
	cin>>n;
	while(n>0)
	{
		cin>>a>>b;
		cnt=cnt-a+b;
		if(cnt>max)
		{
			max=cnt;
		}
		n--;
	}
	cout<<max<<endl;
	return 0;
}