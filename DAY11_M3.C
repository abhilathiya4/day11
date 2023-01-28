
#include<stdio.h>

main(){
	
	int a,b,c,d;
	
	printf("enter value of A:  ");
	scanf("%i",&a);	
	
	printf("enter value of B:  ");
	scanf("%i",&b);	
	
	printf("enter value of C:  ");
	scanf("%i",&c);	
	 
	printf("enter value of D:  ");
	scanf("%i",&d);	
	
	if(a<b){
		
		if(b<c){
			
			if(c<d){
				
				printf("D is Max");
				
			}
			else{
				
				printf("C is Max");
				
				
			}
		}
		else{
			
			if(b<d){
				printf("D is Max");
				
				
			}			
			else{
				
				printf("B is Max");
			}
		}
	}
	else{
		
		if(a<c){
			
			if(c<d){
				printf("D is Max");
				
			}
			else{
				printf("C is Max");
				
			}
		}
		else{
			 if(a<d){
			 	printf("D is Max");
			 	
			 }			
			
			else{
				printf("A is Max");
				
			}
		}
		
	}
}
	 
