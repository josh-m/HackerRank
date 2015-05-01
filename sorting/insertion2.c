/* performs insertion sort,
   printing state on each iteration */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void print_arr(int *ar, int ar_size);

void insertionSort(int ar_size, int *  ar) {
	int i,j,v;
	
	for (j=1; j<ar_size; j++){
		v = ar[j];
		i = j-1;
		while (v < ar[i]){
			ar[i+1] = ar[i];
			i--;
		}
		
		ar[i+1] = v;
		
		print_arr(ar, ar_size);
	}
}

void print_arr(int *ar, int ar_size){
	int j;
	for (j=0; j<ar_size-1; j++){
		printf("%i ",ar[j]);
	}
	printf("%i\n", ar[ar_size-1]);

}

int main(void) {
   
	int _ar_size;
	scanf("%d", &_ar_size);
	int _ar[_ar_size], _ar_i;
	
	for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
	   scanf("%d", &_ar[_ar_i]); 
	}

	insertionSort(_ar_size, _ar);
	   
   return 0;
}
