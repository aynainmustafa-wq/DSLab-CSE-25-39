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
void insert(int arr[],int num, int elem, int index){
    for(int i = num-1;i>=index;i--){     //we have to insert so start from the right and go left
        arr[i+1]=arr[i];      //created a new empty index, filled it with value of previous index
    }                       //this will stop when we reach the target index, creating one empty index there
    arr[index]= elem;      //filling that empty index 
}
void delete(int arr[],int num, int index){
    for(int i = index;i<num;i++){
        arr[i]=arr[i+1];
    }
}
void bubblesort(int arr[],int num){
    int temp;
    for(int j=0;j<num-1;j++){
    for(int i=0;i<num-j-1;i++){
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
         }
      }
   } 
}
int main(){
    int num, key, elem1, index1, elem2, index2;
    int arr[50];
    printf("Enter number of elements in your array:");
    scanf("%d",&num);
    printf("Enter the elements of your array: ");
    input(arr,num);
    printf("Your array is :");
    display(arr,num);
    printf("\nPlease enter your key :");
    scanf("%d",&key);
    isKey(arr,key,num);
    printf("\nEnter element you want to insert : ");
    scanf("%d",&elem1);
    printf("Enter index to insert number : ");
    scanf("%d",&index1);
    insert(arr,num,elem1,index1);
    num++;
    printf("\nYour new array is: ");
    display(arr,num);
    printf("\nEnter index to delete number at : ");
    scanf("%d",&index2);
    delete(arr,num,index2);
    num--;
    printf("\nYour new array is: ");
    display(arr,num);
    bubblesort(arr,num);
    printf("\nYour sorted array is: ");
    display(arr,num);
    return 0;
}
