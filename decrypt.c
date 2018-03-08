#include<stdio.h>
#include<math.h>
#define MAX  2
int top = -1;
int s[MAX];

void mapit(int digit)
{
	switch(digit)
	{
		case 25: printf("%c",48);
				break;
		case 26: printf("%c",49);
				break;
		case 83 : printf("%c",67);
				break;
		case 62 : printf("%c",69);
				break;
		case 63 : printf("%c",69);
				break;
		case 71 : printf("%c",70);
				break;
		case 70 : printf("%c",71);
				break;
		case 80 : printf("%c",73);
				break;
		case 73 : printf("%c",80);
				break;
		case 67 : printf("%c",83);
				break;
		case 90 : printf("%c",89);
				break;
		case 89 : printf("%c",90);
				break;
		case 32 : printf("%c",79);
				break; 	
		
		case 79 : printf("%c",32);
				break; 	
	}		
return;
}

void push(int a)
{
	if(top == MAX - 1)
	{
		printf("Stack is full\n");
		return;
	}
	else
	{
		s[++top] = a;
	}
return;
}

int pop()
{
	int elem;	
	if(top == -1)
	{
		printf("Stack is empty\n");	
		return 0;
	}
	else
	{
		elem = s[top--];
	}
return elem;	
}

void main()
{
	char ch;
	int digit,first,count=0,second,conv,num;
	float convert;
	
	FILE * fp;
	fp = fopen("decrypt.txt","r");
	l1 : while((ch) != EOF)
	{
		
		{
			ch = fgetc(fp);
			if(ch == ' ')
		    	{
				//push(ch);
				count=0;
				num = ch + 47;
				printf("%c",num);
				goto l1;
			}
			else
			{
				num = ch - '0';
				push(num);
				count++;
			}
			
		}
		if(count == 2)
		{	
			/*if(num == 32)
			{
				count =0;
				goto l1;
			}*/	
			count = 0;
			//printf("abcd\n");
			first = pop();
			second = pop();
			
			digit = (second * 10) + first;
			if((digit>57)&&(digit<62))
			{
				convert = digit - (6*8.85);
				conv = ceil(convert);
				digit = (6*10) + conv;
				printf("%c",digit);
				//break;	 
			}
			
			else if((digit>49)&&(digit<57))
			{
				convert = digit - (7*6.97);
				conv = ceil(convert);
				digit = (7*10) + conv;
				printf("%c",digit);
				//break;	
			}

			else if((digit>41)&&(digit<50))
			{
				convert = digit - (8*5.3);
				conv = ceil(convert);
				digit = (8*10) + conv;
				printf("%c",digit);
				//break;	
			}
			else if((digit>30)&&(digit < 39))
			{
				convert = digit - (5 * 6.37);
				conv = ceil(convert);
				digit = (5*10) + conv;
				printf("%c",digit);
			}
			else
			{
				mapit(digit);
			}	
		}
		/*if(count == 1)
		{
			count = 0;
			first = pop();
			printf("%c",79);
		}*/
		//l1: printf("%c",79);	
	}
}

