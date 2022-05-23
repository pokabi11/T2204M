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
	
		int x;
		int stop=0;
		printf("nhap so x ");
		scanf("%d",&x);
		
	for(i=0;i<n;i++)
		if (arr[i]==x){
		stop=1;
		break;
		}
	
	if(stop){
		printf ("%d ok",x);
	}else{
		printf ("%d not ok",x);
	}
}
