#include <stdio.h>
void bubbleSort(int *arr, int n)
{
    int i, j,temp,flag;
    for(int i=0; i<n-1; i++)
    {
      flag = 0;
       for(int j=0; j<n-i-1; j++)
       {
          if(arr[j]>arr[j+1])
          {
            flag = 1;
             int temp = arr[j+1];
             arr[j+1] = arr[j];
             arr[j] = temp;
          }
       }
      
      if(flag==0)
      {
        break;
      }
   }
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d ",&n);
    int arr[n];
    for(int i=0; i<n;i++ )
    {
        scanf("%d", &arr[i]);
    }
    
    bubbleSort(arr,n);
    for(int i=0; i<n; i++)
    {
      printf("%d ", arr[i]);
    }
    
    return 0;
}
