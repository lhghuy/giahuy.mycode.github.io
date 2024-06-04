using System;
using System.Security.Cryptography.X509Certificates;

namespace events
{
    public delegate void Action(int x);
    class UserInput
    {
        public event Action action;
        public void Input()
        {
            do
            {
                int x = int.Parse(Console.ReadLine());
                action?.Invoke(x);
            }
            while (true);
        }

    class TinhCan
        {
            public void sub(UserInput input)
            {
                input.action += can;
            }

            public void can(int i)
            {
                Console.WriteLine($"can bac 2 cua {i} la: {Math.Sqrt(i)}" );
            }
        }

        class program
        {
            static void Main(string[] args)
            {
                UserInput userinput = new UserInput();  
                TinhCan userinput2 = new TinhCan();

                userinput2.sub(userinput);
                userinput.Input();
            }
        }
    }
}