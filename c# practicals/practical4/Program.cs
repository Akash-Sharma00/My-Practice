// Write a program that receives the following info from a set of students student id, name, course name, date of birth

using System;

namespace practical4
{
    class Program
    {
        class Stu{
            int id;
            string name, course, dob;
            public void input(){
                Console.WriteLine("\nEnter name");
                name = Console.ReadLine();

                Console.WriteLine("\nEnter id number ");
                id = int.Parse(Console.ReadLine());

                Console.WriteLine("\nEnter course name ");
                course = (Console.ReadLine());

                Console.WriteLine("Enter date of birth(dd-mm-yy) ");
                dob = Console.ReadLine();
            }

            public void output(){
                Console.WriteLine("id is: "+id);
                Console.WriteLine("\n\nName is: "+name);
                Console.WriteLine("course is: "+course);
                Console.WriteLine("Date of birth: "+dob);
            }
        }
        static void Main(string[] args)
        {
            // Console.WriteLine("Hello World!");

            // Stu s = new Stu();
            // s.input();
            // s.output();
            
            Stu []s = new Stu[5];
            
            for(int i = 0; i < 5; i++)
            {
                s[i].input();
                s[i].output();
            }
        }
    }
}
