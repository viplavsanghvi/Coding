# include <iostream>
# include <stdio.h>

using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	int id[n];

	for(int i=0;i<n;i++)
	{
		cin>>id[i];
	}

	long long int total_cnt=0;
	long long int l=0,r=n-1,mid;

	while(l<=r)
	{
		mid=(l+r)/2;
		//cout<<l<<" : "<<r<<endl;
		total_cnt=(mid+1)*(mid+2)/2;

		if( (k-total_cnt) <= 0)
		{
				r=mid-1;
		}
		else
		{
			if( (k-total_cnt) <= (mid+2) )
			{
				break;
			}
			else
			{
				l=mid+1;
			}
		}
	}
	k=k-total_cnt-1;
	if(k<=0)
	{
		//cout<<"Here"<<endl;
		cout<<id[0]<<endl;	
	}
	else
	{
		cout<<id[k]<<endl;	
	}
	
	// cout<<"Jai Guru Umesh"<<endl;
	return 0;
}
