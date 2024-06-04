using System;

class Program
{
    static void Main(string[] args)
    {
        
        Func<int, int> square = x => x * x;

        Func<int, int, int> total;
        total = (a,b) =>
        {
            int kq = a + b;
            return kq;
        };

        Console.WriteLine("binh phuong cua 5 la: " + square(5));
        Console.WriteLine(total.Invoke(2, 4));
    }
}
