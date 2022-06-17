/* Pointers to array / array to pointers -
WAP to read an array of elements and print the same in the reverse order with their addresses by using pointers.
WAP to read an array of element */

#include<stdio.h>
#include<conio.h>
#define MAX 30
 
void main() {
   int size, i, arr[MAX];
   int *ptr;
   ptr = &arr[0];
 
   printf("Enter the size of array: ");
   scanf("%d", &size); 
   printf("\nEnter %d integers into array:\n", size);
   for (i = 0; i < size; i++) {
      printf("Element - %d : ",i+1);
      scanf("%d", ptr);
      ptr++;
   }
 
   ptr = &arr[size - 1]; 
   printf("\nElements of array in reverse order are :");
 
   for (i = size - 1; i >= 0; i--) {
      printf("\nElement %d is :%d", i, *ptr);
      ptr--;
   }
}