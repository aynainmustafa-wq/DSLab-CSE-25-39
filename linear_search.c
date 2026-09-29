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
void isKey(int arr[],int key, int num ){
    int flag =0;
    for(int i =0;i<num;i++){
        if(key==arr[i]){
            flag =1;
            printf("Key was found at index %d",i);
        }
    }
    if(flag !=1){
        printf("Key was not found");
    }
}

int main(){
    int num, key;
    int arr[50];
    printf("Enter number of elements in your array:");
    scanf("%d",&num);
    printf("Enter the elements of your array: ");
    input(arr,num);
    printf("Your array is :");
    display(arr,num);
    printf("Please enter your key :");
    scanf("%d",&key);
    isKey(arr,key,num);
    return 0;
}
