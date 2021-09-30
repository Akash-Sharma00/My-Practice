using System;

namespace practical2
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, f = 1;

            Console.WriteLine("Enter Number ");
            n = int.Parse(Console.ReadLine());

            while(n > 0)
            {
                f = f * n;
                n--;
            }

            Console.WriteLine("Factorial is "+ f);
        }
    }
}
