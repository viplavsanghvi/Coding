#include <iostream> 
#include <stdio.h>

using namespace std;

int main()
{
	string str;
	cin>>str;
	int flag=0;
	for(int i=0;i<str.length();i++)
	{
		flag=str[i];
		for(int j=1;j<7;j++)
		{
			if(str[i+j]!=flag)
			{
				flag=2;
				break;
			}
		}


		if(flag!=2)
		{
			break;
		}
	}

	if(flag==2)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}
	
	return 0;
}