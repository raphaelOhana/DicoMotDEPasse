using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace targil_1
{
    class Program
    {
        static Random r = new Random(DateTime.Now.Millisecond);
        const int size = 20;
        static void Main(string[] args)
        {
            int[] A = new int[size];
            int[] B = new int[size];
            int[] C = new int[size];
            // inti the arrays to random values

            for (int i = 0; i < size; i++)
            {
                A[i] = r.Next(18, 122);
                B[i] = r.Next(18, 122);
                C[i] = Math.Abs(A[i] - B[i]);

            }
            foreach (int item in A)
            {
                Console.Write("{0,3} ", item);
            }
            Console.WriteLine();
            foreach (int item in B)
            {
                Console.Write("{0,3} ", item);
            }
            Console.WriteLine();
            foreach (int item in C)
            {
                Console.Write("{0,3} ", item);
            }
            Console.WriteLine();
            Console.ReadKey();
        }
    }
}
