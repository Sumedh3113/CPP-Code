//Doubly Link list
#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    
};

Node *head=NULL;

class double_linklist{
    
    
    public:
    //void create(int );
    void insert(int );
    void deleteNode(int);
    void search();
    void reverse();
    void sort();
    void print();
         
};

void double_linklist::insert(int value){
    Node *newnode=new Node();
   Node *temp;
   temp=head;
   if(head==NULL){
    newnode->data = value;
    newnode->next=NULL;
    newnode->prev=NULL;
    
    head=newnode;
    
    return;
    
   }
   while(temp->next!=NULL){
       
       temp=temp->next;
   }
   
    newnode->data = value;
    newnode->prev=temp;
    newnode->next=NULL;
    temp->next =newnode;
    
    
}

void double_linklist::deleteNode(int value){
    Node *temp;
    temp=head;
    Node *rem;
    while(temp!=NULL){
       // cout<<temp->data;
     if(temp->data==value){
         rem=temp;
         if(temp->next != NULL){
		 temp->next->prev=temp->prev;
             
         }
		 temp->prev->next=temp->next;
		 
		 //delete(rem);
		// free(rem);
		 return;
	 }   
	 temp=temp->next;
    }
    
    
}

void double_linklist::print(){
    Node *temp;
    temp=head;
    cout<<"------Doubly_LinkList------\n";
    while(temp!=NULL){
        std::cout << temp->data<<"->";
        temp=temp->next;
        
    }
    cout<<"NULL";
    cout<<endl;
}

void double_linklist::reverse(){
    Node *last;
    Node *prev2;
    prev2=NULL;
    last=head;
    while(last!=NULL){
        
        last->prev=last->next;
        last->next=prev2;
        prev2=last;
        last=last->prev;
        
       
    }
    
    head=prev2;
}
void double_linklist::sort(){
    Node *curr;
    Node *prev2;
    int temp;
    prev2=head;
    
    while(prev2->next!=NULL){
    curr=prev2->next;
  //cout<<prev2->data<<"  ";
    while(curr!=NULL){
   //     cout<<curr->data;
        if(prev2->data>curr->data){
            temp=prev2->data;
            prev2->data=curr->data;
            curr->data=temp;
           // break;
        }
        
        curr=curr->next;
        
    }
    prev2=prev2->next;
    }
    
    
}



int main(){
    
double_linklist obj;
/*----Insert-------*/
obj.insert(2);
obj.insert(4);
obj.insert(1);
obj.insert(0);
obj.print();

/*------Delete Node--------*/

obj.deleteNode(4);
//obj.print();


//obj.deleteNode(1);
//obj.print();
/*---------reverse---------*/
obj.reverse();
obj.print();

/*-------sort-----------*/ 
obj.sort();
obj.print();    
 
    return 0;
}