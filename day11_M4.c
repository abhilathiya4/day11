#include<stdio.h>

main(){
	
	char a;
	
	printf("M:MONDAY, T:TUESDAY, W:WEDNESDAY, H:THURSDAY, F:FRIDAY, S:SATURDAY, U:SUNDAY \n");
	
	printf("enter any alphabet from above : ");
	scanf("%c",&a);
	
	switch(a){
		default : printf("please select from above character only");
		break;
		case 'M' : printf("MONDAY");
		 break;
		case 'T' : printf("TUESDAY");
		 break;
		case 'W' : printf("WEDNESDAY");
		 break;
		case 'H' : printf("THURSDAY");
		 break;
		case 'F' : printf("FRIDAY");
		 break;
	    case 'S' : printf("SATURDAY");
		 break;
		case 'U' : printf("SUNDAY");
		 break;
}
	
	
	
	
}
