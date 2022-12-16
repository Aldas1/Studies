#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct Node{
    struct Node *next;
    int data;
    struct Node *prev;
} Node;

Node* head;

Node* createNode(int x){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data=x;
    newNode->prev=NULL;
    newNode->next=NULL;

    return newNode;
}

//Ideda elementa i sarasa pradzioje
void InsertAtHead(int x) {
	struct Node* newNode = createNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head; 
	head = newNode;
}

//Ideda elementa i sarasa pabaigoje
void insertLast(int x){
    Node* temp = head;
    Node* newNode = createNode(x);
    if(head == NULL){
        head= newNode;
        return;
    }
    while(temp->next!=NULL) temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

void print(){
    Node* temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

//Apskaiciuoja saraso dydi
int calculateSize(Node* node){
    int size=0;

    while(node!=NULL){
        node = node->next;
        size++;
    }
    return size;
}

//Prideda elementa i nurodyta pozicija
void insertAfter(int pos,int data){
    int size=calculateSize(head);
    if(pos<0||size<pos){
        printf("Negalima iterpti i duota pozicija\n");
    }
    else if(pos==0){
        InsertAtHead(data);
    }
    else{
        Node* temp = head;
        Node* newNode = createNode(data);

        while(--pos){
            temp=temp->next;
        }

        newNode->next=temp->next;
        newNode->prev=temp;

        temp->next = newNode;
    }
}

char menu(){ 
    int num;
    for(;;){
        printf("Pasirinkite programos veiksma:\n");
        printf("0. Sukurti sarasa\n");
        printf("1. Atspausdinti sarasa\n");
        printf("2. Iterpti nauja elementa\n");
        printf("3. Uzdaryti programa\n");
        printf("Pasirinkimas: ");

        //Tikrinama ar ivedamas skaicius
        while(scanf("%d",&num)!=1||getchar()!='\n'){
        printf("Pasirinkimas: ");
        while(getchar()!='\n');
    }
        if(num==0||num==1||num==2||num==3) break;
    }

    return num;
}

//surusiuoja saraso elementus
void sort(Node* head, int len){
    int temp;
    struct Node* tempNode = head;

   if (len == 1){
      return;
   }
   for (int i=0; i<len-1; i++){
      if (tempNode->data >tempNode->next->data){
        temp=tempNode->data;
         tempNode->data=tempNode->next->data;
         tempNode->next->data=temp;
      }
        tempNode=tempNode->next;
   }
   len=len-1;
   sort(head, len);
}