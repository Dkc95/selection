#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
void selection (int arr[]);
int arr[MAXSIZE],maxsize;

int main()
{
   int i;
   printf("\nHow many elements you want to sort:");
   scanf("%d",&maxsize);
   printf("\nEnter the values one by one:");
   for(i=0;i<maxsize;i++)
   {
       printf("\n Enter element %i:",i);
       scanf("%d",&arr[i]);
   }
   printf("\nArray before sorting:\n");
   for(i=0;i<maxsize;i++)
    printf("%d,",arr[i]);
   printf("\n");
   selection(arr);
   printf("\nArray after sorting:\n");
   for(i=0;i<maxsize;i++)
   {
       printf("%d,",arr[i]);
   }
}

void selection(int arr[])
{
    int i,j,k;
    int min,temp;
    for(i=0;i<maxsize-1;i++)
    {
        min=i;
        for(j=i+1;j<maxsize;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
