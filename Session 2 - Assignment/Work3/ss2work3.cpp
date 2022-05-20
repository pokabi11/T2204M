#include <stdio.h>

int main(){
	int n;
	printf("nhap n ");
	scanf("%d",&n);
	
	int i=1, u=0;
	while (i<=n){
		if(n%i==0){
			u++;
		}else{
		}i++;
	}if (u==2){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong la so nguyen to",n);
	}
}
