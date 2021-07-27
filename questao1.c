#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int main(){

    
	int num1, num2, num3 = 0, cont=2, mmc=1;
	
	bool fac, div =false;
			printf("informe os numeros inteiros: ");
			
			scanf("%d %d %d", &num1, &num2, &num3);
			
    	if( num1==0 || num2==0 || num3==0){
    		
			printf( "O MMC eh igual a zero");
	}
	
	do{
        	if(num1 % cont==0){
          		num1 = num1 / cont;
        		fac = true;
       	}
        	if(num2 % cont==0){
        		num2 = num2 / cont;
        		fac = true;
	   }
	   		if(num3 % cont==0){
	   			num3 = num3 / cont;
	   			fac = true;
       }
      	  	if (fac){
       			mmc = mmc * cont;
       			fac = false;
	   }
	   	else{
	        cont++;
        }
	  	 	if(num1 == num2 && num2 == num3 && num3 == 1){
				div = true;	
		}
   }
   while(!div); 
     
       	printf("O MMC eh : %d ", mmc);
   	getch();
}