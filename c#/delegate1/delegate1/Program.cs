using System;

namespace delegate1
{
    public delegate void showlog(string message);
    public delegate void HuyDanh(string tenLaBai);
    public delegate void CuongDanh(string tenLabai);


    class NguoiChoiCuong
    {
        public NguoiChoiCuong()
        {
            HuyDanh danh = HuyDanhBaiRoi;
        }

        private void HuyDanhBaiRoi(string tenLaBai)
        {
           if(tenLaBai == "3")
            {
            }
        }
    }

    class program
    {
        static void infor(string s)
        {
            Console.ForegroundColor = ConsoleColor.Green;
            Console.WriteLine(s);
            Console.ResetColor();
        }

        static void infor1(string s)
        {
            Console.ForegroundColor = ConsoleColor.Blue;
            Console.WriteLine(s);
            Console.ResetColor();
        }

        static void Main(string[] args)
        {
            showlog log = null;
            log = infor;
            log("xin chao");           

            log += infor1;
            log?.Invoke("hi");         
        }
    }
}