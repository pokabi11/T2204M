#include <stdio.h>

int main(){
	int n;
	printf("nhap n ");
	scanf("%d",&n);
	
	if (n<=0){
			printf("so fibonacci %d =0",n);
	}else if(n==1||n==2){
		printf("so fibonacci %d =1",n);
	}else{
		int	i=3,a1=1,a2=1,a; 
		while (i<=n){
			a=a1+a2;
			a1=a2;
			a2=a;
			i++;
		}
		printf("Tong la %d",a);
}
}
