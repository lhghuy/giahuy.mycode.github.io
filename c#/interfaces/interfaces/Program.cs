using System;

namespace interfaces
{
    class main
    {
        static void Main(string[] args) {

            int number = Convert.ToInt32(Console.ReadLine());
            int number2 = int.Parse(Console.ReadLine());
            bool result = number.greaterthan(10);
            Console.WriteLine(result);
        }
    }
}