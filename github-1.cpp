#include <stdio.h>

int main(){
	int k, i, n, sum = 0;
	
	scanf("%d", &k);
	
	for(i=0;i<k;i++){
		scanf("%d", &n);
		if(k==0){
			sum -= n;
		}
		else{
			sum += n;
		}
	}
	printf("%d", sum);
	return 0;
}
