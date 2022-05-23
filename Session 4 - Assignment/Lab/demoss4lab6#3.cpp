#include <stdio.h>

int main(){
	int n=0;
	int arr[n];
	int i,j;
	printf("nhap gioi han mang: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Nhap gia tri mang thu %d: ", i+1);
		scanf("%d",&arr[i]);
	}
	
	i=0;
	j=0;
	int T=0;
    
	while(i<(n-1))
    {
        while(j<n)
        {
            if((arr[j]==(arr[i]+1))|| (arr[j]==(arr[i]-1)))
            {
                T++;
                j++;
            }
            break;
        }
        i++;
    }
   
}
