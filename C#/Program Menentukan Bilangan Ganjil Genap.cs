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
            //visit us @hobingoding.com

            //Penginputan Bilangan yang akan Dicek
            Console.Write("Input Bilangan : ");            
            bilangan = Convert.ToInt32(Console.ReadLine());

            //Penghitungan dan Pengecekan Hasil Modulo
            if (bilangan % 2 == 0)
                Console.WriteLine("Hasil : Bilangan Genap");
            else
                Console.WriteLine("Hasil : Bilangan Ganjil");
            Console.ReadKey();
        }
    }
}
