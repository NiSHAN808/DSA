//gcc traversal.c in terminal to compile and enter than a tab to run a.exc

//traversal means traving trough every element in array

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void put(int *arr,int len){
for(int i=0;i<len;i++){
    *(arr+i)=i*10;
}
}

 int main(){
//     static array
int a[10]={1,2,3,4,5};
int length=5;
for(int i=0;i<length;i++){
    printf("%d ",a[i]);
}

// address is send when passing to function a is "&a[0]"   
put(a,5);
for(int i=0;i<5;i++){
printf("\n%d ",a[i]);
}


//    dynamic array
int *arr;
arr=(int*)malloc(10*sizeof(int));
put(arr,8);
for(int i=0;i<8;i++){
printf("%d ",*(arr+i));
}
free(arr);
return 0;
}


