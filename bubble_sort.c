#include<stdio.h>

int main(){
    int arr[6] = {5,4,10,1,6,2};
    int i,j,temp;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(i=0;i<6;i++){
        printf("%d , ",arr[i]);
    }
}