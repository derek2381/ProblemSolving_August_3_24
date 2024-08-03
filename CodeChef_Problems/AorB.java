// problem link
// https://www.codechef.com/problems/AORB



import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while(t-- > 0){
		    int x, y;
		    x = sc.nextInt();
		    y = sc.nextInt();
		    
		    int val1 = (500 - (x*2)) + (1000 - (x+y)*4);
		    int val2 = (1000 - (y*4)) + (500 - (x+y)*2);
		    
		    if(val1 > val2){
		        System.out.println(val1);
		    }else{
		        System.out.println(val2);
		    }
		}

	}
}
