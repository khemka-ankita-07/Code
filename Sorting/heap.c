#include<stdio.h>

void swap_data(int *a, int *b) {

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(int a[], int n, int h) {
	
	int l, r,largest=h;
	l = 2*h+1;
	r = 2*h+2;
	if(l<n && a[largest]<a[l])
		largest=l;

	if(r<n && a[largest]<a[r])
		largest=r;
	if(largest!=h) {
		swap_data(&a[largest],&a[h]);
		heapify(a,n,largest);
	}
}

void heap_sort(int a[],int n) {

	int i;
	for(i=n/2;i>=0;i--) 
		heapify(a,n,i);

	for(i=n;i>=0;i--) {
		swap_data(&a[0],&a[i]);
		heapify(a,i,0);
	}
}

void printList(int a[], int n) {

	int i;
	for(i=0;i<=n;i++) {
		printf("%d ",a[i]);
	}
}

int main() {

	int a[6] = {12, 11, 13, 5, 6, 7};
	printf("Before Sorting\n");
	printList(a,5);
	heap_sort(a,5);
	printf("\nAfter Sorting\n");
	printList(a,5);
	printf("\n\n");
	return 0;
}

