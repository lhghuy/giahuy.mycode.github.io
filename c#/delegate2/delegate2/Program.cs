using System;

namespace delagate2
{
    class program
    {
        public static void infor(string s)
        {
            Console.ForegroundColor = ConsoleColor.Green;
            Console.WriteLine(s);
            Console.ResetColor();
        }

        public static void infor1(string s)
        {
            Console.ForegroundColor = ConsoleColor.Red;
            Console.WriteLine(s);
            Console.ResetColor();
        }

        static int tong(int a, int b) => a + b;

        public static void Main(string[] args) 
        {
            Action<string> action;
            action = infor;
            action += infor1;
            action?.Invoke("hello");

            Func<int,int,int> func;
            int a = 2;
            int b = 4;
            func = tong;
            Console.WriteLine($"tong la: {func(a, b)}");
        }
    }
}
