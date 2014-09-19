#include<stdio.h>


 int main(){
	char A[5] = "hello";
	char B[3] = "tlo";

	printf("%d",substring(A,B));

	return 0;

}

int substring(char* A, char* B){
	int test = 0, i=0, j=0, k=0;
	for(i=0; i<5; i++){
		if(A[i] == B[j]){
			k =i;
			for(j=1;j<3;j++){
				k++;
				if(A[k] == B[j]){
					test = 1;
				}
				else{
					test = 0;
					break;
				}
			}
		}
		if(test){
			return 1;
		}
	}
	return 0;
}