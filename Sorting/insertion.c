#include<stdio.h>

void swap_data(int *a, int *b) {

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void insertion_sort(int a[], int n) {

	int i=0, j, index, value;
	while(i<=n) {
		index=i;
		value=a[i];
		j=i-1;
		while (j>=0 && a[j]>value) {
			a[j+1] = a[j]; j--;	
		}
		a[j+1] = value;
		i++;
	}

}

void printList(int a[], int n) {

	int i;
	for(i=0;i<=n;i++) {
		printf("%d ",a[i]);
	}
}

int main() {

	int a[9] = {9,8,7,6,5,4,3,2,1};
	printf("Before Sorting\n");
	printList(a,8);
	insertion_sort(a,8);
	printf("\nAfter Sorting\n");
	printList(a,8);
	printf("\n\n");
	return 0;
}

