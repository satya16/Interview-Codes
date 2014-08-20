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
		for (j=i+1;j<n;j++) {
			if (a[j]<a[i]) {
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	} 
	
	
	printf ("The sorted array is\n");
	for (i=0;i<n;i++) {
		printf ("%d",a[i]);
	}
}