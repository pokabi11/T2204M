#include <stdio.h>
int main(){

	int n;
	int arr[n];
	printf("nhap gioi han mang ");
	scanf("%d",&n);
	
	int l,stop=0;
	for(l=0;l<n;l++)
	{
		printf("\n Nhap so nguyen thu %d trong mang ",l+1);
		scanf("%d",&arr[l]);
	}
	for (l=0;l<n;l++)
		if(arr[l]%2!=0){
		stop=arr[l];
		printf("so tai [%d] la %d \n",l, arr[l]);
		}
		printf("%d la so can tim",stop);
//		chuong trinh nay khong chay duoc qua n=5
}

