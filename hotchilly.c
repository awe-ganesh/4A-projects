#include<stdio.h>
void main()
{
	int chocolate,i,n=1,first,multi,number,l1,l2;
	printf("Enter the number of chocolates\n");
	scanf("%d",&chocolate);     /*Read the number of chocolates*/ 
	while((4*n) < chocolate)	/*Determines the iterative number 'n' ie. searches for the number 
					greater than the number of chocolates*/
		n++;
		
	if(chocolate % 4 !=0)		/*If the number of chocolates is not a multiple of 4 ,the it enters */ 
	{
		printf("Computer");
		printf("\t\t\tUser\n");
		multi = (4*n) - 4;	/*Multi will store the value which is a lesser multiple of 4 
						ie.(4*3)-4 = 8*/
		first = chocolate - multi;//First will holds number of chocolates the computer has taken
		for(i=0;i<n-1;i++)
		{
			chocolate = chocolate - first;// remaining number of chocolates is updated
			printf("%d",first);
			printf("\t\t\n");
			l2 : scanf("\t\t\t\t%d",&number);//User has to enter this field
			if(number >3)//This will check that the user will always give within the limits of 1, 2and 3
				{
					printf("You can enter either 1 or 2 or maximum 3\n");
					printf("Take again\n");
					goto l2;	
				}
			printf("\t\t\t\t%d\n",number);
			chocolate = chocolate - number;// remaining chocolates
			first = 4 - number; //assign 'first' with the number of chocolates the computer has to take
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

