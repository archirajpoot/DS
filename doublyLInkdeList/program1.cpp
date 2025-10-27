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
int main(){
     init();
     create_first(1);
     add_node(2);
     display();
     add_before_first(0);
     return 0;
}