#include<stdio.h>
#include<string.h>

main(){
	
	char a[100];
	char b[100];

	int z;
	
	printf("Enter Name:");
	scanf("%s",&a);
	
	strcpy(b,a);
	
	z = strcmp(strrev(b),a);
	
	if(z == 0){
		
		printf("Palindrome Function");
	}
	else{
			printf("Not Palindrome Function");
	}
	
}

