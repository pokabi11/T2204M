#include <stdio.h>

int main(){
	int n=5;
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			for(int k=0;k<i;k++){
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}
}
