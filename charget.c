#include<stdio.h>
#include<stdlib.h>
#define MAX_INPUT 1000
#define MAX_LINE 1024




int main()
{
	
	char input[MAX_INPUT];


	int len = 0;
	int lenlast = 0;
	while (gets(input)  !=	NULL)
	{


		lenlast = strlen(input);
		if (len < lenlast)
		{
			printf("%d\n",lenlast);
			len = lenlast;
		}
		



	}

	printf("The lenthense is :%d",len);

	// char input[MAX_INPUT];
	// char output[MAX_LINE];
	// //char ExitPara[4] = 'exit';
	// int i = 0;
	// while(gets(input) != NULL)
	// {
		

	// 	// if(strstr(ExitPara,input))
	// 	// {
	// 	// 	printf("exit");
	// 	// 	break;
	// 	// }

	// 	printf("%d %s\n%d ",i,input,i+1);
	// 	i += 2;

	// }





	return EXIT_SUCCESS;
}