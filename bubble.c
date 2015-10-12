#include <stdio.h>


void bubble_sort(int n[], int len)
{
	int i, j, k,temp;

	for (i = 0; i < len - 1; i++) {
		printf("\nlist %d\n", i);
		for (j = 0; j < len - 1 - i; j++) {
			if(n[j] > n[j+1]){
				temp = n[j];
				n[j] = n[j+1];
				n[j + 1] = temp;
			}
			for (k=0; k < len; k++)
				printf("%d ", n[k]);
			printf("\n");
		}
	}
}

int main()
{
	int number[] = {8, 7, 6, 5, 4, 3, 2, 1};
	int i;
	int len;

	len = sizeof(number)/sizeof(number[0]);
	bubble_sort(number, len);

	printf("\n");
	for (i=0; i < len; i++) {
		printf("%d ", number[i]);
	}
	printf("\n");

	return 0;
}
