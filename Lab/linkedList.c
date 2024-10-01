#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
} *start = NULL;

void addBeg() {
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &temp->data);

    if (start == NULL)
        temp->next=NULL;
    else
        temp->next=start;
    start=temp;
}

void addAfter() {
    struct node *temp, *q;
    int pos, i;
    if (start == NULL) {
        printf("Node is empty");
        return;
    }
    printf("Add after a Node = ");
    scanf("%d", &pos);
    q=start;
    for (i = 1; i < pos; i++) {
        q=q->next;
        if (q==NULL) {
            printf("Position is out of range");
            return;
        }
    }
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->next = q->next;
    q->next = temp;
}

void addEnd() {
    struct node *temp, *q;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (start == NULL)
        start = temp;
    else {
        q = start;
        while(q->next != NULL) {
            q = q->next;
        }
        q->next = temp;
    }
}

void delete() {
    struct node *q, *temp;
    int pos, i;
    if (start == NULL) {
        printf("Node is empty");
        return;
    }
    printf("Enter a Node to delete: ");
    scanf("%d", &pos);
    q=start;
    if (pos == 1) {
        temp = start;
        start = start->next;
        free(temp);
        return;
    }
    for (i = 1; i < pos-1; i++) {
        q=q->next;
        if (q==NULL) {
            printf("Node not exist");
            return;
        }
    }
    temp = q->next;
    q->next = temp->next;
    free(temp);
}

void display() {
    struct node *q;
    q = start;
    while(q != NULL) {
        printf("%d ", q->data);
        q = q->next;
    }
    printf("\n");
}

int main() {
    int choice;
    while(1) {
        printf("1. Add at beginning\n");
        printf("2. Add after a Node\n");
        printf("3. Add at end\n");
        printf("4. Delete  a Node\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                addBeg();
                break;
            case 2:
                addAfter();
                break;
            case 3:
                addEnd();
                break;
            case 4:
                delete();
                break;
            case 5:
                display();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}

