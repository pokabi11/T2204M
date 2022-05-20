#include <stdio.h>

int main(){
	int i, n;
	printf("nhap n=");
	scanf("%d",&n);
	printf("cac so le nho hon n la: \n");
	for (i=0;i<n;i++){
		if(i%2!=0){
			printf("%d\n",i);
		}
	}
}
