#include<iostream>
using namespace std;

class Stack{
    int max=100;
    int arr[100];
    int topindex;
    
    public : 
            Stack (){
                //empty stack
                topindex= -1;
            } 
            void push(int val){
                if(topindex>=max -1){
                    cout<<"stack overflow";
                }else{
                    topindex++;
                    arr[topindex]=val;
                    cout<<val<<"push into the stack";
                }
            }
            //pop operation
            void pop(){
                if(is_empty()){
                    cout<<"stack is empty";
                    return -1;

                }
            }
}

int main (){

    
    return 0;
}