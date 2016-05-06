#include <iostream> 
#include <stdio.h>

using namespace std;

int main()
{
	string str,res="";
	cin>>str;
	for (int i=0;i<str.length();i++)
	{
		char c=tolower(str[i]);
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y')
		{
			continue;
		}
		else
		{
			res+=".";
			res+=c;
		}

	}
	cout<<res<<endl;
	return 0;
}