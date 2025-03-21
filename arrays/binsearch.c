//only applyes in sorted arrays
#include<stdio.h>
int binsearch(int *arr,int len,int number){
    if(*arr==number){
        return 0;
    }
    if(*(arr+len-1)==number){
        return len-1;
    }
    
    int st=0;
    int en=len-1;
    int md=(en-st)/2;
    while (*(arr+md)!=number){
        // if(*(arr+md)==number){
        //     return md;
        // }
        if(number>*(arr+md)){
            st=md;

        }else{
            en=md;
        }
      md=st+((en-st)/2);
        
    }
    
    
    return md;
}
int main(){
    int arr[10]={1,2,3,4,5};
    printf("%d",binsearch(arr,5,1));
    printf("%d",binsearch(arr,5,2));
    printf("%d",binsearch(arr,5,3));
    printf("%d",binsearch(arr,5,4));
    printf("%d",binsearch(arr,5,9));  // not works with this so this is not a good code
    // best practice for binary search is in 1t.c
    
    return 0;
}