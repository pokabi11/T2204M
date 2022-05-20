#include <stdio.h>

int main(){
	int n, sum=0;
	printf("nhap n");
	scanf("%d",&n);
	
	int i;
	for(i=1;i<=n;i++){
		sum+=i;
}
	printf("tong cac so tu 1 den n la %d",sum);
}
