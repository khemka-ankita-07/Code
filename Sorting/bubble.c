#include<stdio.h>

void swap_data(int *a, int *b) {

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int a[], int n) {

	int i, j;
	for(i=0;i<=n-1;i++) {
	   for(j=0;j<=n-i-1;j++) {
			if(a[j]>a[j+1]) {
				swap_data(&a[j],&a[j+1]);
			}
		}
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
	bubble_sort(a,8);
	printf("\nAfter Sorting\n");
	printList(a,8);
	printf("\n\n");
	return 0;
}

