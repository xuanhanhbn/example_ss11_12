#include <stdio.h>
#include <stdlib.h>

void main() {
	char ary[5];
	int i;
	printf("\nEnter string: ");
	scanf("%s", &ary);
	printf("\nThe string is %s \n",ary);
	for ( i = 0; i < 5; i++){
		printf("\t%d",ary[i]);
	}
}
