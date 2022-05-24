#include <stdio.h>

int main (){
	
	int n;
	do{
		printf("nhap n ");
		scanf("%d",&n);
	}while(n<=0);
	
	int arr[n];
	printf("nhap mang ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int count = 0, max = 0, i = 0, sum = 0;
	
	while(i<n){
		if(arr[i]>0){
			count++;
			if(count > max){
				max = count;
				sum+=arr[n];
			}else{
			}
		}else{
			count = 0;
			sum=0;
		}
		i++;
	}
	
	printf("Tong %d lien tiep la: %d",max,sum);
}
