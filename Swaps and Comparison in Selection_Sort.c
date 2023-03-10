#include <stdio.h> 
// function to swap the the position of two elements void swap(int *a, int *b) { 
int temp = *a; 
*a = *b; 
*b = temp; 
} 
void selectionSort(int array[], int size) { 
int count=0; 
int step; 
int i; 
for (step = 0; step < size - 1; step++) { 
int min_idx = step; 
for (i = step + 1; i < size; i++) { 
// To sort in descending order, change > to < in this line. // Select the minimum element in each loop. 
if (array[i] < array[min_idx]) 
min_idx = i;
count++; 
} 
// put min at the correct position 
swap(&array[min_idx], &array[step]); 
} 
printf("Number of Swaps %d \n",step); 
printf("Number of Comparisons %d \n",count); } 
// function to print an array 
void printArray(int array[], int size) { 
for (int i = 0; i < size; ++i) { 
printf("%d ", array[i]); 
} 
printf("\n"); 
} 
// driver code 
int main() { 
int data[] = {20, 12, 10, 15, 2}; 
int size = sizeof(data) / sizeof(data[0]); 
selectionSort(data, size); 
printf("Sorted array in Acsending Order:\n"); printArray(data, size); 
} 
