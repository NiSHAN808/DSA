#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* add;
};
 
void traversal( struct node* rec){

while (rec != NULL)
{
    printf("%d  ", rec->data);
    rec=rec->add;
}


}
 
struct node* createLinkList(int data){

    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->add=NULL;
}

void pushNode(struct node* rec, int index, int value){


struct node* addNode=(struct node*)malloc(sizeof(struct node));
addNode->data=value;
for(int i=0;i<index-1;i++){                  //remeber index -1

    rec=rec->add;
}

struct node* temp =rec->add;

rec->add=addNode;
addNode->add=temp;

}

int main(){

struct node* a=createLinkList(10);
struct node* b=createLinkList(20);
struct node* c=createLinkList(30);
struct node* d=createLinkList(40);
struct node* e=createLinkList(50);



a->add=b;
b->add=c;
c->add=d;
d->add=e;


traversal(a);
printf("\n");

pushNode(a,2,98);

traversal(a);

    return 0;
}