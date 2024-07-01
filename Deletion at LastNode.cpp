#include<bits/stdc++.h>
using namespace std;
struct node
{
      int data;
      struct node *next;
};
void Traverse(struct node *head)
{
      while(head!=NULL)
      {
            cout<<"Element:"<<head->data<<endl;
            head=head->next;
      }
}
struct node *DeletionatLastNode(struct node *head)
{
      struct node *ptr=NULL;
      ptr=(struct node *)malloc(sizeof(struct node));
      ptr=head;
      while(ptr->next->next!=NULL)
      {
            ptr=ptr->next;
      }
      ptr->next=NULL;
      return head;
};
int main()
{
      struct node *head=NULL,*first=NULL,*second=NULL,*third=NULL;
      head=(struct node *)malloc(sizeof(struct node));
      first=(struct node *)malloc(sizeof(struct node));
      second=(struct node *)malloc(sizeof(struct node));
      third=(struct node *)malloc(sizeof(struct node));
      head->data=10;
      head->next=first;
      second->data=30;
      second->next=third;
      first->data=20;
      first->next=second;
      third->data=40;
      third->next=NULL;
      cout<<"Traverse Node left to right:"<<endl;
      Traverse(head);
      cout<<"Deletion After Last Node:"<<endl;
      head=DeletionatLastNode(head);
      Traverse(head);
}


