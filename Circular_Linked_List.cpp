#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node* next;
	node(int val)
	{
		data=val;
		next=NULL;
	}
};
void insertAtHead(node* &head,int val)
{
	node* n= new node(val);
	if(head==NULL)
	{
		head=n;
		head->next=head;
		return;
	}
	else
	{
		node* temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=n;
		n->next=head;
		head=n;
	}
}
void deleteNode(node* &head, int key)
{
	node* temp=head;
	node* prev=NULL;
	node* temp1=head;
	while(temp1->next!=NULL)
	{
		
	   if(key==temp1->data)
	   {
		   if(temp1==head)
		   {
			   while(temp->next!=head)
			   {
				   temp=temp->next;
			    }
			    temp->next=head->next;
			    head=head->next;
			    return;
		    }
		    else
		    {
		    	prev->next=temp1->next;
		    	return;
			}
	    }
	    prev=temp1;
	    temp1=temp1->next;
    }
    prev->next=temp1->next;
}
void dequeue(node* head)
{
	node* temp=head->next;
	deleteNode(head,head->data);
	head=temp;
	
}

void insertAtTail(node* &head,int val)
{
	node* temp=head;
	node* n=new node(val);
	if(head==NULL)
	{
		insertAtHead(head,val);
		return;
	}
	else
	{
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=n;
		n->next=head;
	}
}
void display(node* &head)
{
	node* temp=head;
	do
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	while(temp!=head);
}
int sortInsert(node* head,int js)
{
	node* a=new node(js);
	node* temp=head;
	node* prev=NULL;
	node* t=head;
	while(t->next!=head)
	{
		t=t->next;
	}
	if(js<head->data)
	{
		return 5;
		a->next=head;
		head=a;
	}
	else if(js>t->data)
	{
		t->next=a;
		a->next=head;
	}
	else
	{
		while(temp->data<=js)
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=a;
		a->next=temp;
		
	}

}
bool circularNot(node* head)
{
	node* temp=head->next;
	while(temp!=NULL && temp!=head)
	{
		temp=temp->next;
		
	}
	return (temp==head);
}
/*void divideHalf(node* head,node* head1,node* head2)
{
	node* temp=head;//1
	int count=1;//1
	while(temp->next!=head)
	{
		count++;
		temp=temp->next;
	}
	//4
	node* temp1=head;//1
	int count1=1;//1
	int c=(count+1)/2;//2
	do{
		if(count1<=c)
		{
			insertAtTail(head1,temp1->data);
			temp1=temp1->next;//2
			count1++;//2
		}
		else
		{
			insertAtTail(head2,temp1->data);
			temp1=temp1->next;
			count1++;
		}
		
	}
	while(temp1!=head);
}*/
int main()
{
	node* head=NULL;
	//node* head1=NULL;
	//node* head2=NULL;
	//insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	//divideHalf(head,head1,head2);

	//insertAtTail(head,4);
	cout<<sortInsert(head,1);
	display(head);
	//cout<<circularNot(head);
	//deleteNode(head,3);
	//display(head);

	
}
