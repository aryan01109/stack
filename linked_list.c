#include<stdio.h>

struct node{
    int data;
    struct node*list;
    
};

int main (){
    int choise;

    do{
        printf("---Index List---\n");
        printf("1 for Push\n");
        printf("2 for display\n");
        printf("3 for pop\n");
        printf("4 for top\n");
        printf("5 for Exit\n");
        printf("Enter your Choise : ");
        scanf("%d",&choise);

        switch (choise){


        case 1:push();
            break;
        case 2:push();
            break;
        case 3:push();
            break;
        case 4:push();
            break;
        case 5:push();
            break;                
        
        default: printf("invalide your choise !!!");
        }

    }while(choise != 0);
    return 0;
}