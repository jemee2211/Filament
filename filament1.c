#include<stdio.h>
#include<string.h>

main(){
	
	char a[100];
	char c ='b';
	int i;
    int z=0;
	printf("Enter Value:");
	scanf("%s",&a);
	
	
	printf("Enter Frequency Letter:");
	scanf("%s",&c);
	

    for(i=0; a[i]!='\0'; i++){
	
	if(c==a[i]){
		
	z++;
	}
	
		
	
}
    printf("the frequency of %c = %d",c,a);
}
