#include<stdio.h>
int main(){
	int n = 5;
	for(int i = n; i >= 1; i--){
		for(int j = 1; j <= n - 1; j++){
			printf(" ");
		}
		for(int j = 1; j <= 2 * i - 1; j++){
			printf("*");
		}
		printf("\n");
	}
	//lower part
	for (int i = 2; i <= n; i++){
		for (int j = 1; j <= n - i; j++){
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
