#include<stdio.h>

void swap_data(int *a, int *b) {

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void selection_sort(int a[], int n) {

	int i, j, min;
	for(i=0;i<=n-1;i++) {
		min=i;
	   for(j=i+1;j<=n;j++) {
			if(a[j]<a[min]) {
				min=j;
			}
		}
	swap_data(&a[i],&a[min]);
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
	selection_sort(a,8);
	printf("\nAfter Sorting\n");
	printList(a,8);
	printf("\n\n");
	return 0;
}

