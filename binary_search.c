#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6};
    int item = 5;
    int left,right,middle;
    left = 0;
    right = 5;
    
    

    while(left<=right){
        middle = (left+right)/2;
        if(arr[middle]==item){
            printf("Found it at %d index",middle);
            break;
        }else if(arr[middle] < item ){
            left = middle +1;
        }else{
            right = middle -1 ;
        }
    }
    printf("item not found!");
    return 0;
}