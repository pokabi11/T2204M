#include <stdio.h>

int main(){
	int n;
	int arr[n];
	int i;
	int total;
	printf("nhap gioi han mang: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Nhap gia tri mang thu %d: ", i+1);
		scanf("%d",&arr[i]);
	}
	int sum=0,dem=0;
	for(int i=0;i<n;i++){
		//xet xem arr[i]co phai so le hay khong
		if (arr[i] %2 !=0){
			sum+=arr[i];
			dem++;
		}
	}		printf("trung binh cac so le trong mang la %f",(float)sum/dem);
}
