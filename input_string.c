#include <stdio.h>
int main(){
    char str1[50];
    printf("Enter your string: ");
    int i;
    for(i=0; i<49;i++){
        scanf("%c",&str1[i]);
        if(str1[i]=='\n'){
            break;
        }
        
    }
    str1[i]='\0';
    printf("Your string is: %s", str1);
    return 0;
}
