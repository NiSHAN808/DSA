#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;

};

void traversal(struct node *no){
while (no != NULL){
printf("%d->",no->data);
no=no->next;
}

}

struct node* createNewLinkList(int data){
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->next=NULL;

return temp;


}


int main(){
struct node head;
struct node b;
struct node c;
struct node d;

head.data=1;
head.next=&b;

b.data=2;
b.next=&c;

c.data=3;
c.next=&d;

d.data=4;
d.next=NULL;



struct node* slin=createNewLinkList(50);  
struct node x; slin->next=&x;
struct node* y;



x.data=40;
x.next=y;

y->data=30;
y->next=NULL;


traversal(&head);
printf("\n");
traversal(slin);


    return 0;
}