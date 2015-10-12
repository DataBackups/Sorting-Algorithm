#include <stdio.h>

void quick_sort(int n[], int left, int right)
{
	int i = left;
	int j = right;
	int temp = n[left]; //base number

	if (left < right) {
		while(i < j) {
			while(i < j && n[j] >= temp) //find less than temp number form right to left
				j--;
			if (i < j) {
				n[i] = n[j];
				i++;
			}

			while(i < j && n[i] < temp) //find big than temp number form left to right
			i++;
			if (i < j) {
				n[j] = n[i];
				j--;
			}
		}
		n[i] = temp; //swap base number
		
		quick_sort(n, left, i - 1);
		quick_sort(n, i + 1, right);
	}
}


int main()
{
	int number[] = {3, 7, 8, 5, 2, 1, 9, 5, 4};
	int len;
	int i;

	len = sizeof(number)/sizeof(number[0]);
	quick_sort(number, 0, len - 1);

	printf("\n");
	for (i = 0; i < len; i++) {
		printf("%d ", number[i]);
	}
	printf("\n");
}
