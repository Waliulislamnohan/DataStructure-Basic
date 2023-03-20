#include<stdio.h>
int main(){
    int i,j,pos,temp;
    int arr[6] = {5,4,10,1,6,2};

    for(i=0;i<5;i++){
        pos = i;
        for(j=i+1;j<6;j++){
            if(arr[pos]>arr[j]){
                pos = j;
            }
            }
            if(pos!=i){
                temp=arr[i];
                arr[i]=arr[pos];
                arr[pos]=temp;
        }
    }

        for(i=0;i<6;i++){
        printf("%d , ",arr[i]);
    }
}