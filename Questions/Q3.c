#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;  // 双向链表define
};

// new node here
struct Node* create_node(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));//remember to free this
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

//
void insert_head(struct Node** head, int x) {
    struct Node* new_node = create_node(x);
    new_node->next = *head;
    *head = new_node;
}


void insert_tail(struct Node** head, int x) {
    struct Node* new_node = create_node(x);
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    struct Node* cur = *head;
    while (cur->next) {
        cur = cur->next;
    }
    cur->next = new_node;
}


void insert_at(struct Node** head, int p, int x) {
    struct Node* new_node = create_node(x);
    if (p == 1) {
        new_node->next = *head;
        *head = new_node;
        return;
    }
    struct Node* cur = *head;
    for (int i = 1; i < p - 1 && cur; i++) {
        cur = cur->next;
    }
    if (cur) {
        new_node->next = cur->next;
        cur->next = new_node;
    }
}


void delete_at(struct Node** head, int p) {
    if (*head == NULL) return;
    struct Node* to_delete;
    if (p == 1) {
        to_delete = *head;
        *head = (*head)->next;
        free(to_delete);
        return;
    }
    struct Node* cur = *head;
    for (int i = 1; i < p - 1 && cur->next; i++) {
        cur = cur->next;
    }
    if (cur->next) {
        to_delete = cur->next;
        cur->next = to_delete->next;
        free(to_delete);
    }
}

void print_list(struct Node* head) {
    if (head == NULL) {
        printf("Empty\n");
        return;
    }
    struct Node* cur = head;
    while (cur) {
        printf("%d", cur->data);
        if (cur->next) printf(" ");
        cur = cur->next;
    }
    printf("\n");
}


struct Node* make_doubly(struct Node* head) {
    if (head == NULL) return NULL;
    struct Node* cur = head;
    struct Node* prev = NULL;
    while (cur) {
        cur->prev = prev;
        prev = cur;
        cur = cur->next;
    }
    return prev; 
}

int main() {
    int n;
    scanf("%d", &n);

    struct Node* head = NULL;

    
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        insert_tail(&head, x);
    }

    int q;
    scanf("%d", &q);


    char op[10];
    for (int i = 0; i < q; i++) {
        scanf("%s", op);
        if (op[0] == 'H') {
            int x;
            scanf("%d", &x);
            insert_head(&head, x);
        } else if (op[0] == 'T') {
            int x;
            scanf("%d", &x);
            insert_tail(&head, x);
        } else if (op[0] == 'I') {
            int p, x;
            scanf("%d %d", &p, &x);
            insert_at(&head, p, x);
        } else if (op[0] == 'D') {
            int p;
            scanf("%d", &p);
            delete_at(&head, p);
        }
        
    }

   
    print_list(head);

 
    struct Node* tail = make_doubly(head);

   
    if (tail == NULL) {
        printf("Empty\n");
    } else {
        struct Node* cur = tail;
        while (cur) {
            printf("%d", cur->data);
            if (cur->prev) printf(" ");
            cur = cur->prev;
        }
        printf("\n");
    }

    return 0;
}