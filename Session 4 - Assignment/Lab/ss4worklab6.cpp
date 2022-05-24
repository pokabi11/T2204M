#include <stdio.h>

int main(){
	
	int n;
	int arr[n];
	printf("nhap gioi han mang ");
	scanf("%d",&n);
	
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n Nhap so nguyen thu %d trong mang ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int j=0, count=0, max=0;
	
	while (j<n);
	{
		if (arr[n]>0){
		count++;
			if (count>max){
			max=count;
		}
		}else{
			count=0;
		}
		j++;
	}	
	printf("Max dat tai %d",max);
}
