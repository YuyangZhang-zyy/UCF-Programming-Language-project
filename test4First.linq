<Query Kind="Program" />

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test4First
{
	//Q1
    class student
    {
		private int admno;
		private string sname;
		private float eng, math, science;
		private float total;
		
        private float ctotal()
        {
			float ans = eng + math + science;
            return ans;
        }

        public void Takedata(int ad, string name, float e, float m, float s)
        {
			admno = ad;
			sname = name;
			eng = e;
			math = m;
			science = s;
			total = ctotal();
        }

        public void Showdata()
        {
            Console.WriteLine("Admno is {0}", admno);
			Console.WriteLine("Name is {0}", sname);
			Console.WriteLine("Eng is {0}, math is {1}, science is {2}", eng, math, science);
			Console.WriteLine("Total is {0}", total);
        }
    }
	
	//Q2
	class batsman
	{
		private int [] bcode;
		private string bname;
		private int innings, notout, runs;
		private float batavg;
		
		private float calcavg() 
		{
			float ans = runs / (innings - notout);
			return ans;
		}
		
		public void readdata(int[] code, string name, int input, int noout, int run)
		{
			bcode = code;
			bname = name;
			innings = input;
			notout = noout;
			runs = run;
			batavg = calcavg();
		}
		
		public void displaydata()
		{
			Console.WriteLine("Bcode is {0}", bcode);
			Console.WriteLine("Name is {0}", bname);
			Console.WriteLine("Innings is {0}", innings);
			Console.WriteLine("Runs is {0}", runs);
			Console.WriteLine("Batavg is {0}", batavg);
		}
	}
	
	//Q3
	class Q3 
	{
  		public static void Main (string[] args) 
		{
    		linePrinter("story.txt");
  		}

  		static void linePrinter(string filename) 
		{
      		StreamReader reader = new StreamReader(@filename);
      		int count=0;
      		string buffer;
      		using(reader) 
			{
        		do 
				{
          			buffer = reader.ReadLine();
          			if (buffer[0] != 'A')
            			count++;
        		} while(!reader.EndOfStream);

        		Console.WriteLine("Output: "+ count);
      		}
    	}
    }
	
	//Q4
	class Animal
    {
        public void eat()
        {
            Console.WriteLine("The animal is eating!");
        }

        public void breath()
        {
            Console.WriteLine("The animal is breathing!");
        }

        public void sleep()
        {
            Console.WriteLine("The animal is sleeping!");
        }
    }
	
	class Turtle: Animal
    {
        public void retract()
        {
            Console.WriteLine("The turtle is retracting!");
        }
    }
	
	class Dog: Animal
    {
        public void bark()
        {
            Console.WriteLine("The dog is barking!");
        }
    }
	
	class Bird: Animal
    {
        public void fly()
        {
            Console.WriteLine("The animal is flying!");
        }
    }
}