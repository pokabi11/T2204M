#include<stdio.h>
#include<string.h>

void softString(char s[]){
	char s[];
	char temp;
	int i,j;
	for(i=0;i<strlen(s)-1;i++){
		for(j=i+1;j<strlen(s)){
			if(s[i]>s[j]){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	return s[];
}
