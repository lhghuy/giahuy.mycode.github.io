using System;
using System.IO;

class Program
{
    static void Main()
    {
        FileStream fs = new FileStream("example.txt", FileMode.Open, FileAccess.Read, FileShare.Read, 4096, true);
        byte[] buffer = new byte[fs.Length];
        fs.BeginRead(buffer, 0, buffer.Length, new AsyncCallback(ReadCallback), fs);
    }

    static void ReadCallback(IAsyncResult ar)
    {
        FileStream fs = (FileStream)ar.AsyncState;
        int bytesRead = fs.EndRead(ar);  
        Console.WriteLine($"Read {bytesRead} bytes.");
        fs.Close();
    }
}
