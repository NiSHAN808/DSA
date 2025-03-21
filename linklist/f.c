#include <stdio.h>
struct node
{
 int data; 
 struct node *add;
};


int main(){
    
    struct node a;
    struct node b;
    struct node c;
    struct node d; struct node e;
    a.data=1;
    a.add=&b;

    b.data=2;
    b.add=&c;

    c.data=3;
    c.add=&d;

    d.data=4;
    d.add=&e; 
    
    e.data=5;
    e.add=0;
struct node temp=a;
   

 do{
        printf("%d\t",temp.data);
        temp=*(temp.add);
    } while (temp.add != 0);
    


    return 0;
}