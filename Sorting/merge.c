#include<stdio.h>

void swap_data(int *a, int *b) {

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void merge(int a[], int low, int high, int mid) {

	int l1,l2;
	l1 = mid-low+1;
	l2 = high-mid;
	int arr1[l1],arr2[l2];
	int i=0,j=0,k=0;
	for(i=low;i<=mid;i++){
		arr1[j] = a[i];
		j++;
	}
	j=0;
	for(i=mid+1;i<=high;i++){
		arr2[j] = a[i];
		j++;
	}
	i=0;j=0;	
	while(i<l1 && j<l2) {
		if(arr1[i]<arr2[j]){
			a[low+k]=arr1[i];
			k++;
			i++;
		}
		else {
			a[low+k]=arr2[j];
			k++;
			j++;
		}
	}

	while(i<l1) {
		a[low+k]=arr1[i];
		k++;
		i++;
	}
	while(j<l2) {
		a[low+k]=arr2[j];
		k++;
		j++;
	}
}

void merge_sort(int a[], int low, int high) {

	int mid;
	if(low<high) {
		mid = low+(high-low)/2;
		merge_sort(a, low, mid);
		merge_sort(a, mid+1, high);
		merge(a,low,high,mid);
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
	merge_sort(a,0,8);
	printf("\nAfter Sorting\n");
	printList(a,8);
	printf("\n\n");
	return 0;
}

