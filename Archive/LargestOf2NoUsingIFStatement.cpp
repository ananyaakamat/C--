/*to find the largest of 2 numbers*/
#include<iostream>
#include<conio.h>
int main()
{
 int a,b,l;
 std::cout<<"Enter 2 numbers ";
 std::cin>>a>>b;
 l=a;
 if(b>l)
 l=b;
 std::cout<<"Largest "<<l;
 getch();
}