<Query Kind="Program" />

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test4Second
{
	//Q5
	public class Q5
	{
  		public static IEnumerable<int> myFilter(IEnumerable<int> input)
  		{
  			IEnumerable<int> ret;
			ret = input.Where(x => x % 2 != 0).Where(x => x % 5 == 0);
			return ret;
  		}
	}
	
	class Program
	{
		static void Main(string[] args)
		{
			int[] numbers1 = { 1,3,5,6,7,8,9,10,11,12,13,29,30,31,32,33 };
			int[] numbers2 = { 30,31,40,41,50,51,60,61,70,71,72,74,75,100,101,101,200 };
			int[] arr= Enumerable.Concat(numbers1, numbers2).ToArray();
  			var answer = Q5.myFilter(arr);
  			foreach( int i in answer )
  			{
    			Console.WriteLine(i);
  			}
		}
	}
	
	//Q6
	public class Q6
	{
  		public static IEnumerable<int> myFilter(IEnumerable<int> input)
  		{
  			IEnumerable<int> ret;
			ret = input.Select(x => x * x).Where(x => x % 2 != 0);
			return ret;
  		}
	}
	
	class Program
	{
		static void Main(string[] args)
		{
			int[] numbers3 = { -5, -6, -7, -8, 47, 50, 60, 1000, 2000, 3000 };
  			var answer = Q6.myFilter(numbers3);
  			foreach( int i in answer )
  			{
    			Console.WriteLine(i);
  			}
		}
	}
	
	//Q7
	public class Q7
	{
  		public static IEnumerable<int> myFilter(IEnumerable<int> input)
  		{
  			IEnumerable<int> ret;
			ret = input.Where(x => isPrime(x));
			return ret;
  		}
		
		public static bool isPrime(int x)
		{
			int a = 0;
         	for (int i = 1; i <= x; i++)
            	if (x % i == 0)
               		a++;
         	if (a == 2)
            	return true;
         	else
            	return false;
		}
	}
	
	class Program
	{
		static void Main(string[] args)
		{
			int[] numbers2 = { 30,31,40,41,50,51,60,61,70,71,72,74,75,100,101,101,200 };
  			var answer = Q7.myFilter(numbers2);
  			foreach( int i in answer )
  			{
    			Console.WriteLine(i);
  			}
		}
	}
}