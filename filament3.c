#include<stdio.h>
#include<string.h>

main(){
	
	char a[100];
	char b[100];
	int z = 0;
	char d[100];
	char e[100];
	int f =0;
	
	printf("Enter E-mail:");
	scanf("%s",&a);
	
	printf("Enter RE email:");
	scanf("%s",&b);
	
	z = strcmp(a,b);
	if(z==0){
		
		printf("enter password :");
		scanf("%s",&d);
		
		printf("enter Re-password :");
		scanf("%s",&e);
		
		f = strcmp(d,e);
		if(f==0){
		
		printf("Login");
	}
	else{
			printf("incorect password\nstart Again");
	}
		
	}
	else{
			printf("incorrect email");
	}
	
	
}
