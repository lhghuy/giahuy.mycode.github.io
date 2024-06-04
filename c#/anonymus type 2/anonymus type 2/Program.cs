using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace anonymus_type
{
    class Program
    {
        class sinhvien
        {
            public string ten { get; set; }
            public int namsinh { get; set; }
            public string noisinh { get; set; }
        }

        static void Main(string[] args)
        {

            List<sinhvien> sv = new List<sinhvien>
        {
            new sinhvien() { ten = "huy", namsinh = 2004, noisinh = "khanh hoa" },
            new sinhvien() { ten = "cuong", namsinh = 2005, noisinh = "khanh hoa" },
            new sinhvien() { ten = "hieu", namsinh = 1990, noisinh = "khanh hoa" },
        };

            var result = from infor in sv
                         where infor.namsinh >= 2004
                         select new
                         {
                             name = infor.ten,
                             old = infor.namsinh,
                         };

            foreach (var sinhvien in result)
            {
                Console.WriteLine(sinhvien.name);
            }

        }
    }
}
