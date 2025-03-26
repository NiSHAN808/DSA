#include <stdio.h>
struct node
{
 int data; 
 struct node *add;
};

void treaversal(struct node *number){


struct node* current = number;
while (current != NULL) {
    printf("%d -> ", (*current).data);
    current = current->add;
}
printf("NULL\n");
}
// }
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
    e.add=NULL;

struct node* temp=&a;
   

 do{
        printf("%d\t",temp->data);
        temp=(temp->add);
    } while (temp != NULL);
   //we can NOT compare temp != NULL BUT  CAN COMPARE WITH ADDFRESS


    return 0;
}