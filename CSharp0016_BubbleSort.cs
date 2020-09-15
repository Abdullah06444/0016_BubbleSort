using System;

namespace CSharp0016_BubbleSort
{
    class CSharp0016_BubbleSort
    {
        static void Main(string[] args)
        {
            int size = 10, i=0;
            int[] array = new int[size];
            string s;
            do
            {
                s = Console.ReadLine();
                var numbers = s.Split(' ');

                foreach (var element in numbers)
                {
                    array[i++] = int.Parse(element);
                    if (i == size)
                        break;
                }
                
            } while (i < size);

            bubbleSort(array, size);

            print(array, size);
        }

        static void bubbleSort(int[] a, int s, int i=0)
        {
            for (int j = 0; j < s - 1; j++)
                if (a[j + 1] < a[j])
                    swap(a, j);

            if (++i != s)
                bubbleSort(a, s, i);
        }

        static void swap(int[] a, int i)
        {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }

        static void print(int[] a, int s)
        {
            foreach (int item in a)
                Console.Write(item + " ");
            Console.WriteLine();
        }
    }
}
