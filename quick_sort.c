
#include<stdio.h>
void quicksort(int arr[],int lb, int hb)
{
    int i,j,pivot,temp;
    if(lb < hb)
    {
        pivot = lb;
        i = lb;
        j = hb;
        while(i<j)
        {
            while(arr[i] <= arr[pivot] && i < hb)
            {
                i++;
            }
            while(arr[j] > arr[pivot])
            {
                j--;
            }
            if(i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[j];
        arr[j] = arr[pivot];
        arr[pivot] = temp;
        quicksort(arr,0,j-1);
        quicksort(arr,j+1,hb);
    }
}
int main()
{
   int arr[6] = {5,4,10,1,6,2},n,i;
    int lb = 0;
    int hb = 5;
    quicksort(arr,lb,hb);
    printf("Sorted Elements are: ");
    for(i=0; i<6; i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}