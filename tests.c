#include <stdio.h>

int main(){
    int x[2][2] = { { 1,2}, {3,4}};
    int length = sizeof(x[0])/sizeof(x[0][0]);
    for (int i = 0; i < length; i++){
    	for (int j = 0 ; j < length; j++){
    		printf("%d", x[i][j]);
    	}
    	printf("\n");
    }
    return 0;
}
