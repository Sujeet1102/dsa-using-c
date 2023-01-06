#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void Print(struct Node **head){
    struct Node* temp = *head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void Insert(int x,int n,struct Node **head){
    struct Node *temp1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp2 = *head;
    temp1->data = x;
    if(n == 1){
        temp1->next = *head;
        *head = temp1;
    }
    else{
        for(int i = 0; i < n-2; i++){
            temp2 = temp2->next;
        }
        temp1->next=temp2->next;
        temp2->next=temp1;
    }

}
int main(){
    struct Node *head;
    head = NULL;
    Insert(3,1,&head);
    Insert(5,2,&head);
    Insert(7,1,&head);
    Insert(6,3,&head);
    Print(&head);
}