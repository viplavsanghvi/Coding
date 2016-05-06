import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;


public class Reberland_Linguistics_new
{

	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		String str = scan.nextLine();
		Set<String> set=new TreeSet<String>();
		set=doTheWork(str.length(),str,set);
		System.out.println(set.size());
		for(String s:set)
		{
			System.out.println(s);
		}
	}

	private static Set<String> doTheWork(int i, String str, Set<String> set) 
	{
		boolean len2[]=new boolean[str.length()+11];
		boolean len3[]=new boolean[str.length()+11];
		
		len2[str.length()]=len3[str.length()]=true;
		
		for(i=i-2;i>4;i--)
		{
			if( len3[i+2] || ( len2[i+2] && !str.substring(i, i+2).equals(str.substring(i+2, i+4))) )
			{
				set.add(str.substring(i, i+2));
				len2[i]=true;
			}
			
			if( len2[i+3] || ( len3[i+3] && !str.substring(i, i+3).equals(str.substring(i+3, i+6))) )
			{
				set.add(str.substring(i, i+3));
				len3[i]=true;
			}
			
		}
		
		return set;
	}

}
