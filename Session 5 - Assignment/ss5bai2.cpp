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
	
	int dismin,stopval;
	for(int i=0;i<n;i++){
		dismin=abs(arr[i]-x);
		stopval=arr[i];
	}
	for(int i=0;i<n;i++){
		if(abs(arr[i]-x)<dismin){
			dismin=abs(arr[i]-x);
			stopval=arr[i];
		}
	}
	printf("so gan x nhat la %d",stopval);
}
