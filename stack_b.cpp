#include <stdexcept>
#include<iostream>
#include"stack_b.h"

using namespace std;


/* PART B */
/* Dynamic Stacks */

// class Stack_B {
// private:
//     int* stk; // The dynamic array
//     int size; // Number of elements in the stack
//     int capacity; // Capacity of the stack

// public: 
    // Constructor
    
    Stack_B::Stack_B(){
        size=0;
        capacity=1024;
        stk=new int[capacity];
    }

    // Destructor
    Stack_B::~Stack_B(){
        delete[] stk;
    }

    void Stack_B::push(int data){
        if (size==capacity){
            capacity = capacity*2;
            int *new_stk = new int[capacity];
            for (int i = 0; i < size; ++i)
            {
                new_stk[i]=stk[i];
            }
            delete[] stk;
            stk=new_stk;
        }
        stk[size++] = data;
    }

int Stack_B::pop(){
        if(size>0){
            
            if(size==((capacity/4)+1) && (capacity/4)>=1024){
                capacity=capacity/2;
                int *new_stk = new int[ capacity ];
                for (int i = 0; i < size; ++i){
                new_stk[i]=stk[i];
                // cout<<"hello"<<endl;
                }
            delete[] stk;
            stk=new_stk;
            }
            --size;
            return stk[size];
            
            
        }  
        else{
            throw runtime_error("Empty Stack");
        }  
    }

    // int Stack_B::pop_func(){
    //     if(size>0){
    //         size=(--size);
    //         return stk[size];
    //         if(size==(capacity/4)&& (capacity/4)>=1024){
    //             capacity=capacity/2;
    //             int *new_stk = new int[ capacity ];
    //             for (int i = 0; i < size; ++i){
    //             new_stk[i]=stk[i];
    //             // cout<<"hello"<<endl;
    //             }
    //         delete[] stk;
    //         stk=new_stk;
    //         }
            
            
    //     }  
    //     else{
    //         throw runtime_error("Empty Stack");
    //     }  
    // }

    int Stack_B::get_element_from_top(int idx){
        if (size>0 && size<capacity){
            return stk[size-1-idx];
        }
        else{
            throw runtime_error("Index out of range");
        }
    }

    int Stack_B::get_element_from_bottom(int idx){
        if(size==0){
            throw runtime_error("Empty Stack");
        }
        else if (idx < 0 || idx >= size){
            throw runtime_error ("Index out of range");
            }
         else if (size>0 && size<capacity){
            return stk[idx];
        }
        else{
            throw runtime_error("Index out of range");
        }
    }

    void Stack_B::print_stack(bool top_or_bottom){
         if (top_or_bottom==1){ 
            for (int i = size-1; i >=0 ; i--)
            {
              cout<<stk[i]<<endl;  
            }    
        }
        else{
            for (int i = 0; i < size; i++)
            {
              cout<<stk[i]<<endl;  
            }
            
        }
    }

    int Stack_B::add(){
        if(size>=2){
        int temp1=stk[size-1];
        int temp2=stk[size-2];
        --size;
        --size;
        int sum=temp1+temp2;
        push(sum);
            if(size==(capacity/4)&& (capacity/4)>=1024){
                capacity=capacity/2;
                int *new_stk = new int[ capacity ];
                for (int i = 0; i < size; ++i){
                new_stk[i]=stk[i];
                // cout<<"hello"<<endl;
                }
            delete[] stk;
            stk=new_stk;
            }

        return sum;
        }
        else{
            throw runtime_error ("Not enough arguments");
        }
    }

    
    int Stack_B::subtract(){
        if(size>=2){
            
        int temp1=stk[size-1];
        int temp2=stk[size-2];
        --size;
        --size;
        int subt=temp2-temp1;
        push(subt);
            if(size==(capacity/4)&& (capacity/4)>=1024){
                capacity=capacity/2;
                int *new_stk = new int[ capacity ];
                for (int i = 0; i < size; ++i){
                new_stk[i]=stk[i];
                // cout<<"hello"<<endl;
                }
            delete[] stk;
            stk=new_stk;
            }

        return subt;
        }
        else{
            throw runtime_error ("Not enough arguments");
        }
    }

    int Stack_B::multiply(){
        if(size>=2){
            
        int temp1=stk[size-1];
        int temp2=stk[size-2];
        --size;
        --size;
        
        int mult=(temp2)*(temp1);
        push(mult);
        if(size==(capacity/4)&& (capacity/4)>=1024){
                capacity=capacity/2;
                int *new_stk = new int[ capacity ];
                for (int i = 0; i < size; ++i){
                new_stk[i]=stk[i];
                // cout<<"hello"<<endl;
                }
            delete[] stk;
            stk=new_stk;
            }
        return mult;
        }
        else{
            throw runtime_error ("Not enough arguments");
        }
    }
    int Stack_B::divide(){
        if(size>=2){
        int temp1=stk[size-1];
        int temp2=stk[size-2];

        if(temp1*temp2<0){
            if((temp2%temp1)==0){
                --size;
                --size;  
                push(0);

                return 0;
            }     
            else{
            --size;
            --size; 
            int div=((temp2)/(temp1))-1;
            push(div);
            
            if(size==(capacity/4)&& (capacity/4)>=1024){
                capacity=capacity/2;
                int *new_stk = new int[ capacity ];
                for (int i = 0; i < size; ++i){
                new_stk[i]=stk[i];
                // cout<<"hello"<<endl;
                }
            delete[] stk;
            stk=new_stk;
            }
            return div;
        }}
        else{
        if(temp1==0){
            throw runtime_error("Divide by Zero Error");
            }
        else if(temp2==0){
            --size;
            --size;
            push(0);
            return 0;
        }
        else{
            --size;
            --size;
            int div=(temp2)/(temp1);
            push(div);
            if(size==(capacity/4)&& (capacity/4)>=1024){
                capacity=capacity/2;
                int *new_stk = new int[ capacity ];
                for (int i = 0; i < size; ++i){
                new_stk[i]=stk[i];
                // cout<<"hello"<<endl;
                }
            delete[] stk;
            stk=new_stk;
            }
            return div;
            }
        }
        }
        else{
            throw runtime_error ("Not enough arguments");
        }
    } 

    int* Stack_B::get_stack(){
        return stk ; 
    }

    int Stack_B::get_size(){
        return  size ;

            } // Get the size of the stack


