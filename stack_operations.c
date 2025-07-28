#include<stdio.h>
#include<stdlib.h>
#define N 100

int tp= -1;
int n=100;
int stack[N];

void push(){
    int x;
    printf("enter the data : ");
    scanf("%d",&x);
    if(tp==N-1){
        printf("over-flow");
    }else{
        tp++;
        stack[tp]=x;
         printf("%d pushed onto the stack.\n", x);
    }
}
void pop(){
    int items;
    if(tp== -1){
        printf("data id under flow");
    }else{
        items=stack[tp];
        tp--;
        printf("items : %d",items);
    }
}

void top(){
    if(tp==-1){
        printf("stack is ematy");
    }else{
        printf("top elemnt is : %d",stack[tp]);
    }
}
void dispaly(){
    if(tp==-1){
        printf("stack is empty.\n");
    }else{
        printf("stack element (top to bottom) : ");
        for(int i=tp;i>=0;i--){
        printf("%d : ",stack[i]); 
    }printf("\n");

    }
    
}

int main(){
    int ch;
    int val;
    do{
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Top\n");
        printf("4. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: top();
            break;
            case 4: dispaly();
            break;
            default : printf("invalid choise (only 1 to 4)");

                
        }
    }while (ch!=0);
    return 0;
   
       
}