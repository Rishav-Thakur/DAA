#include <stdio.h>
void insertiosort(int *arr, int n)
{
    for (int i=1; i<n; i++)
    {
        int temp,j;
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]= temp;
    }
}
int main()
{
    int n;
 printf("Enter the size of array: ") ;
 scanf("%d", &n);
 int arr[n];
 printf("Enter the values of array: \n");
 for(int i=0; i<n-1; i++)
 {
     scanf("%d ",&arr[i] );
 }
 insertiosort(arr, n);
for(int i=0 ; i<n; i++)
{
    printf("%d ", arr[i]);
}
printf("\n Loop Finished");
    return 0;
}