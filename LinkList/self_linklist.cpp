
#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;

};
node* head=NULL;

class linklist{

    public:
    void create_node(int);
    void print();
    void insert(int,node *);
	void search(int);
	void deletenode(int);
	void reverse();
	void sort();
};

void linklist::create_node(int value){
    node *NewNode=new node();

    NewNode->data=value;
    NewNode->next=NULL;

   if(head==NULL){
     head=NewNode;
   }


}
void linklist::insert(int value,node *head_ref){
    node *newNode=new node();
    node *temp=head_ref;
    while(temp->next!=NULL){
       temp=temp->next;
    }
    newNode->data=value;
    temp->next=newNode;
    newNode->next=NULL;
//cout<<newNode->data;
//return;
}

void linklist::print(){
    node *temp;
    temp=head;
    while(temp!=NULL){

        std::cout << temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NULL";
    cout<<endl;
}

void linklist::search(int data){
	node *temp;
	temp=head;
	while(temp->next!=NULL){
		if(temp->data==data){
			cout<<"\nElement Found "<<temp->data;
			
		}
		temp=temp->next;
	}
	
}
/*Can delete element at any position in between and last except for first because for that we need to adjust head ptr*/
void linklist::deletenode(int value){
    node *temp;
    node *del;
	temp=head;
	while(temp->next!=NULL){
		if(temp->next->data==value){
		    //del=temp;
		    //temp->data=temp->next->data;
		    temp->next=temp->next->next;
		    //temp->next=NULL;
		   // free(del);
		    //delete(del);
			cout<<"\nElement Deleted\n ";
			break;
		}
	    	temp=temp->next;
	}
}


void linklist::reverse(){
	node *prev;
	node *curr;
	node * temp;
	prev=NULL;
	curr=head;
	while(curr!=NULL){
	    temp=curr->next;
	    curr->next=prev;
	    prev=curr;
	    curr=temp;
	    
	}
	head=prev;
	
}

void linklist::sort(){
    node *curr;
    node *nextnode;
    int temp;
    curr=head;
    
    while(curr!=NULL){
    nextnode=curr->next;    
    while(nextnode!=NULL){
    //curr=head;
   // cout<<nextnode->data;
      if(curr->data>nextnode->data){
            temp=nextnode->data;
            nextnode->data=curr->data;
            curr->data=temp;
            
        }
    // curr->next;
     nextnode=nextnode->next;
        
    }
curr=curr->next;
    }
    
    
    
}


int main()
{
    linklist obj;

	/*-----create---------*/
 obj.create_node(10);
  
  /*--------insert--------*/
  obj.insert(20,head);
  obj.insert(5,head);
  obj.insert(30,head);
  obj.insert(1,head);
  obj.insert(2,head);
  //obj.print();
  
  /*---Search-----*/
  obj.search(10);
 
 // obj.deletenode(20);
//obj.print();

/*---Delete--------*/
  obj.deletenode(10);
  obj.print();
 
 /*----sort----*/
  obj.sort();
  obj.print();
 
 /*-----reverse----*/
 obj.reverse();
 obj.print();

    return 0;
}


