# include <iostream>
# include <stdio.h>
# include <vector>
using namespace std;

vector<int> arr,res;
bool coprime(int a,int b);
int find_coprime(int index);
int gcd(int a, int b) 
{
    int t;
    while(b != 0){
        t = a;
        a = b;
        b = t%b;
    }
    return a;
}
int main()
{
	int n,x;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}

	res.push_back(arr[0]);
	for(int i=1;i<n;i++)
	{
		if(!coprime(arr[i-1],arr[i]))
		{
			res.push_back(find_coprime(i));
		}

		res.push_back(arr[i]);
	}
	cout<<res.size()-arr.size()<<endl;
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i];
		if(i!=res.size()-1)
		{
			cout<<" ";
		}
		else
		{
			cout<<endl;
		}
	}
	
	return 0;
}

bool coprime(int a,int b)
{
	 return gcd(a,b) == 1;
}

int find_coprime(int index)
{
	int i=2;

	while(1)
	{
		if(coprime(i,arr[index-1]) && coprime(i,arr[index]))
		{
			return i;
		}
		i++;
	}

	return -1;
}
