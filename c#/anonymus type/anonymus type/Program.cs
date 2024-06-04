using System;
using System.Linq;
using System.Collections.Generic;

namespace anonymus_type
{
    class Programm
    {
        static void Main(String[] args)
        {
            var sinhvien = new
            {
                ten = "huy",
                tuoi = 20, 
                major = "IT",
            };

            Console.WriteLine(sinhvien.ten);
            Console.WriteLine(sinhvien.tuoi);
            Console.WriteLine(sinhvien.major);
        }
    }
}