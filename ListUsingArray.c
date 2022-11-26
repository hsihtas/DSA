#include<stdio.h>

#define max_size 100
int arr[max_size];
int size=0;

void read(int siz){
    int i;
    for(i=0;i<siz;i++){
        scanf("%d",&arr[i]);
        arr[size++] = arr[i];
    }
}
void search(int val){
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==val){
            printf("\n%d at the position %d",val,i+1);
        }
    }
}
void update(int pos,int val){
    arr[pos] = val;
}
void lengthof(){
    printf("\nLength of List is %d",size);
}
void display(){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
void insertAtPos(int pos,int val){
    int i;
    for(i=size-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = val;
    size++;
    printf("inserted %d at position %d",val,pos);
}
void deleteFromPos(int pos){
    int i;
    int del = arr[pos];
    for(i=pos;i<size;i++){
        arr[i] = arr[i+1];
    }
    size--;
    printf("Delete %d at position %d",del,pos);
    
}
void insertAtBeginning(int val){
     int i;
    for(i=size-1;i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0]= val;
    size++;
    printf("inserted %d at position 0",val);
}
void deleteFromBeginning(){
   int i;
   int del = arr[0];
   for(i=0;i<size;i++){
       arr[i] = arr[i+1];
   }
   size--;
   printf("Delete %d at position 0",del);
}
void deleteAtEnd(){
   int i;
   int del = arr[size-1];
   for(i=size-1;i<size;i++){
        arr[i] = arr[i+1];
    }
   printf("Delete %d at position %d",del,size);
   size--;
}


void main(){
    
    int val,pos,choice,siz;
    
    while(1){
    printf("\n______________List Menu_______________\n");
    printf("1.Insert val at end\n");
    printf("2.Read the value\n");
    printf("3.Search the value\n");
    printf("4.Update the value\n");
    printf("5.Length of the List\n");
    printf("6.Insert val at specified pos\n");
    printf("7.Insert First value\n");
    printf("8.Delete First value\n");
    printf("9.Delete val at specified pos\n");
    printf("10.Delete End value\n");
    printf("11.Display\n");
    printf("12.Exit [->\n");
    printf("________________________________________\n");
    printf("\nEnter the choice: ");
    scanf("%d",&choice);
      
      
    switch(choice){
        case 1:printf("Enter the value: ");
               scanf("%d",&val);
               arr[size++] = val;
               break;
        case 2:if(size==max_size){
               printf("List is full");
               break;
               }
               printf("Enter the size: ");
               scanf("%d",&siz);
               read(siz);
               break;
        case 3:printf("Enter the value: ");
               scanf("%d",&val);
               search(val);
               break;
        case 4:printf("Enter the position: ");
               scanf("%d",&pos);
               printf("Enter the value: ");
               scanf("%d",&val);
               update(pos,val);
               break;
        case 5:lengthof();
               break;
        case 6:if(size==max_size){
               printf("List is full");
               break;
               }
               printf("Enter the position(position start at 0): ");
               scanf("%d",&pos);
               if(pos<0 || pos>=size){
                   printf("\nInvalid position\n");
                   break;
               }
               printf("Enter the value: ");
               scanf("%d",&val);
               insertAtPos(pos,val);
               break;
        case 7:if(size==max_size){
               printf("List is full");
               break;
               }
               else
               printf("Enter the value: ");
               scanf("%d",&val);
               insertAtBeginning(val);
               break;
        case 8:if(size==0){
               printf("\nList is empty\n");
               break;
               }
               else
               deleteFromBeginning();
               break;
        case 9:if(size==0){
               printf("\nList is empty\n");
               break;
               }
               printf("Enter the position: ");
               scanf("%d",&pos);
               if(pos<0 || pos>=size){
                   printf("\nInvalid position\n");
                   break;
               }
               else
               deleteFromPos(pos);
               break;
        case 10:if(size==0){
               printf("\nList is empty\n");
               break;
               }
               else
               deleteAtEnd();
               break;
        case 11: display();
                break;
        case 12: exit(0); 
     
        default:printf("Wrong choice");
                break;
    }  
}
}
