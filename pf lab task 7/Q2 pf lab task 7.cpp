#include<stdio.h>
int main(){
	int array[10];
	printf("enter 10 elements of array");
	
	for(int i = 0; i<10; i++){
		scanf("%d", &array[i]);
		
	}
	int temp = array[0];
	for(int i =0; i<9; i++){
		array[i]= array[i+1];
	}
	array[9]=temp;
	printf("After shifting each element one unit left, the array is:\n");
	for(int i = 0; i<10; i++){
	printf("%d", array[i]);
}
}