// Quick Sort
#include<stdio.h>

void swap_data(int *a, int *b) {

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int a[], int low, int high) {

	int p = a[high];
	int i=low,j=low;
	while(j<high) {
		if(a[j]<p) {
			swap_data(&a[j],&a[i]);
			i++;
		}
		j++;
	}
	swap_data(&a[high],&a[i]);
	return i;
}

void quick_sort(int a[], int low, int high) {

	int p;
	if(low<high) {
		p = partition(a,low,high);
		quick_sort(a, low, p-1);
		quick_sort(a, p+1, high);
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
	quick_sort(a,0,8);
	printf("\nAfter Sorting\n");
	printList(a,8);
	printf("\n\n");
	return 0;
}

