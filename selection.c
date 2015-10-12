#include <stdio.h>

void selection_sort(int n[], int len)
{
	int i, j, min, temp;

	for (i=0; i < len; i++) {
		min = i;	
		for (j = i; j < len; j++) {
			if (n[j] < n[min]) {
				min = j;
			}
		}

		if (min != i) {
			temp = n[i];
			n[i] = n[min];
			n[min] = temp;
		}
	}
}

int main()
{
	int number[] = {8, 5, 2, 6, 9, 3, 1, 4, 0, 7};
	int len;
	int i;

	len = sizeof(number)/sizeof(number[0]);

	selection_sort(number, len);

	printf("\n");
	for (i=0; i < len; i++) {
		printf("%d ", number[i]);
	}
	printf("\n");

	return 0;
}
