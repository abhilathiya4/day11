
#include<stdio.h>

main(){
	
	char a;
	
	printf("enter any character:  ");
	scanf("%c",&a);	
	
	if((a>='a' && a<='z') || (a>='A' && a<='Z')){
		printf("this is an alphabet");
	}
	else if(a>= '0' && a<= '9'){
		printf("this is a digit");
		
	}
	else{
		
		printf("this is a special character");
	}
	
	

	
}
