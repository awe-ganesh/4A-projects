//# 4A-projects
import java.util.Scanner;
public class Chilly {
		static int chocolate,i,n=1,first,multi,num,L1;
			
public static void main(String[] args) 
{		//int chocolate=0;
		Scanner scn;
		scn = new Scanner(System.in);
		System.out.println("Enter the number of chocolates");
		chocolate = scn.nextInt();
		while(4*n < chocolate)
		{
			n++;
		}
		
		if(chocolate%4 != 0)
		{
			System.out.print("Computer");
			System.out.println("             User");
			multi = (4*n)-4;
			first = chocolate - multi;
			for(i=0;i<n-1;i++)
			{
				chocolate = chocolate - first;
				System.out.println("    "+first);
				//System.out.println("                     ");
				num = scn.nextInt();
				System.out.println("                      "+num);
				chocolate = chocolate - num;
				first = 4 - num;
			}	
			System.out.println("    "+first);
		}
		else
		{
			System.out.println("Your turn first");
			System.out.print("Computer");
			System.out.println("                      User");
			
			for(i=0;i<n;i++)
			{
				System.out.println("                     ");
				a1:{ num = scn.nextInt();
				if(num > 3)
				{
					System.out.println("You can take either 1 or 2 or maximum 3 chocolates");
					System.out.println("Take again");
				break	 a1;
				}
				}
				
			chocolate = chocolate - num;
			System.out.println("                                "+num);
			first = 4 - num;
			chocolate = chocolate - first;
			System.out.println("    "+first);
				
				
			
			}
			
		}
		
			scn.close();
			System.out.println("You loose");
			System.out.println("Ha Ha ,you are left with the chilly");
			System.out.print("Eat it!!!!!!!!!!!!!!!!!!");	
}


}
