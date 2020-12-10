#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node* left;
    int data;
    struct node* right;
}*root;
void insert(int data){
    struct node* newNode = (struct node *)malloc(sizeof(struct node));
    if (root == NULL) {}
 }
int main(){
    root = (struct node*) malloc(sizeof(struct node));
    printf("Enter data to insert it on tree :"); 
    int data;
    scanf("%d",data);
    insert(data);
    return 0;
}