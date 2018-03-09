import java.util.*;
import java.lang.*;
import java.util.Stack;
public class Nqueen{
	static int[][] qu = new int[50][50];
	static Scanner input=new Scanner(System.in);
	static int n;
	static int row=0;
	
       static Stack<Integer> s = new Stack<Integer>();
   	public static void main(String[] args)
	     {
		boolean continueInput= true;
		do{
			try{System.out.println("enter n value");
			n = input.nextInt();
			continueInput =false;
			}
			catch(InputMismatchException ex){
				System.out.println("error !!,enter whole number");
				continueInput= true;
			}
			input.nextLine();
		  }while(continueInput);
	     
		nqueen();
		for(int i=0;i<n;i++){for(int j=0;j<n;j++){ System.out.print(qu[i][j]+" ");}
				System.out.print("\n");}
	     }
	public static void nqueen(){

		int flag;
		for(int i=0;i<n;i++){
			 for(int j=0;j<n;j++)
				qu[i][j]=0;
			}
		
		while(row<n)
		  {	flag=0;
		     for(int k=0;k<n;k++){
			 if(check(row,k))
			    {
				qu[row][k]=1;
				flag++;row++;
				s.push(k);
				break;
			    }	
		        }
		     if(flag==0) {
		      replace(--row,s.pop());}
		
		  }
		return ;		
	     }
	public static void replace(int r,int c)
             {
		qu[r][c]=0;
		int flag=0;
		for(int i=c+1;i<n;i++){
			if(check(r,i)==true){
			     qu[r][i]=1;
			     flag++; row++;
			     s.push(i);break;
                         }
		      }
		    if(flag==0) replace(--row,s.pop());
		return;
             }
	public static boolean check(int r,int c)
	     {
		int i=0,j=r,k=c,l=c;
		for(i=0;i<n;i++){    if(qu[r][i]==1||qu[i][c]==1){ return false; }
				      }
	
		while(j>=0){   	if(k>=0 && qu[j][k--]==1) return false; 
				if(l<n && qu[j][l++]==1) return false;
				j--;
			   }

		j=r;k=c;l=c;
		while(j<n){   	if(k<n && qu[j][k++]==1) return false; 
				if(l>=0 && qu[j][l--]==1) return false;
				j++;
			   }
		
		return true;

	    }

}


