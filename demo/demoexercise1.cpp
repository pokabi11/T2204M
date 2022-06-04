#include <stdio.h>
#include <string.h>
//pokabi11
int main(){
	//tao mang 9 don vi gom tieng anh
	char s[9][100]={"one ","two ","three ","four ","five ","six ","seven ","eight ","nine "};
	//nhap so duong n co 3 chu so
	int n;
	while(1){
		printf("Input 3 digits n (if not, rewrite it) ");
		scanf("%d",&n);
		if(99<n&&n<1000){
			break;
		}
	}
	
	int x,y,z;//x la hang tram, y la hang chuc, z la hang don vi
	z=n%10;
	y=(n%100-n%10)/10;
	x=(n-n%100)/100;
	
	printf("Output:\n");
	for(int i=0;i<9;i++){
		if(x-1==i){
			printf("%s",s[i]);
		}
	}
	for(int i=0;i<9;i++){
		if(y-1==i){
			printf("%s",s[i]);
		}
	}
	for(int i=0;i<9;i++){
		if(z-1==i){
			printf("%s",s[i]);
		}
	}
}
