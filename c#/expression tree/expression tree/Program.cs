using System;
using System.Linq.Expressions;

class Program
{
    static void Main(string[] args)
    {
        ParameterExpression x = Expression.Parameter(typeof(int), "x");
        ParameterExpression y = Expression.Parameter(typeof(int), "y");

        Expression left = Expression.Add(x, y);
        Expression right = Expression.Subtract(x, y); 

        Expression body = Expression.Multiply(left, right); 

      
        Expression<Func<int, int, int>> expressionTree = Expression.Lambda<Func<int, int, int>>(body, x, y);
     
        Func<int, int, int> multiplyExpression = expressionTree.Compile();
        int result = multiplyExpression(5, 3);

        Console.WriteLine("Result: " + result); 
    }
}
