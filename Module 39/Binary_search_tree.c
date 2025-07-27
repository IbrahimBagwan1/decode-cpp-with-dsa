#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *left;
  struct node *right;
};
typedef struct node *NODE;

NODE createBST(NODE root, int item){
  NODE temp, cur, prev;
  temp=(NODE)malloc(sizeof(struct node));
  temp->data=item;
  temp->left=NULL;
  temp->right=NULL;
  if(root==NULL){
    return temp;
  }
  prev=NULL;
  cur=root;
  while(cur!=NULL){
    prev=cur;
    if(item<cur->data){
      cur=cur->left;
    }else{ 
      cur=cur->right;
    }
  }
  if(prev->data>item)
    prev->left=temp;
  else{
    prev->right=temp;
  }
  return root;
}

NODE inordersuccessor(NODE root){
  NODE cur=root;
  while(cur->left!=NULL){
    cur=cur->left;
  }
  return cur;
}

NODE deletenode(NODE root, int key){
  NODE temp;
  if(root==NULL){
    return root;
  }
  if(key<root->data){
    root->left=deletenode(root->left,key);
  }else if(key>root->data){
    root->right=deletenode(root->right,key);
  }else{
    if(root->left==NULL){
      temp=root->right;
      free(root);
      return temp;
    }
    if(root->right==NULL){
      temp=root->left;
      free(root);
      return temp;
    }
    temp = inordersuccessor(root->right);
    root->data=temp->data;
    root->right=deletenode(root->right,temp->data);
  }
  return root;
}

void preorder(NODE root){
  if(root!=NULL){
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
  }
}

void inorder(NODE root){
  if(root!=NULL){
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
  }
}


void postorder(NODE root){
  if(root!=NULL){
    postorder(root->left);
    postorder(root->right);
    printf("%d\t",root->data);
  }
}


int main(){
  NODE root=NULL;
  int ch,key,item;
  for(;;){
    printf("\n1. Insert: ");
    printf("\n2. Delete: ");
    printf("\n3. Preorder: ");
    printf("\n4. Inorder: ");
    printf("\n5. Postorder: ");
    printf("\n6. Exit: ");
    printf("\nEnter the choice: ");
    scanf("%d",&ch);

    switch(ch){
      case 1:
        printf("\nEnter the Number to be inserted: ");
        scanf("%d",&item);
        root=createBST(root,item);
        break;
      case 2:
        printf("Enter the Node to be deleted: ");
        scanf("%d",&key);
        root=deletenode(root,key);
        break;
      case 3:
        printf("\nPreorder...\n");
        preorder(root);
        break;
      case 4:
        printf("\nInorder...\n");
        inorder(root);
        break;
      case 5:
        printf("\nPostorder...\n");
        postorder(root);
        break;
      case 6:
        return 0;
        break;
      default:
        printf("Invalid Input, Enter the choice (1 to 4): ");
        break;
    }
  }
  return 0;
}