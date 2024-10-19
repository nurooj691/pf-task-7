#include<stdio.h>
int main(){
	int array[15], sum=0;
	printf("enter elements of array");
	for(int i = 0; i<15; i++){
		scanf("%d", &array[i]);
		sum = sum+array[i];
	}
	printf("the sum of all the elements of array is %d", sum);
}