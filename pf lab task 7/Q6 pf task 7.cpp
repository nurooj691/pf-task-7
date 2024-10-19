#include<stdio.h>
int main(){
	int array[30];
	printf("enter 30 elements of array");
	for(int i =0; i <30; i++ ){
		scanf("%d", &array[i]);
	}
	int min = array[0], max = array[0];
	for(int i = 0; i<30; i++){
		if(array[i]>max)
		max = array[i];
		
	}
		for(int i = 0; i<30; i++){
		if(array[i]<min)
		min = array[i];
		
	}
	printf("the maximum element of array is: %d\n", max);
		printf("the minimun element of array is: %d", min);

	
}