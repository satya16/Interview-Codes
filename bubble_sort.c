#include<stdio.h>
int main () {
	int a[10],i,j,n,temp;
	printf ("Enter number of elements in the array\n");
	scanf ("%d",&n);
	printf ("Enter elements in the array\n");
	for (i=0;i<n;i++) {
		scanf ("%d",&a[i]);
	}
	
	//Performing sort
	for (i=0;i<n;i++) {
		for (j=n;j>i;j--) {
			if (a[j]<a[j-1]) {
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	} 
	
	
	printf ("The sorted array is\n");
	for (i=0;i<n;i++) {
		printf ("%d",a[i]);
	}
}