#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

Node *head = NULL;

void insertion(int x){
    Node *newNode = new Node;
    newNode ->data = x;
    newNode->left = newNode->right = NULL;
    
    Node *traverse = new Node;
    
 
    if(head == NULL){
        head = newNode;
    }else{
        traverse = head;

        AB:
        if(newNode->data < traverse->data){
            if(traverse->left == NULL){
                traverse->left = newNode;
                traverse = newNode;
                
               
            }else{
                traverse = traverse->left;
                goto AB;
            }
        }else if(newNode->data > traverse->data){
            if(traverse->right == NULL){
                traverse->right = newNode;
                traverse = newNode;
                
            }else{
                traverse = traverse->right;
                goto AB;
            }
        }
       
    }


}

void inorderWithStack(){
    Node *newNode = new Node;
    newNode = head;
    cout<<newNode->data;

}

void preorderTraversal(Node *temp){
    if(temp == NULL){
        return;
    }

    cout<<temp->data;
    preorderTraversal(temp->left);
    preorderTraversal(temp->right);
}

void postorderTraversal(Node *temp){
    if(temp == NULL){
        return;
    }
    postorderTraversal(temp->left);
    postorderTraversal(temp->right);
    cout<<temp->data;
}

void inorderTraversal(Node *temp){
    if(temp == NULL){
        return;
    }
    inorderTraversal(temp->left);
    cout<<temp->data;
    inorderTraversal(temp->right);
}
int main(){
    
    insertion(7);
    insertion(4);
    insertion(8);
    insertion(3);
    insertion(5);

    preorderTraversal(head);
    cout<<endl;
    postorderTraversal(head);
    cout<<endl;
    inorderTraversal(head);


    inorderWithStack();

    return 0;
}