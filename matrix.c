//worst matrix multiplication

#include <stdio.h>

int main() {

// my 4 major variable are sum, size, n1, n2


	int sum = 0, size;
	printf("Enter size : \n");
	scanf("%d", &size);
	printf("\n [m,r,w] m= matrix, r = row, w = column \n");
	
	int i ,j,m;
	i = j = 1;
	int n1, n2;
	for (i ; i<=size; i++) {
		
		
		int times = 1;
		while (times<=size) {
		j = 1;
		sum = 0;
		for (j ; j<= size; j++){
			m = 1;
			printf("Enter [%d,%d,%d] : ", m , i ,j);
			scanf("%d", &n1);
			m = 2;
			printf("Enter [%d,%d,%d] : ", m , j ,times);
			scanf("%d", &n2);
			sum += n1*n2;
		}
		printf("Final matrix [%d,%d]%d\n", i, times, sum);
		times+=1;
		}
	
	}
	
	
	
	
	

}
