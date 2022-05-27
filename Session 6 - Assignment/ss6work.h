#include<stdio.h>
#include <algorithm>
int bcnn(int a,int b){
	int c;
    int maxV = a*b;
    int step = std::max(a, b);
    for(int i = step; i <= maxV; i+= step){
        if(i % a == 0 && i % b == 0){
            c = i;
            break;
        }
    }
    return c;
}

int gcd(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}


bool checkPrimeNum(int n){
	if(n<2){
		return false;
	}
	if(n==2||n==3){
		return true;
	}
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
