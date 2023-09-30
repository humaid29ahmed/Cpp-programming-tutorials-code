#include<iostream>
int main()
{
    int num[] {1,2,3,4,5,6,7,8,9,10,99,102,897,786,794};
    /*for(size_t i{}; i<std::size(num);i++)
    std::cout<<num[i]*i<<std::endl;
    */

   // Range based for loop
   /*
   for(auto i : num)
   std::cout<<"value : "<<i<<std::endl;
   */
  // Array of Characters

   /* char message[] {'H','E','L','L','O','\0'};
    std::cout<<"This is the Message : "<<message;
    */

   
  // c-literal printing of character array

  /*char message [] {"hello"};
  std::cout<<"This is the message: "<<message<<std::endl;
  std::cout<<"Size of an Character Array: "<<std::size(message)<<std::endl;
  std::cout<<"Printing the size of an Character using sizeof() function Array:"<<sizeof(message)<<std::endl;
  */

 // Array of bounds
 int number[] {1,2,3,4,5,6,7,8,9,0};
 std::cout<<"Number[12] : " <<number[12]<<std::endl;
 std::cout<<"Number[15] : " <<number[15]<<std::endl;
 number[15]=255;
std::cout<<"Number[15] : " <<number[15]<<std::endl;
    return 0; 

  
   
}