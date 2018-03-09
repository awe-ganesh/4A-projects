#include<stdio.h>
#include <termios.h>
char getch() {
    char buf = 0;
    struct termios old = { 0 };
    fflush(stdout);
    if (tcgetattr(0, &old) < 0) perror("tcsetattr()");
    old.c_lflag    &= ~ICANON;   // local modes = Non Canonical mode
    old.c_lflag    &= ~ECHO;     // local modes = Disable echo. 
    old.c_cc[VMIN]  = 1;         // control chars (MIN value) = 1
    old.c_cc[VTIME] = 0;         // control chars (TIME value) = 0 (No time)
    if (tcsetattr(0, TCSANOW, &old) < 0) perror("tcsetattr ICANON");
    if (read(0, &buf, 1) < 0) perror("read()");
    old.c_lflag    |= ICANON;    // local modes = Canonical mode
    old.c_lflag    |= ECHO;      // local modes = Enable echo. 
    if (tcsetattr(0, TCSADRAIN, &old) < 0) perror ("tcsetattr ~ICANON");
    return buf;
 }
int takein()
{
       	char ch;int a;
   	while(1)
	    {
		 ch = getch();
		 a = ch- '0';
		 if(a != 1 &&a != 2 &&a != 3)
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
			number = takein();
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

