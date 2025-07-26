#include<iostream>
using namespace std;

class Node {
  public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
      this->val = val;
      this->left = NULL;
      this->right = NULL;
    }
    
  };
  int count = 0;  
  void print_level(Node* root, int level, int req){
    if (root != nullptr) {
      if(level==req){
        cout<< root->val<< " ";
        req++;
      }
      print_level(root->left, level+1, req);         // Traverse left
      print_level(root->right, level+1, req);        // Traverse right
    }
  }


int main(){
  Node* a = new Node(1);
  Node* b = new Node(2);
  Node* c = new Node(3);
  Node* d = new Node(4);
  Node* e = new Node(5);
  Node* f = new Node(6);
  Node* g = new Node(7);

  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  c->left = f;
  c->right = g;

  print_level(a,1, 1);  

  return 0;
}