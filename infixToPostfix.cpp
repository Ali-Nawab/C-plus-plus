#include<iostream>
#include<math.h>
using namespace std;

struct Node{
    char data;
    struct Node *previous;
};


Node *top = NULL;

void push(char x){
    Node *newNode = new Node;
    if(top == NULL){
        newNode->data = x;
        newNode -> previous = top;
        top = newNode;
    }else{
        newNode ->data = x;
        newNode ->previous = top;
        top = newNode;
    }
}

bool empty(){
    if(top == NULL){
       
        return true;
    }
    return false;
}

void pop(){
    if(empty()){
        cout<<"Stack is empty.";
        exit(1);
    }else{
    top = top ->previous;
    }
}

char peek(){
    if(empty()){
        cout<<"No more items left.";
        exit(1);
    }else{
    return top->data;
    }
}

void printList(){
   Node *newNode = new Node;
   newNode = top;
   if(empty()){
       cout<<"Empty.";
   }else{
       while(newNode != NULL){
           cout<<newNode->data<<" ";
           newNode = newNode ->previous;
       }
   }
    
}


int precedenceFunction(char x){
    switch (x)
    {
    case '(':
        return 5;
        break;
    case '$':
        return 4;
        break;
    case '/':
    case '*':
        return 3;
        break;
    case '+':
        return 2;
        break;
    case '-':
        return 1;
        break;
    default:
        return 0;
        break;
    }
    
}

string InfixToPostfix(string s){
    string postfix;
    for(int i = 0; i<s.length(); i++){
        Node *newNode = new Node;
        
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            postfix += s[i];
        }else if(s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*' || s[i] == '(' || s[i] == '$'){
            if(empty()){
                push(s[i]);
            }else{
                while(precedenceFunction(s[i]) < precedenceFunction(peek())){
                    if(precedenceFunction(s[i]) == 1 && precedenceFunction(peek()) == 5 ){
                        goto AB;
                    }
                    if(precedenceFunction(s[i]) == 2 && precedenceFunction(peek()) == 5){
                        goto AB;
                    }
                    if(precedenceFunction(s[i]) == 3 && precedenceFunction(peek()) == 5){
                        goto AB;
                    }
                    if(precedenceFunction(s[i]) == 4 && precedenceFunction(peek()) == 5){
                        goto AB;
                    }
                  
                    postfix += peek();
                  
                    pop();
                }
                AB:
    
                push(s[i]);
            }
            
        }else if(s[i] == ')'){
            while(!empty() && top->data != '('){
                postfix += peek();
              
                pop();
            }
            pop();
        }
       cout<<s[i]<<"\t\t\t\t\t\t\t\t";
       printList();
       cout<<"\t\t\t\t\t\t"<<postfix;
       cout<<endl;
    }
    
    while(!empty()){
        postfix += peek();
        cout<<"\t\t\t\t\t\t\t\t"<<top->data<<"\t\t\t\t\t\t"<<postfix<<endl;
        pop();
        
    }
    
    return postfix;
}

int postfixEvaluation(string s){
    for(int i = 0; i<s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            push(s[i]-'0');
        }else{
            int num2 = peek();
            pop();
            int num1 = peek();
            pop();

            switch (s[i])
            {
            case '+':
                push(num1+num2);
                break;
            case '-':
                push(num1-num2);
                break;
            case '*':
                push(num1*num2);
                break;
            case '/':
                push(num1/num2);
                break;
            case '^':
                push(pow(num1,num2));
                break;
            default:
                cout<<"You enter the wrong number.";
                break;
            }
        }
    }

    return peek();


}


int main(){
    
    cout<<InfixToPostfix("(a-b/c)*(a/k-l)");
    cout<<"\t\t\t\t\t\t\t";
    printList();
    
   
    return 0;
}

