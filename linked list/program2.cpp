#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *first,*temp,*ttemp,*p;
void init(){
    first=temp=ttemp=p=NULL;
}
void create_first(int n){
   first=new node;
   first->next=NULL;
   first->data=n;
  
}
void add_before_first(int x){
    temp=new node;
    temp->data=x;
    temp->next=first;
    first=temp;
}
void add_before(int x,int y){
    temp=first;
    while(temp->data!=x){
        ttemp=temp;
        temp=temp->next;
    }
    p=new node;
    p->data=y;
    p->next=temp;
    ttemp->next=p;
}
void add_node(int x){
    temp=first;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    ttemp=new node;
    ttemp->data=x;
    ttemp->next=NULL;
    temp->next=ttemp;
}
void add_after(int x,int y){
    temp=first;
    while(temp->data!=x){
        temp=temp->next;
        ttemp=temp->next;
    }
    p=new node;
    p->data=y;
    p->next=ttemp;
    temp->next=p;
}
void add_before_last(int x){
    temp=first;
    while(temp->next!=NULL){
      ttemp=temp;
      temp=temp->next;
    }
    p=new node;
    p->data=x;
    p->next=temp;
    ttemp->next=p;
}
void display(){
    temp=first;
    while(temp!=NULL){
        cout<<temp->data;
        cout<<endl;
        temp=temp->next;
    }
}
int main(){
 init();
create_first(1);
add_node(2);
add_node(3);
add_node(4);
add_after(3,7);
add_before(4,5);
add_before_first(0);
add_before_last(1);
display();
}