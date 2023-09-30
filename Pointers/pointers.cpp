#include<iostream>
int main()
{
   //Declare and Intialize a pointer

   /*int* p_number {};
   double* P_fractional {}; */

   // Declaring null pointer explicitly
   /*int* p_number1 {nullptr};
   double* P_fractional1 {nullptr}; */
   // Intializing the pointer with the data

   /*int val{43};
   int* value{&val};

   std::cout<<"The value of \"val\" "<<val<<std::endl;
   std::cout<<"The value of \"value\" "<<value<<std::endl; // Prints the address of variable val */
  /* // Get the value using dereferencing Operator
   int val {43};
   int* value {nullptr};

   value = &val;

   std::cout<<"The value of \"val\" through pointer variable \"value\" :"<< *value<<std::endl;
   */

const char* p_message {"Hello World!"};

std::cout<< "P_message :"<<*p_message<<std::endl;  // We Cannot change the char pointer
   return 0;
}