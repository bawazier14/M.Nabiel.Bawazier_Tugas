#include <iostream>
// Muhammad nabiel bawazier//
//1121031058//
//INFORMATIKA B//
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* top = NULL;
void push(int val) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = val;
   newnode->next = top;
   top = newnode;
}
void pop() {
   if(top==NULL)
   cout<<"stak kosong"<<endl;
   else {
      cout<<"elemen yang telah di pop "<< top->data <<endl;
      top = top->next;
   }
}
void display() {
   struct Node* ptr;
   if(top==NULL)
   cout<<"stack kosong";
   else {
      ptr = top;
      cout<<"elemen stak : ";
      while (ptr != NULL) {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}
int main() {
   int ch, val;
   cout << "========================" << endl;
   cout << "========================" << endl;
   cout<<"1) buat stack baru"<<endl;
   cout<<"2) Tam ah elemen"<<endl;
   cout<<"3) Hapus elemen"<<endl;
   cout<<"4) Keluar"<<endl;
   cout << "========================" << endl;

   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
