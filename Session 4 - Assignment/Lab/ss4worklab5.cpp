#include <stdio.h>
int main(){

	int n;
	int arr[n];
		int fakearr[n],k;
	printf("nhap gioi han mang ");
	scanf("%d",&n);
	
	int l;
	for(l=0;l<n;l++)
	{
		printf("\n Nhap so nguyen thu %d trong mang ",l+1);
		scanf("%d",&arr[l]);
	}
	
	int i,j,temp;
	for (k=0;k<n;k++)
		fakearr[k] = arr [k];
		
	for (i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
			{
				if (fakearr[i]>fakearr[j])
				{
					temp= fakearr[i];
					fakearr[i]=fakearr[j];
					fakearr[j]= temp;
				}	
			}
	}
	for(i=0;i<n;i++)
	{
		printf("\nSo o [%d]la so nho nhat %d",i, fakearr[i]);
		break;
	}
}
