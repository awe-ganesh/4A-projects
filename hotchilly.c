#include<stdio.h>
void main()
{
	int chocolate,i,n=1,first,multi,number,l1,l2;
	printf("Enter the number of chocolates\n");
	scanf("%d",&chocolate);
	while((4*n) < chocolate)
		n++;
		
	if(chocolate % 4 !=0)
	{
		printf("Computer");
		printf("\t\t\tUser\n");
		multi = (4*n) - 4;
		first = chocolate - multi;
		for(i=0;i<n-1;i++)
		{
			chocolate = chocolate - first;
			printf("%d",first);
			printf("\t\t\n");
			l2 : scanf("\t\t\t\t%d",&number);
			if(number >3)
				{
					printf("You can enter either 1 or 2 or maximum 3\n");
					printf("Take again\n");
					goto l2;	
				}
			printf("\t\t\t\t%d\n",number);
			chocolate = chocolate - number;
			first = 4 - number;
		}
			printf("%d",first);
	}
	
	else
	{
		printf("Take your chocolate\n");
		printf("Computer");
		printf("\t\t\tUser\t\t\t");
		for(i=0;i<n;i++)
			{
				
				l1 : scanf("\t\t\t\t\t%d",&number);
				if(number >3)
				{
					printf("You can enter either 1 or 2 or maximum 3\n");
					printf("Take again\n");
					goto l1;	
				}
				chocolate = chocolate - number;
				printf("\t\t\t\t%d",number);
				printf("\t\t\n");	
				first = 4 - number;
				chocolate = chocolate -first;
				printf("%d\n",first);
			}
	}
		printf("\nHAHA you lose\n Eat the chilly \n Peace Out!!!!!!!!!\n");
}

