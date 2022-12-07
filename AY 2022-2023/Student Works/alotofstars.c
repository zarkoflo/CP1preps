#include <stdio.h>

int main(){
	int dNum1;

	scanf("%d", &dNum1);

	for(int i = 0; i < dNum1; i++){
		for(int j = 0; j < dNum1; j++){
			if(i<=j){
				printf("*");
			}else{
				printf(" ");
			}

		}
		printf("\n");
	}

	return 0;


}
