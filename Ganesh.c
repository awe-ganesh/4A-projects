#include<stdio.h>
#include<conio.h>
int takein()
{
            char ch;int a;
    		while(1)
				{
				    //scanf("%c",&ch);
				    printf("HAHA\n");
				    ch = getch();
				    printf("%c",ch);
				    a = ch- '0';
				    printf("%d",a);
				    if(a != 1 ||a != 2 ||a != 3)
				    {
				    printf("You can enter either 1 or 2 or maximum 3\n");
					printf("Take again\n");
					continue;
				    }
				    return a;
			}	
}
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
			number = takein();
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
				
				number = takein();
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

