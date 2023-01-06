// linked list using c
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void Print(struct Node *head){
    struct Node* temp = head;
    if(head == NULL){
        printf("List is empty");
    }
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void Insert(int x, struct Node **head){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    if(head != NULL){
        temp->next = *head;
    }
    else{
        temp->next = NULL;
    }
    *head = temp;
}
int main(){
    int n,x;
    struct Node *head = NULL;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter number: ");
        scanf("%d",&x);
        Insert(x,&head);
        Print(head);	
    }

}