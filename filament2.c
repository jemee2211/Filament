#include<stdio.h>
#include<string.h>

main(){
	
	char a[100];
	char b[100];
	int z = 0;
	
	printf("Enter Name:");
	scanf("%s",&a);
	
	printf("%s",strrev(a));
	
	strcpy(a,b);
	printf("%s\n",a);
	
    
	
	z= strcmp(a,b);
	
	if(a==b){
		
		printf("Palindrome Function");
	}
	else{
			printf("Not Palindrome Function");
	}
	
}

