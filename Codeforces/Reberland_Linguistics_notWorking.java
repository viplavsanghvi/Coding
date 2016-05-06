           import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;


public class Reberland_Linguistics 
{

	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		String str = scan.nextLine();
		Set<String> set=new TreeSet<String>();
		set=doTheWork(str.length(),str,set,"");
		System.out.println(set.size());
		for(String s:set)
		{
			System.out.println(s);
		}
	}

	private static Set<String> doTheWork(int i, String str, Set<String> set,String last) 
	{
		int flag2=0,flag3=0;
		if(i<=4)
		{
			return set;
		}
		
		int start=i-2;
		if(start>4)
		{	
			set.add(str.substring(start, i));
		}
		
		
		start=i-3;
		
		if(start>4)
		{
			set.add(str.substring(start, i));
		}
		
		String prev_str="",tmp="";//=str.substring(i-2, i);
		int prev=i-2;
		i-=2;
		for(;i>4;i--)
		{
			prev=i;
			prev_str=str.substring(i, i+2>=str.length()?str.length():i+2);
			for(int j=prev-2;j>4 ;j-=2)
			{
				if((flag2==1 && ((str.length()-j))%2==0) && (flag3==1 && ((str.length()-j))%3==0) )
				{
					break;
				}
				tmp=str.substring(j,prev);
				if(prev_str.equals(tmp))
				{
					//System.out.println("breaking in 2 : " + tmp);
					flag2=1;
					break;
				}
				
				set.add(tmp);
				prev=j;
				prev_str=tmp;
			}
			prev=i;
			prev_str=str.substring(i, i+3>=str.length()?str.length():i+3);
			for(int j=prev-3;j>4 ;j-=3)
			{
				if(flag3==1 && ((str.length()-j))%3==0 && (flag2==1 && ((str.length()-j))%2==0))
				{
					break;
				}
				tmp=str.substring(j,prev);
				if(prev_str.equals(tmp))
				{
					///System.out.println("breaking in 3 : " + tmp);
					flag3=1;
					break;
				}
				
				set.add(tmp);
				prev=j;
				prev_str=tmp;
			}
		}
		
		
		return set;
	}

}
