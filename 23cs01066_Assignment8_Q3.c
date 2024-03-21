#include<stdio.h>
void reverse(int *a,int index,int i){
    if(index<0){
        return;
    }
      printf(" %d",*(a+i));
      reverse(a,index-1,i-1);
}
void main(){
    int b[20], *p,i,size;
    p=b;
    printf("\n Enter size of array:");
    scanf(" %d",&size);
    for(i=0;i<size;i++){
        printf("\n Enter element:");
        scanf(" %d",(p+i));
    }
    reverse(p,size-1,size-1);

}