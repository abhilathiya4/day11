#include<stdio.h>

main(){
	float A,unit,surcharge,total;
	
	printf("ENTER NUMBER OF UNITS USED : ");
	scanf("%f",&unit);	
	
	
	if(unit <= 50)
    {
        A = unit * 0.50;
    }
    else if(unit <= 150)
    {
        A = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        A = 100 + ((unit-150) * 1.20);
    }
    else
    {
        A = 220 + ((unit-250) * 1.50);
    }
    
    surcharge = A * 0.20;
    
    total = surcharge + A;
	printf("total : %f",total);
}
