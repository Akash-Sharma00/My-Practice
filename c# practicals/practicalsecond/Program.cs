using System;

namespace practicalsecond
{

    class rectangle{
        public int len, bre;

        public void putter(int x, int y){
            len = x;
            bre = y;
        } 

        public int area(){
            int a = len * bre;
            return a;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            int x,y, area;
            rectangle r = new rectangle();

            Console.WriteLine("Enter length");
            x = int.Parse(Console.ReadLine());

            Console.WriteLine("Enter Breadth");
            y = int.Parse(Console.ReadLine());

            r.putter(x, y);

            area = r.area();

            Console.WriteLine("Area of rectagnle is "+area);
        }
    }
}
