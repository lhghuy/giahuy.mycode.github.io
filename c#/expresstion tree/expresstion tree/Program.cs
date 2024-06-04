using System;
using System.Linq.Expressions;

namespace expression_tree
{
    class programm
    {
        static void Main(string[] args)
        {
            Func<string, string, string> stringJoins = (s1,s2) => string.Concat(s1,s2);
            Expression<Func<string, string, string>> expresstion = (s1, s2) => string.Concat(s1,s2);

            var func = expresstion.Compile();
            var result = func("hello ", "hi");
            Console.WriteLine(result);
        }
    }
}