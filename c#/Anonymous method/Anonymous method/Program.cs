using System;

class Program
{

    delegate void MyDelegate(string s);

    static void Main(string[] args)
    {

        MyDelegate myDelegate = delegate (string s)
        {
           Console.WriteLine("anonymous method \n" + s);
        };

        myDelegate("gia huy");
    }
}
