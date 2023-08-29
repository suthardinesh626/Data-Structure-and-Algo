#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //construtor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //desterutor
    ~Node(){
        int  value = this -> data;
        if (this -> next!= NULL){
            delete next;
            this -> next = NULL;

        }
        //memory is free
        std::cout << " Memory is free with data!!!"<< value << endl;
    }
};

void HeadAtNode(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next= head;
    head = temp;
}

void print (Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        std::cout << temp-> data << " ";
        temp = temp ->next;
    }
    std::cout << endl;
}

void IndertAtPostition(Node* &head,int position , int d){
    Node* temp = head;
    int cnt =1;

    while (cnt < position -1){
        temp = temp -> next;
        cnt++;
    }

    Node* nodeToOnsert =  new Node(d);

    nodeToOnsert -> next = temp -> next;

    temp -> next = nodeToOnsert;
}

void deletionNode(int position, Node* &head){
    if (position==1){
        Node* temp = head;
        head = head -> next;
        // deletion
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr= head ;
        Node* prev = head;

        int cnt=1;
        while(cnt < position){
            prev = curr;
            curr = curr-> next;
            cnt++;

        }
        prev -> next= curr -> next;
        curr-> next= NULL;
        delete curr;

    }

}

int main(){

   Node* node1 = new Node(10);
//    std::cout << node1-> data << endl;
//    std::cout << node1-> next << endl;

    Node* head = node1;
    print(head);

    HeadAtNode(head, 12);

    print(head);

    IndertAtPostition(head, 2, 22);
    print (head);

    deletionNode(2, head);
    print(head);

    return 0;

}