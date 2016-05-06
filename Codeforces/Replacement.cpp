# include <iostream>
# include <stdio.h>
# include <map>
using namespace std;

map<int,int> m;
int main()
{
	int i,n,x,max=0;
	cin>>n;

	for(i=0;i<n;i++)
	{
		cin>>x;
		if(m.find(x)==m.end())
		{
			m[x]=1;
		}
		else
		{
			m[x]=m[x]+1;
		}

		if(max<x)
		{
			max=x;
		}
	}

	/*for(i=1;i<=1000000000;i++)
	{
		if(m.find(i)==m.end())
		{
			break;
		}
	}*/
	if(m.find(1)==m.end())
		{
			m[1]=0;
		}
	else
	{
		if(m[1]==n)
		{
			m[1]-=2;
			m[2]=2;
			max=2;
		}
	}

	m[1]+=1;
	m[max]-=1;


	for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
	{
		x=it->first;
		for(int j=0;j<it->second;j++)
		{
			cout<<x;
			if(x!=max)
			{
				cout<<" ";
			}
			else
			{
				if(j!=it->second-1)
				{
					cout<<" ";
				}
				else
				{
					cout<<endl;
				}
			}
		}
	}
	
	return 0;
}

