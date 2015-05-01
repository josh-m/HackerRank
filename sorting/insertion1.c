/* inserts a single element,
   printing state on each swap */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) {
	int i = ar_size-2;
	int v = ar[i+1];
	int j;
	
	while (v < ar[i]){
		ar[i+1] = ar[i];
		i--;
		for (j=0; j<ar_size-1; j++){
			printf("%i ",ar[j]);
		}
		printf("%i\n", ar[ar_size-1]);
	}
	
	ar[i+1] = v;
	
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
