#include<stdio.h>
int main(){
    int i,num,pos=0;
    int arr[]={5,4,6,3,2,1};
    printf("which number you want to search\n");
    scanf("%d",&num);

    for(i=0;i<=6;i++){
        if (num ==arr[i])
        {
            pos = i+1;
            break;
        }
    }
    if(pos==0){
        printf("not found it ");
    }else{
        printf("Found it on %d no position",pos);
    }

}