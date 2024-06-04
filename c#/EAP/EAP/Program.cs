using System;
using System.Net;

class Program
{
    static void Main()
    {
        WebClient client = new WebClient();
        client.DownloadDataCompleted += new DownloadDataCompletedEventHandler(DownloadDataCallback);
        client.DownloadDataAsync(new Uri("http://example.com"));
    }

    static void DownloadDataCallback(object sender, DownloadDataCompletedEventArgs e)
    {
        if (e.Error == null)
        {
            byte[] data = e.Result;          
            Console.WriteLine($"Downloaded {data.Length} bytes.");
        }
        else
        {
            Console.WriteLine($"Error: {e.Error.Message}");
        }
    }
}
