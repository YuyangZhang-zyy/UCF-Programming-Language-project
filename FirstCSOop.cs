using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FirstOop
{
    class Animal
    {
        public void move()
        {
            Console.WriteLine("The animal is moving!");
        }

        public void sleep()
        {
            Console.WriteLine("The animal is sleeping!");
        }

        public void eat()
        {
            Console.WriteLine("The animal is eating!");
        }
    }

    class Dog: Animal
    {
        public void sing()
        {
            Console.WriteLine("The animal is singing!");
        }

        public void wash()
        {
            Console.WriteLine("The animal is washing!");
        }

        public void turnAround()
        {
            Console.WriteLine("The animal is turning around!");
        }
    }

    class Cat: Animal
    {
        public void sing()
        {
            Console.WriteLine("The animal is singing!");
        }

        public void wash()
        {
            Console.WriteLine("The animal is washing!");
        }

        public void turnAround()
        {
            Console.WriteLine("The animal is turning around!");
        }
    }

    class Bird: Animal
    {
        public void sing()
        {
            Console.WriteLine("The animal is singing!");
        }

        public void wash()
        {
            Console.WriteLine("The animal is washing!");
        }

        public void turnAround()
        {
            Console.WriteLine("The animal is turning around!");
        }
    }

    //Part 2
    public interface IUFO
    {
        public string color{get; set;};
        public int size{get; set;};

        public void fly();
        public void goToHyperspace();
        public void land();
    }

    class SmallCraft: IUFO
    {
        public string color{get; set;};
        public int size{get; set;};

        public void fly()
        {
            Console.WriteLine("The SmallCraft is flying!");
        }

        public void goToHyperspace()
        {
            Console.WriteLine("The SmallCraft is going to hyperspace!");
        }

        public void land()
        {
            Console.WriteLine("The SmallCraft is landing!");
        }
    }

    class LargeCraft: IUFO
    {
        public string color{get; set;};
        public int size{get; set;};

        public void fly()
        {
            Console.WriteLine("The LargeCraft is flying!");
        }

        public void goToHyperspace()
        {
            Console.WriteLine("The LargeCraft is going to hyperspace!");
        }

        public void land()
        {
            Console.WriteLine("The LargeCraft is landing!");
        }
    }

    class BossCraft: IUFO
    {
        public string color{get; set;};
        public int size{get; set;};

        public void fly()
        {
            Console.WriteLine("The BossCraft is flying!");
        }

        public void goToHyperspace()
        {
            Console.WriteLine("The BossCraft is going to hyperspace!");
        }

        public void land()
        {
            Console.WriteLine("The BossCraft is landing!");
        }
    }

    class Program
    {
        static void Main(string [] args)
        {
            //Part 1
            Dog dog = new Dog();
            dog.move();
            dog.sleep();
            dog.eat();
            dog.sing();
            dog.wash();
            dog.turnAround();

            Cat cat = new Cat();
            cat.move();
            cat.sleep();
            cat.eat();
            cat.sing();
            cat.wash();
            cat.turnAround();

            Bird bird = new Bird();
            bird.move();
            bird.sleep();
            bird.eat();
            bird.sing();
            bird.wash();
            bird.turnAround();

            //Part2
            SmallCraft sc = new SmallCraft();
            sc.color = "Green";
            sc.size = 1;
            sc.fly();
            sc.goToHyperspace();
            sc.land();

            LargeCraft lc = new LargeCraft();
            lc.color = "Yellow";
            lc.size = 5;
            lc.fly();
            lc.goToHyperspace();
            lc.land();

            BossCraft bc = new BossCraft();
            bc.color = "Red";
            bc.size = 10;
            bc.fly();
            bc.goToHyperspace();
            bc.land();
        }
    }
}

