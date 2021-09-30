//Write a program to find the square of a number using parametrized method 

using System;

namespace practical5
{
    class Program
    {
        static int square(int num)
        {
            int s;
            s = num * num;
            return s;
        }
        static void Main(string[] args)
        {
            int num,sq;
            Console.WriteLine("Enter number\t");
            num = int.Parse(Console.ReadLine());
            sq = square(num);
            Console.WriteLine("Squre of "+num+" is "+sq);
        }
    }
}
