#include <stdlib.h>
#include <stdio.h>


int main(){

char numeros;
char *vector;
char contador=0;
char aux;

printf("bubble sort algorithm\n");
printf("give me the number of elements to sort\n");
scanf("%d",&numeros);

vector=(char *)malloc(sizeof(char)*numeros);


while(contador<numeros){
	printf("give me one number \n ");
	scanf("%d",(vector+contador));
	contador++;

}


for(int i=1;i<=numeros;i++){

	for(int j=0;j<numeros-i;j++){
		if((*(vector+j))>(*(vector+j+1))){ 
			aux=*(vector+j);
			*(vector+j)=*(vector+j+1);
			*(vector+j+1)=aux;
			}
			
	}
}


printf("the ordered sequence is: \n");

for(int i=0;i<numeros;i++){

printf("%d \n", *(vector+i));

}

free(vector);
return 0;
}
