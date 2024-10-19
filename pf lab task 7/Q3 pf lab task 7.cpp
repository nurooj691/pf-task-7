#include<stdio.h>
int main(){
	int array[12];
	printf("enter the 12 elements of array");
	for(int i=0; i<12;i ++){
		scanf("%d", &array[i]);
	}
	int sumarray[6], j=0;
	for(int i=0; i<12; i++){
		sumarray[j]= array[i*2]+array[i*2+1];
		j++;
	}
	for(int i= 0; i<6; i++){
		printf(" %d ", sumarray[i]);
	}
	
	
	
	
	
	
	
	
}