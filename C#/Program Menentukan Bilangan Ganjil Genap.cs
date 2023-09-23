using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace hobingodingcom
{
    class Program
    {
        static void Main(string[] args)
        {
            int bilangan;

            Console.WriteLine("Program Menentukan Bilangan Ganjil Genap\n");
            // visit us hobingoding.com

            // Input Bilangan
            Console.Write("Input Bilangan : ");            
            bilangan = Convert.ToInt32(Console.ReadLine());

            // Cek Ganjil Genap
            if (bilangan % 2 == 0)
                Console.WriteLine("Hasil : Bilangan Genap");
            else
                Console.WriteLine("Hasil : Bilangan Ganjil");
            Console.ReadKey();
        }
    }
}
