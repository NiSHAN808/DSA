#include<stdio.h>
#include<stdlib.h>
//in js function is available and spred operato "..." is availabe
void insert(int *arr,int len_of_arr,int index, int value){
for(int i=len_of_arr;i>index;i--){
*(arr+i)=*(arr+i-1);
}
*(arr+index)=value;
}
int main(){
    int ar[10]={1,2,3,4,5};
    insert(ar,5,2,9);
    for(int i=0;i<6;i++){
        printf("%d",ar[i]);
    }
}