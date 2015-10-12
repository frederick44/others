#include <stdlib.h>
#include <stdio.h>

int main(){

int *emo;
int a;
int x=0;
printf("Pascal triangle program \n");
printf("give me the nth row you want \n");
scanf("%d",&a);

emo=malloc(a*sizeof(int));


for(int i=1;i<=a;i++){

	for(int j=x;j>=0;j--){
		if (j==0 || j==x){
			emo[j]=1;
		}
		else{
		emo[j]=emo[j]+emo[j-1];
		}
	}

	x++;
	printf("\n");
	
	for(int t=1;t<a-i;t++){
	
	printf("   ");
	}
	
	

	for(int h=0;h<x;h++){
	printf("%3d   ",emo[h]);
	}

}

return 0;
}
