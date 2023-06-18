/*	A 2D array can be dynamically allocated in C using a single pointer. 
This means that a memory block of size row*column*dataTypeSize is allocated 
using malloc and pointer arithmetic can be used to access the matrix elements.

A program that demonstrates this is given as follows:	*/


#include <stdio.h>
#include <stdlib.h> 
int main() {
   int row = 2, col = 3;
   int *arr = (int *)malloc(row * col * sizeof(int)); 
   int i, j;
   for (i = 0; i < row; i++)
      for (j = 0; j < col; j++)
         *(arr + i*col + j) = i + j;    
   printf("The matrix elements are:\n");
   for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) {
         printf("%d ", *(arr + i*col + j)); 
      }
      printf("\n");
   }
   free(arr); 
   return 0;
}

/*	 Output:
The matrix elements are:
0 1 2
1 2 3
*/