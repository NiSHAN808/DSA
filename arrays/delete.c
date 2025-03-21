#include<stdio.h>
void delete(int *arr,int len,int index){
// for(int i=index;i<len;i++){
//     *(arr+i)=*(arr+i+1);
// }               this works but when there is maxed array 
//updatig form +1 index to current index cases error

for(int i=index;i<len-1;i++){
    *(arr+i)=*(arr+i+1);
}
*(arr+len-1)=0;
}
int main(){
int arr[5]={1,2,3,4,5};
delete(arr,5,2);
for (int i = 0; i < 5; i++)
{
    printf("%d",arr[i]);
}

}