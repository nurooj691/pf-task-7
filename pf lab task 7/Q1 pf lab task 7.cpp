#include<stdio.h>
int main(){
   int num, array[5] = {1,2,3,4,5}, found = 0;
   printf("enter a  number to search");
   scanf("%d", &num);
   for(int i = 0; i<5; i++){
   	if(array[i]==num){
   		printf("the index of %d is %d", num, i);
   		found = 1;
   	}
	 }
	 if(found ==0)
	printf("there is no such number in this array");

	
}