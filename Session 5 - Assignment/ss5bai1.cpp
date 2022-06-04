#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("nhap gioi han mang:\n");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("nhap so hang thu %d cua mang:\n",i+1);
		scanf("%d",&arr[i]);
	}
	
	int x;
	printf("nhap x \n");
	scanf("%d",&x);
	
	int dismax,stopval;
	for(int i=0;i<n;i++){
		dismax=abs(arr[i]-x);
		stopval=arr[i];
	}
	for(int i=0;i<n;i++){
		if(dismax<abs(arr[i]-x)){
			dismax=abs(arr[i]-x);
			stopval=arr[i];
		}
	}
	printf("so cach xa x nhat la %d",stopval);
}
