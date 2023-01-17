#include<stdio.h>
#include<string.h>

main(){
	
	char a[100];
	char c;
	int i;
    int z=0;
	printf("Enter Value:");
    gets(a);

	
	printf("Enter Frequency Letter:");
	scanf("%c",&c);
	

    for(i=0;  i<strlen(a); i++){
	
	       if(c == a[i]){
		
	           z++;
	}
	
}
	 printf("the frequency of %c = %d",c,z);
}
