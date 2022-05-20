#include <stdio.h>
int main (){
	int n;
	printf("nhap n ");
	scanf ("%d",&n);
	
	int i, sum=0;
	for (i=1;i<=n/2;i++){
		if (n%i==0)
		sum +=i;
	}
	if (sum==n){
		printf("%d la so hoan hao",n);
		}else{
			printf ("%d khong phai la so hoan hao",n);
	}
}
