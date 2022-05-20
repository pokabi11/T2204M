#include <stdio.h>

int main(){
	int i,m,n;
	i=0;
	printf("nhap so dong ");
	scanf("%d",&i);
	
	for(m=0;m<i;m++){
		printf("\n");
		if(m%2==0){
			printf("* * * * *");
		}else{
			printf("* * * *");
		}
	}
}
