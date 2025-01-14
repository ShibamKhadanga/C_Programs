#include<stdio.h>
#include<stdlib.h>

//************************************************Defining the Linked List
typedef struct Linked_list{
    int data;
    struct Linked_list *next;
}l;


//************************************************Function Declaration
l *insert_end(l *,int);
void display(l *);
l *insert_first(l *,int);
int search(l *,int);
int count(l *);
l *delation(l *,int);


//************************************************To choose what to do in the Linked List
//************************************************ Main Body of the program
void main(){
    l* h;
    h = NULL;
    int ch, n, k;
    do{
    printf("\nPRESS: 1 for Insert at END");
    printf("\nPRESS: 2 for Display");
    printf("\nPRESS: 3 for Insert at First");
    printf("\nPRESS: 4 for Search");
    printf("\nPRESS: 5 for Count");
    printf("\nPRESS: 6 for Delation");
    printf("\nPRESS: 7 for Exit");
    printf("\n\nChoose one of the above option: ");
    scanf("%d",&ch);

    //************************************************Function Call for Linked List
    switch(ch){
        case 1: printf("Enter the Value");
        scanf("%d",&n);
        h=insert_end(h,n);
        break;

        case 2: display(h);
        break;

        case 3: printf("Enter the Value");
        scanf("%d",&n);
        h=insert_first(h,n);
        break;

        case 4: printf("Enter the Value");
        scanf("%d",&n);
        k=search(h,n);
        if(k>0){
            printf("Element found %d",k);
        }
        else{
            printf("Element not found");
        }
        break;

        case 5: k=count(h);
        if(k>0){
            printf("Element are %d",k);
        }
        else{
            printf("Empty!!!");
        }
        break;

        case 6: printf("Enter the Value");
        scanf("%d",&n);
        h=delation(h,n);
        break;

        case 7: printf("Exit");
        break;
        Default: printf("Invalid Choise");
    }
    }while(ch!=7);

    
}


//************************************************ 1. To Insert a Node at the End
l *insert_end(l *h,int n){
    l *temp;
    temp = (l*)malloc(sizeof(l));
    if(temp==NULL){
        printf("Unsuccessful");
    }
    else{
        temp->data=n;
        temp->next=NULL;
    }
    if(h=NULL){
        h=temp;
        return h;
    }
    l *prev;
    while (prev->next != NULL){
        prev=prev->next;
    }
    prev->next = temp;
    return h;
}


//************************************************ 2. To Display The elements in the Linked List
void display(l *h){
    if(h==NULL){
        printf("List is Empty");
    }
    while(h!=NULL){
        printf("%d",h->data);
        h = h->next;
    }
}


//************************************************ 3. To Insert a Node at the First 
l *insert_first(l *h,int n){
    l *temp;
    temp=(l*)malloc(sizeof(l));
    if(temp==NULL){
        printf("Allocation Unsuccessful");
    }
    else{
        temp->data=n;
        temp->next=h;
        h=temp;
    }
    return h;
}


//************************************************ 4. To search element in the List
int search(l *h,int n){
    int x=0;
    if(h==NULL){
        printf("Node is Empty");
    }
    else{
        while(h!=NULL){
            x=x+1;
            if(h->data==n){
                return x;
                break;
            }
            h=h->next;
        }
    }
}


//************************************************ 5. To count no. of elements in the List
int count(l *h){
    int x=0;
    if(h==NULL){
        printf("List is Empty");
    }
    else{
        while(h!=NULL){
            x=x+1;
            h=h->next;
        }
        return x;
    }
}


//************************************************ 6. To Delete a element from the Linked List
l *delation(l *h,int n){
    l *a, *b, *c;
    a=h;
    b=h->next;
    while(b->data!=n && b!=NULL){
        a=b;
        b=b->next;
    }
    if(b!=NULL){
        c=b->next;
        a->next=c;
        printf("Deleted element is %d", b->data);
        free(b);
        return h;
    }
}