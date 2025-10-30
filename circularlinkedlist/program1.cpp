#include<bits/stdc++.h>
using namespace std;
struct SCLL{
    int data;
    SCLL *next;
};
SCLL *first,*temp,*ttemp,*p,*prevm,*prevn;
void init(){
    first=temp=ttemp=p=prevm=prevn=NULL;
}
void create_first(int n){
   first=new SCLL;
   first->next=first;
   first->data=n;
}
void add_node(int x){
    temp=first;
    while(temp->next!=first){
        temp=temp->next;
    }
    ttemp=new SCLL;
    ttemp->data=x;
    ttemp->next=first;
    temp->next=ttemp;
}