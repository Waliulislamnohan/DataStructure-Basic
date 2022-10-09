#include<stdio.h>

int main(){
    int a[50],size,pos,i,num;
    

    printf("enter the size of the size");
    scanf("%d",&size);

    printf("enter array");

    for(i=0;i<=size-1;i++){
        scanf("%d",&a[i]);
    } 
    printf("put which number you want insert");
    scanf("%d",&num);   

    printf("enter the position");
    scanf("%d",&pos);

    for(i=size;i>=pos;i--){
        a[i+1] = a[i];
    }
    a[pos]=num;
    size++;
    for(i=0;i<=size-1;i++){
        printf("%d\n", a[i]);
    }

    return 0;



}