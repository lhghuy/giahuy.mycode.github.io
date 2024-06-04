using System;
using System.IO;
using System.Threading.Tasks;

class Program
{
    static async Task Main()
    {
        byte[] buffer = await ReadFileAsync("example.txt");        
        Console.WriteLine($"Read {buffer.Length} bytes.");
    }

    static async Task<byte[]> ReadFileAsync(string filePath)
    {
        using (FileStream fs = new FileStream(filePath, FileMode.Open, FileAccess.Read, FileShare.Read, 4096, true))
        {
            byte[] buffer = new byte[fs.Length];
            await fs.ReadAsync(buffer, 0, (int)fs.Length);
            return buffer;
        }
    }
}
