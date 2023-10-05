#include<iostream>
int main()
{
    //Dynamic Heap Memory

   /* int *p_number {nullptr};
    p_number = new int; //Dynamic allocation of the memory in Heap section
    
    *p_number=23; //Intializing the value in the newly allocated memory in Heap
    std::cout<<"The address is "<<p_number<<std::endl;
    std::cout<<"The value is "<<*p_number<<std::endl;

    delete p_number; //Releasing or Deleting the Dynamic Allocated Memory in Heap .
    p_number = nullptr; // It is a good practice to allocate the deleted memory variable with a nullptr
    */
   // This way we can declare and intialize a pointer dynamically with using nullptr.
   int *p_number5 {new int}; // This pointer stores junk address and junk value.
   int *p_number6 {new int (23)}; // Direct Intialization.
   int *p_number7 {new int {77}}; // Uniform Initialization.

   //Printing the values of the pointers.
    std::cout<<"The address is "<<p_number5<<std::endl;
    std::cout<<"The value is "<<*p_number5<<std::endl;

    std::cout<<"The address is "<<p_number6<<std::endl;
    std::cout<<"The value is "<<*p_number6<<std::endl;
      
    std::cout<<"The address is "<<p_number7<<std::endl;
    std::cout<<"The value is "<<*p_number7<<std::endl;

    // Releasing the Dynamically Allocated Memory using delete operator.

     delete p_number5; //Releasing or Deleting the Dynamic Allocated Memory in Heap .
     p_number5 = nullptr; // It is a good practice to allocate the deleted memory variable with a nullptr

     delete p_number6; //Releasing or Deleting the Dynamic Allocated Memory in Heap .
     p_number6 = nullptr; // It is a good practice to allocate the deleted memory variable with a nullptr
  
     delete p_number7; //Releasing or Deleting the Dynamic Allocated Memory in Heap .
     p_number7 = nullptr; // It is a good practice to allocate the deleted memory variable with a nullptr  

    return 0; 

  
   
}