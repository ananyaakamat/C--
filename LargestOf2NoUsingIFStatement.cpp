/*to find the largest of 2 numbers*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int a,b,l;
 cout<<"Enter 2 numbers ";
 cin>>a>>b;
 l=a;
 if(b>l)
 l=b;
 cout<<"Largest "<<l;
 getch();
}