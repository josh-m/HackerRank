/*
Problem Statement

Alex is attending a Halloween party with his girlfriend, Silvia. At the party, Silvia spots the corner of an infinite chocolate bar (two dimensional, infinitely long in width and length).

If the chocolate can be served as only 1 x 1 sized pieces and Alex can cut the chocolate bar exactly K times, what is the maximum number of chocolate pieces Alex can cut and give Silvia?

Input Format 
The first line contains an integer T, the number of test cases. T lines follow.
Each line contains an integer K.

Output Format
T lines; each line should contain an integer that denotes the maximum number of pieces that can be obtained for each test case.

Constraints
1=T=10
2=K=107

Note: Chocolate must be served in 1 x 1 sized pieces. Alex can't relocate any of the pieces, nor can he place any piece on top of another.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	unsigned long n=2; //number of pieces
	unsigned k;
    int ci=0; //cut counter
	int add=1; //pieces added with cut
	
	//get number of test cases
	int T;
	scanf("%i", &T);

	int i=0;
	for (; i<T; i++){
		scanf("%i", &k);
		if (k==2){
			printf("1\n");
		}
		else if (k==3){
			printf("2\n");
		}
		else{
			n=2;
			ci=0;
			add=2;
			int ki=3;
			while (ki < k){							
				n += add;
				ki++;
				
				ci++;
				ci = ci % 2;
				if (!ci)
					add++;
			}
			printf("%lu\n", n);
		}
	}

	return 0;
}