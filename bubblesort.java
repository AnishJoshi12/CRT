import java.util.*;
public class bubblesort{
    static void BubbleSort(int[] arr, int size)
    {
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size-i-1;j++)
            {
                if(arr[j]<arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
  public static void main(String[] args)
  {
    int[] arr={ 64, 35, 25, 12, 22 , 11, 90};
    int size=arr.length;
    BubbleSort(arr, size);
    for(int k=0;k<size;k++)
    {
    System.out.print(arr[k]+" ");
    }
  }
}