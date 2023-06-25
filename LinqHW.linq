<Query Kind="Statements" />

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

//Please use /* and */ to comment the other parts to make the corresponding part run!!!(For example, comment part 2 and 3 to make part 1 running)
namespace HW
{
	//Part 1
	public class Problem1
	{
  		public static IEnumerable<int> myFilter(IEnumerable<int> input)
  		{
  			IEnumerable<int> ret;
			ret = input.Where(x => (x < 50) || (x % 5 != 0)).Select(x => x * x * x).Where(x => x % 2 != 0);
			return ret;
  		}
	}
	
	class Program
	{
		static void Main(string[] args)
		{
  			Random rnd = new Random(5); // Important to seed with 5 for repeatability.
  			var listForProblem = Enumerable.Range(1,100).Select(i => rnd.Next() % 101);
  			var answer = Problem1.myFilter( listForProblem );
  			foreach( int i in answer )
  			{
    			Console.WriteLine(i);
  			}
		}
	}

	//Part 2
	/*
	public class Problem2
	{
 		public static IEnumerable<int> myFilter(IEnumerable<int> input)
		{
			IEnumerable<int> ret;
			ret = input.Where(x => (x > 42) || (x % 6 != 0)).Select(x => x * x).Where(x => x % 2 == 0);
			return ret;
 		}

	}
	
	class Program
	{
		static void Main(string[] args)
		{
  			Random rnd = new Random();
  			var listForProblem = Enumerable.Range(1,100).Select(i => rnd.Next() % 101);
  			var answer = Problem2.myFilter( listForProblem );

  			foreach( int i in answer )
  			{
    			Console.WriteLine(i);
  			}

		}
	}
	*/
	
	//Part 3
	/*
	public class Problem3
	{
 		public static IEnumerable<int> merge(IEnumerable<int> input1, IEnumerable<int> input2, IEnumerable<int> input3,
  		IEnumerable<int> input4)
 		{
			IEnumerable<int> ret;
			ret = input1.Union(input2).Union(input3).Union(input4);
			return ret;
 		}
	}
	class Program
	{
		static void Main(string[] args)
		{
  			//Random rnd = new Random();

  			var list1 = Enumerable.Range(1, 15);// Generate list here.

  			var list2 = Enumerable.Range(2, 42).Where(x => x % 2 == 0);// Generate list here.

  			var list3 = Enumerable.Range(3, 21).Where(x => x % 2 != 0);// Generate list here.

  			var list4 = Enumerable.Range(5, 105).Where(x => x % 5 == 0);// Generate list here.

  			var answer = Problem3.merge(list1,list2,list3,list4);

  			foreach( int i in answer)
  			{
    			Console.WriteLine(i);
  			} 
		}
	}
	*/
}