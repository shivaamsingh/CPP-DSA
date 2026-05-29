//dynamic memory= memory that is allocated after the program
//                is already compiled & running.
//                  use the 'new' operator to allocate 
//                  memory in the heap rather than the stack

//      useful when we don't know how much memory 
//      will we need . makes our program more flexible,\
//     especially when accepting user input.
#include <iostream>



int main() {
    int *pNum=NULL;
    pNum=new int ;
    *pNum=21;
    std::cout<<"address: "<<pNum<<'\n';
    std::cout<<"value: "<<*pNum<<'\n';
    delete pNum;
    return 0;
}