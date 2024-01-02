#include <stdexcept>
#include<iostream>
#include"stack_a.h"

using namespace std;

// class Stack_A {
// private:
//     int size; // Number of elements in the stack
//     int stk[1024];
// public: 
//     //Constructor
    Stack_A::Stack_A(){
        size=0;
    }

    void Stack_A::push(int data) {
        if (size==1024){
            throw runtime_error("Stack Full");
        }
        else{
            stk[size++]=data;
        }
    }

    int Stack_A::pop(){
        if (size==0){
            throw runtime_error("Empty Stack") ;
        }
        else{
            --size;
            return stk[size]; 
        }
    }

    int Stack_A::get_element_from_top(int idx){
        if (size>0 && size<1024){
            return stk[size-1-idx];
        }
        else{
            throw runtime_error("Index out of range");
        }
    }

    int Stack_A::get_element_from_bottom(int idx){
        if (size>0 && size<1024){
            return stk[idx];
        }
        else{
            throw runtime_error("Index out of range");
        }
    }

    void Stack_A::print_stack(bool top_or_bottom){
        if(size==0){
            throw runtime_error ("Empty Stack");

        }
        else if (top_or_bottom==1){ 
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

    int Stack_A::add(){
        if(size>=2){
        int temp1=stk[size-1];
        int temp2=stk[size-2];
        --size;
        --size;
        int sum=temp1+temp2;
        push(sum);
        return sum;}
        else{
            throw runtime_error ("Not enough arguments");
            }
    }

    int Stack_A::subtract(){
        if(size>=2){
        int temp1=stk[size-1];
        int temp2=stk[size-2];
        --size;
        --size;
        int subt=temp2-temp1;
        push(subt);
        return subt;
        }
        else{
            throw runtime_error ("Not enough arguments");
        }
    }

    int Stack_A::multiply(){
        if(size>=2){
        int temp1=stk[size-1];
        int temp2=stk[size-2];
        --size;
        --size;
        int mult=(temp2)*(temp1);
        push(mult);
        return mult;
        }
        else{
            throw runtime_error ("Not enough arguments");
        }

    }

    int Stack_A::divide(){
        if(size>=2){
            int temp1=stk[size-1];
            int temp2=stk[size-2];
            
        
        if(temp1*temp2<0){
            if((temp2%temp1)==0){
                size--;
                size--;
                push(0);

                return 0;
            }
            else{
            --size;
            --size;
            int div=((temp2)/(temp1))-1;
            push(div);
            return div;
            }
        }
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
            return div;
            }
        }
        }
        else{
            throw runtime_error ("Not enough arguments");
        }
    } 

    int* Stack_A::get_stack(){return stk ; } // Get a pointer to the array

    int Stack_A::get_size(){ return size; } // Get the size of the stack





// };
// int main()
// {
//     Stack_A garima;
//     garima.push(-15);
//     garima.push(3);
//     cout<<garima.divide()<<endl;
//    return 0;
// }












// //     cout<<garima.add()<<endl;
//        garima.push(9);
//     garima.push(-6);
//     garima.push(9);
//     garima.push(13);
//     garima.push(4);
//     garima.push(-15);
//     garima.push(13);
//     garima.push(-5);
//     garima.push(-5);
//     garima.push(-15);
//     cout<<garima.add()<<endl;
//     cout<<garima.add()<<endl;
//     cout<<garima.add()<<endl;
//     cout<<garima.pop()<<endl;
//     cout<<garima.pop()<<endl;
//     cout<<garima.subtract()<<endl;
//     cout<<garima.subtract()<<endl;
//     garima.push(0);
//     garima.push(9);
//     garima.push(-1);
//     garima.push(5);
//     garima.push(-12);
//     garima.push(-4);
//     garima.push(0);
//     garima.push(15);
//     garima.push(9);
//     garima.push(0);
//     cout<<garima.multiply()<<endl;
//     cout<<garima.multiply()<<endl;
//     cout<<garima.multiply()<<endl;
//     cout<<garima.pop()<<endl;
//     cout<<garima.pop()<<endl;
//     cout<<garima.pop()<<endl;
//     cout<<garima.pop()<<endl;
//     cout<<garima.pop()<<endl;
//     cout<<garima.pop()<<endl;
//     cout<<garima.pop()<<endl;
//     cout<<garima.pop()<<endl;
//     cout<<garima.pop()<<endl;
//     cout<<garima.pop()<<endl;
//     cout<<garima.pop()<<endl;
    












//     // garima.push(-14);
//     // garima.push(-3);
//     // garima.push(-3);
//     // garima.push(5);
//     // garima.push(-11);
//     // garima.push(-13);
//     // garima.push(-1);
//     // garima.push(-15);
//     // garima.push(1);
//     // garima.push(14);
//     // garima.push(-8);
//     // garima.push(-15);
//     // garima.push(-13);
//     // garima.push(-10);
//     // garima.push(14);
//     // garima.push(11);
//     // garima.push(11);
//     // garima.push(4);
//     // garima.push(1);
//     // garima.push(14);
//     // garima.push(-3);
//     // garima.push(11);
//     // garima.push(5);
//     // garima.push(-4);
//     // garima.push(2);
//     // garima.push(13);
//     // garima.push(-13);
//     // garima.push(-3);
//     // garima.push(-15);
//     // garima.push(-8);
//     // garima.push(10);
//     // garima.push(3);
//     // garima.push(6);
//     // garima.push(-7);
//     // garima.push(9);
//     // garima.push(-2);
//     // garima.push(3);
//     // garima.push(-12);
//     // garima.push(6);
//     // garima.push(-7);
//     // garima.push(5);
//     // garima.push(2);
//     // garima.push(13);
//     // garima.push(-12);
//     // garima.push(4);
//     // garima.push(0);
//     // garima.push(14);
//     // garima.push(-6);
//     // garima.push(-11);
//     // garima.push(11);
//     // garima.push(-6);
//     // garima.push(13);
//     // garima.push(-6);
//     // garima.push(-7);
//     // garima.push(1);
//     // garima.push(-13);
//     // garima.push(-11);
//     // garima.push(-8);
//     // garima.push(7);
//     // garima.push(-5);
//     // garima.push(-12);
//     // garima.push(9);
//     // garima.push(-15);
//     // garima.push(-2);
//     // garima.push(14);
//     // garima.push(8);
//     // garima.push(1);
//     // garima.push(-6);
//     // garima.push(-10);
//     // garima.push(1);
//     // garima.push(5);
//     // garima.push(-10);
//     // garima.push(0);
//     // garima.push(5);
//     // garima.push(-5);
//     // garima.push(1);
//     // garima.push(-1);
//     // garima.push(12);
//     // garima.push(6);
//     // garima.push(15);
//     // garima.push(-5);
//     // garima.push(1);
//     // garima.push(-5);
//     // garima.push(-13);
//     // garima.push(-15);
//     // garima.push(14);
//     // garima.push(5);
//     // garima.push(15);
//     // garima.push(-12);
//     // garima.push(0);
//     // garima.push(13);
//     // garima.push(0);
//     // garima.push(-7);
//     // garima.push(14);
//     // garima.push(0);
//     // garima.push(-7);
//     // garima.push(3);
//     // garima.push(-7);
//     // garima.push(13);
//     // garima.push(7);
//     // cout<<garima.get_element_from_top(86)<<endl;
//     // cout<<garima.get_element_from_bottom(86)<<endl;
//     // cout<<garima.get_element_from_top(21)<<endl;
//     // cout<<garima.get_element_from_bottom(21)<<endl;
//     // cout<<garima.get_element_from_top(87)<<endl;
//     // cout<<garima.get_element_from_bottom(87)<<endl;
//     // cout<<garima.get_element_from_top(23)<<endl;
//     // cout<<garima.get_element_from_bottom(23)<<endl;
//     // cout<<garima.get_element_from_top(23)<<endl;
//     // cout<<garima.get_element_from_bottom(23)<<endl;
//     // cout<<garima.get_element_from_top(65)<<endl;
//     // cout<<garima.get_element_from_bottom(65)<<endl;
//     // cout<<garima.get_element_from_top(36)<<endl;
//     // cout<<garima.get_element_from_bottom(36)<<endl;
//     // cout<<garima.get_element_from_top(53)<<endl;
//     // cout<<garima.get_element_from_bottom(53)<<endl;
//     // cout<<garima.get_element_from_top(85)<<endl;
//     // cout<<garima.get_element_from_bottom(85)<<endl;
//     // cout<<garima.get_element_from_top(28)<<endl;
//     // cout<<garima.get_element_from_bottom(28)<<endl;

//     // cout<<garima.subtract()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.multiply()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.multiply()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.multiply()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.multiply()<<endl;
//     // cout<<garima.multiply()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.subtract()<<endl;
//     // cout<<garima.subtract()<<endl;
//     // cout<<garima.multiply()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.multiply()<<endl;
//     // cout<<garima.add()<<endl;
//     // cout<<garima.subtract()<<endl;
//     // cout<<garima.add()<<endl;
//     // cout<<garima.multiply()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.add()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.multiply()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.add()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.add()<<endl;
//     // cout<<garima.subtract()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.multiply()<<endl;
//     // cout<<garima.multiply()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.subtract()<<endl;
//     // cout<<garima.subtract()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.pop()<<endl;
//     // cout<<garima.add()<<endl;
//     // cout<<garima.multiply()<<endl;
//     // cout<<garima.add()<<endl;
//     // cout<<garima.subtract()<<endl;
//     // cout<<garima.pop()<<endl;


//     // cout<<garima.get_element_from_top(36)<<endl;
//     // cout<<garima.get_element_from_bottom(36)<<endl;
//     // cout<<garima.get_element_from_top(30)<<endl;
//     // cout<<garima.get_element_from_bottom(30)<<endl;
//     // cout<<garima.get_element_from_top(0)<<endl;
//     // cout<<garima.get_element_from_bottom(0)<<endl;
//     // cout<<garima.get_element_from_top(9)<<endl;
//     // cout<<garima.get_element_from_bottom(9)<<endl;
//     // cout<<garima.get_element_from_top(27)<<endl;
//     // cout<<garima.get_element_from_bottom(27)<<endl;
//     // cout<<garima.get_element_from_top(4)<<endl;
//     // cout<<garima.get_element_from_bottom(4)<<endl;
//     // cout<<garima.get_element_from_top(24)<<endl;
//     // cout<<garima.get_element_from_bottom(24)<<endl;
//     // cout<<garima.get_element_from_top(15)<<endl;
//     // cout<<garima.get_element_from_bottom(15)<<endl;
//     // cout<<garima.get_element_from_top(48)<<endl;
//     // cout<<garima.get_element_from_bottom(48)<<endl;
//     // cout<<garima.get_element_from_top(18)<<endl;
//     // cout<<garima.get_element_from_bottom(18)<<endl;



//     // cout<<garima.add()<<endl;
//     // cout<<garima.add()<<endl;
//     // cout<<garima.add()<<endl;
//      //cout<<garima.subtract()<<endl;
//     // cout<<garima.subtract()<<endl;
//     //garima.print_stack(0);
//     //  cout<<garima.divide()<<endl;
//     // cout<<garima.divide()<<endl;
//     // cout<<garima.multiply()<<endl;
//     // cout<<garima.multiply()<<endl;




 

