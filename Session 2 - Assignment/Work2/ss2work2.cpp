#include <stdio.h>

int main(){
	int n;
	printf ("nhap n =");
	scanf("%d",&n);
	int i=1, max=0;
	for(i=1;i<=n;i++){
		if(i%3==0&&i%2==0)
			max=i;
}		printf("so can tim la %d",max);
}
