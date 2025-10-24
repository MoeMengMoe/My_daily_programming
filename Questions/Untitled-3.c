#include<stdio.h>


typedef struct ListNode {
    int val;              
    struct ListNode *next; 
} ListNode;


ListNode *newListNode(int val) {
    ListNode *node;
    node = (ListNode *) malloc(sizeof(ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}