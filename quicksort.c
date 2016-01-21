#include <stdio.h>
#include <stdlib.h>


void quicksort(uint8_t* a, uint8_t b){
	
	uint8_t c=0;
	uint8_t d=b-1;
	uint8_t pivote;
	uint8_t z;
	uint8_t m;
	
	
	if(b%2==1 && b>1){
		m=(b/2)+1;
	}
	else{
		m=b/2;
		}
		 
	
	if(b==1){
		
		return; 
	}else{
		
		while(c<d){
		
		pivote=(*a+*(a+b-1))/2;
		
			if( (*(a+c))>(*(a+d))){
				z=*(a+c);
				*(a+c)=*(a+d);
				*(a+d)=z;
				c++;
				d--;
			}else if((*(a+d))>=pivote && (*(a+c))>pivote){
				d--;
				
			}else if((*(a+c))<=pivote && pivote>(*(a+d))){
				c++;
			}else{
				c++;
				d--;
			}
			
		}
		
		
	}
			//this is to rearrenge the list because is a odd list
		if(*(a+c)> *(a+c+1) && (a+c)<(a+b-1)){
			z=*(a+c);
			*(a+c)=*(a+c+1);
			*(a+c+1)=z;
		}
	
		quicksort(a,m);
		quicksort(a+m,b/2);

		return;
}


int main(){

uint8_t *a;
uint8_t numeros;
uint8_t i=0;

printf("give me the number of elements to sort \n");
scanf("%d",&numeros);

a=malloc(sizeof(uint8_t)*numeros);

while(i<numeros){

	scanf("%d",a+i);
	i++;

}
printf("\n\n");

quicksort(a,numeros);

for(uint8_t j=0;j<numeros;j++){
	
	printf("%d \n",*(a+j));
}

return 0;
}
