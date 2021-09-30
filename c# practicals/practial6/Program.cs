using System;

namespace practial6
{
    class numbers{
        private int number;
        public int Anumber;

        public int Anumbers{
            get{
                return number;
            }
            set{
                number = value;
            }
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");

            numbers n = new numbers();
            n.Anumber = 1550;
            int m = n.Anumbers;
            Console.WriteLine("Number = "+ m);
        }
    }
}
