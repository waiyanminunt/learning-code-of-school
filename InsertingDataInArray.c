/*Insreting Data In Array*/
#include<stdio.h>

//Array defining size
#define SIZE 6

//Advertising of Global variable
int arr[SIZE] , element , number , i , position ;

//Progran started
int main(){
    printf("Enter number of elements: \n");
    scanf("%d",&number);
    printf("Element %d of Array \n",number);
    for (i=0;i<number;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array data Elements are : \n");
    for(i=0;i<number;i++)
    {
        printf("%d",arr[i]); //5 4 3 2 1 0
    }
    printf("\n Enter the element to be insert: ");
    scanf("%d",&element); // 0
    printf("\n Enter the position of element: ");
    scanf("%d",&position); //3
    i=number-1; //5
    while(position<= i) //3<=5    0rg:p=3 i=5 first:p=3 i=4 second:p=3 i=3
    {
        arr[i+1]=arr[i]; //arr[5+1]=arr[6] arr[4+1]=arr[5] arr[3+1]=arr[4]
        i--;           //5 4 3 2 1 1   5 4 3 2 0 1   5 4 3 0 2 1
    }
    arr[position] =element; //arr[3]=0 //
    printf("After insetion arr is : \n");
    for(i=0;i<number;i++) 
    {
        printf("%d",arr[i]); //5 4 3 0 2 1
    }

}