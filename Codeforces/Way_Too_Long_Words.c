#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i=0,d;
	
	scanf("%d",&d);

	for(i=0;i<d;i++)
	{

		char str[110];
		scanf("%s",str);
		int len=strlen(str);
		//len-=2;
		char res[15];

		if(len>10)
		{
			res[0]=str[0];
			res[1]='\0';
			char buffer[5];
			snprintf(buffer, 5, "%d", len-2);
			strcat(res,buffer);
			// printf("%d\n", (int)strlen(res));
			res[strlen(res)+1]='\0';
			res[strlen(res)]=str[strlen(str)-1];
			
		}
		else
		{
			strcpy(res,str);
		}

		printf("%s\n",res);

	}
	

	return 0;
}