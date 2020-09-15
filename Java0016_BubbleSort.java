import java.util.Scanner;

public class Java0016_BubbleSort {

    public static void main(String[] args){

        int size = 10, i = 0;
        int[] array = new int[size];
        Scanner s = new Scanner(System.in);
        do {

            array[i++] = s.nextInt();
        }while(i < size);

        bubbleSort(array, size, 0);

        print(array, size);
    }

    private static void bubbleSort(int[] a, int s, int i)
    {

        for (int j = 0; j < s-i-1; j++)
            if (a[j+1] < a[j])
                swap(a, j);
        if(++i != s)
            bubbleSort(a, s, i);
    }

    private static void swap(int[] a, int i){

        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }

    private static void print(int[] a, int s){

        for(int i=0; i<s; )
            System.out.print(a[i++] + " ");
        System.out.println();
    }
}
