#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void validate();
int find_min(int a,int b,int c);
//int cal_steps(int x,int *);
int main()
{
	int t;
   cin>>t;
 
   for (int i = 0; i < t; ++i)
   {
   	  validate();
   }
	return 0;
}

void validate()
{
	int n;
	cin>>n;
	int a[n],x1,x2=1,i=0;
	cin>>a[0];
	x1=a[0];
	for (i = 1; i < n-1; ++i)
	{
		cin>>a[i];
		x1=x1^a[i];
		x2=x2^(i+1);
	}
	x2=x2^(i+1);

	cout<<(x1^x2)<<endl;
	return ;
}