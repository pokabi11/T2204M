#include <stdio.h>

int main(){
	int n;
	float sum=0;
	printf("nhap n");
	scanf("%d",&n);
	
	int i;
	for(i=1;i<=n;i++){
		sum+=(float)1/i;
}
	printf("tong cac so tu 1/1 den 1/n la %f",sum);
}
