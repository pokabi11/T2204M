#include <stdio.h>

int main (){
	
	int n,i;
	printf("nhap gioi han mang ");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++){
	printf("\n nhap gia tri thu %d cua mang ",i+1);
	scanf("%d",&arr[i]);
	}
	
	int x;
	printf("\n nhap gia tri x ");
	scanf("%d",&x);
	
	int temp=0;
	int max = arr[temp]-x;
	for (int i=0;i<n;i++){
		int num = arr[i]-x;
		if (num > max)
		{
			max = num;
			temp=i;
		}
	}
	printf("so xa gia tri x nhat la %d \n",arr[temp]);
}
