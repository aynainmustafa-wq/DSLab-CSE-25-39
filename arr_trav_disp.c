#include <stdio.h>
void input(int arr[],int num){
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
}
void display(int arr[],int num){
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int num;
    int arr[50];
    printf("Enter number of elements in your array:");
    scanf("%d",&num);
    printf("Enter the elements of your array: ");
    input(arr,num);
    printf("Your array is :");
    display(arr,num);
    return 0;
}
