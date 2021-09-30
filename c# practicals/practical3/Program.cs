// Write a program to print the fibbonacci series upto n numbers

using System;

namespace practical3
{
    class Program
    {
        static void Main(string[] args)
        {
            int f0 = 0, f1 = 1, f2 = 1, n;
            Console.WriteLine("Enter limit ");

            n = int.Parse(Console.ReadLine());

            Console.WriteLine(f0); 
            Console.WriteLine(f1); 
            Console.WriteLine(f2);

            while(n > 3)
            {
                f0 = f1;
                f1 = f2;
                f2 = f0 + f1;
                Console.WriteLine(f2);
                n--;
            } 
        }
    }
}
