#include <iostream>
using namespace std;

  class Node{
      public :
    int data;
    Node*next;
   };

  class LinkedList{
      public :
    Node*head,*tail;
    LinkedList(){
    head=NULL;
    tail=NULL;
   }

  void insertNodeAtFront(int Value){
    Node*newNode=new Node;
    newNode->data=Value;
    newNode->next=NULL;
     if(head==NULL){
       head=newNode;
       tail=newNode;
     }
       else{
        newNode->next=head;
        head=newNode;
      }
    }

  void insertNodeAtEnd(int Value){
    Node*newNode=new Node;
    newNode->data=Value;
    newNode->next=NULL;
     if(head==NULL){
       head=newNode;
       tail=head;
     }
       else{
        tail->next=newNode;
        tail=tail->next;
       }
    }

  void insertATPosition(int pos, int value){
      Node*prev=new Node;
      Node*current=new Node;
      current=head;
      Node*newNode=new Node;
      newNode->data=value;
      newNode->next=NULL;
       if(pos<1)
        cout<<"Position can't be less than one";
         else if(pos==1){
        newNode->next=head;
        head=newNode;
       }
       else{
        for(int i=1;i<pos;i++){
            prev=current;
            current=current->next;
             if(current==NULL){
                cout<<"Invalid position";
                return;
             }
        }
        prev->next=newNode;
        newNode->next=current;
       }
  }

   void search(int value){
     Node*current=head;
       while(current!=NULL){
         if(current->data==value){
            cout<<"Element "<<value<<" is found";
            return;
         }
         current=current->next;
       }
        cout<<"Element "<<value<<" not found in the list";
   }

    void displaylist(){
      Node*current=head;
       while(current!=NULL){
         cout<<current->data<<" ";
         current=current->next;
       }
    }

void deleteNode(int value){
     bool flag =false;
     Node*current=new Node;
     Node*previous=new Node;
     previous=head;
     current=head;
     while(current!=NULL){
        if(current->data==value && current==head){
            head=current->next;
            free(current);
            flag=true;
            break; }
        else if(current->data==value){
            previous->next=current->next;
            if(current==tail){
                tail=previous;}
                free(current);
                flag=true;
                break;
        }else {
        previous=current;
        current=current->next;
     }
    }
     if(flag==true)
        cout<<"Element Deleted"<<endl;
     else
        cout<<"Element not found"<<endl;
}


   };//class LinkedList ends here

int main()
{
    LinkedList lst;
    cout<<"Before Insertion"<<endl;
    lst.displaylist();
    lst.insertNodeAtFront(40);
    lst.insertNodeAtFront(30);
    lst.insertNodeAtFront(20);
    lst.insertNodeAtFront(10);
    cout<<"After Insertion"<<endl;
    lst.displaylist();
    cout<<endl;
    lst.insertNodeAtEnd(50);
    lst.insertNodeAtEnd(60);
    lst.insertNodeAtEnd(70);
    lst.insertNodeAtEnd(80);
    lst.displaylist();
    cout<<endl;
    lst.search(70);
    cout<<endl;
    lst.search(2);
    cout<<endl;
    lst.deleteNode(40);
    lst.deleteNode(20);
    lst.deleteNode(30);
    lst.deleteNode(60);
    lst.deleteNode(70);
    lst.deleteNode(50);
    cout<<endl;
    lst.deleteNode(4);
    cout<<endl;
    lst.displaylist();
    return 0;
}
