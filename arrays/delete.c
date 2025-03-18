#include<stdio.h>
void delete(int *arr,int len,int index){
for(int i=index;i<len;i++){
    *(arr+i)=*(arr+i+1);
}
}
int main(){
int arr[10]={1,2,3,4,5};
delete(arr,5,2);
for (int i = 0; i < 5; i++)
{
    printf("%d",arr[i]);
}

}