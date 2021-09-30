// Write the console application that obtains four integer value from the user and displays the product

using System;

namespace projects
{
    class Program
    {
        static void Main(string[] args)
        {
            int a, b, c, d, p;
            Console.WriteLine("Enter your first integer value ");
            a = int.Parse(Console.ReadLine());

            Console.WriteLine("Enter your second integer value ");
            b = int.Parse(Console.ReadLine());

            Console.WriteLine("Enter your third integer value ");
            c = int.Parse(Console.ReadLine());

            Console.WriteLine("Enter your fourth integer value ");
            d = int.Parse(Console.ReadLine());

            p = a*b*c*d;

            Console.Write("Product of Entered numbers is " + p.ToString());
        }
    }
}
