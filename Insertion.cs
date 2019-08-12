using System;

namespace Algo
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] lst = new int[8] {1,4,3,2,5,7,9,8};

            new Program().Insertion(lst);
        }

        public void Insertion (int[] arr) 
        {
            int j = 0;
            int e = 0;
            for (int i = 1; i < arr.Length; i++)
            {
                e = arr[i];
                j = i;
                while (j > 0 && arr[j - 1] > e)
                {
                    arr[j] = arr[j - 1];
                    j--;  
                }      

                arr[j] = e;
            }
            // for (int  i = 1; i < arr.Length; i++) 
            // {
            //     e = arr[i];
            //     j = i;
            //     while (j > 0 && arr[j] < arr[j - 1])
            //     {
            //             arr[j] = arr[j - 1];
            //             arr[j - 1] = e;
            //             j--;
            //     }
            // }
            for (int i = 0; i < arr.Length; i++)
            {
                System.Console.Write($"{arr[i]},");
            }
        }
    }
}
