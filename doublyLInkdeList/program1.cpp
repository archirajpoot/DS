#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next,*prev;
};
node *first ,*temp,*ttemp,*p;
void init(){
    first=temp=ttemp=NULL;
}
void create_first(int x){
    first=new node;
    first->data=x;
    first->next=NULL;
    first->prev=NULL;
}
void add_node(int x){
   temp=first;
   while(temp->next!=NULL){
    temp=temp->next;
   }
   ttemp=new node;
   ttemp->data=x;
   ttemp->next=NULL;
   ttemp->prev=temp;
   temp->next=ttemp;
}
void display(){
    temp=first;
    while(temp!=NULL){
        cout<<temp->data;
        cout<<endl;
        temp=temp->next;
    }
}
void add_before_first(int x){
    temp=new node;
    temp->data=x;
    temp->next=first;
    temp->prev=NULL;   
    first->prev=temp;
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
    ttemp->next=p;
    p->prev=ttemp;
    p->next=temp;
    temp->prev=p;
}
int main(){
     init();
     create_first(1);
     add_node(2);
     add_before_first(0);
     add_before(2,22);
     display();
     return 0;
}