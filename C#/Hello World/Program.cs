// See https://aka.ms/new-console-template for more information
namespace HelloWorld
{
    public static class Program {
        public static void Main(string[] args) {
            Console.WriteLine("Hello, World!");
            Console.Write("What is your name? ");
            string? name = Console.ReadLine();
            Console.WriteLine("Hello, " + name + ". Nice to meet you.");
        }
    }
}