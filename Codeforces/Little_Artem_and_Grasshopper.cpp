#include <iostream> 
#include <stdio.h>

using namespace std;

int main()
{
	int n;
	
	scanf("%d",&n);
	bool visited[n];
	int dist[n],x;
	char dir[n];
	scanf("%s",dir);

	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		dist[i]=x;
		visited[i]=0;
	}

	 // long long int cur_pos=0;
	for(long long int i=0;i<n && i>=0;)
	{
		if(visited[i]==1)
		{
			printf("INFINITE\n");
			return 0;
		}

		visited[i]=1;
		if(dir[i]=='>')
		{
			i+=dist[i];
		}
		else
		{
			i-=dist[i];	
		}
	}


	printf("FINITE\n");
	return 0;
}