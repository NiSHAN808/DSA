#include<stdio.h>
int linearSearch(int *arr,int number,int len){
   for(int i=0;i<len;i++){
    if(*(arr+i)==number){
        return i;
    }
   }
}
int main(){
    int arr[10]={2,6,9,8,1};
    printf("%d",linearSearch(arr,9,5));
}