#include<iostream>
using namespace std;


int main()
{
	int *ptr = new int(6);
	cout << *ptr << endl;
 


	system("pause");
}

void dynamically()
{
	int *ptr = new int;//create a new variable whose address is stored in the ptr
	delete ptr;//this command delete the address stored at this p[ointer,it actually doesnot delete the pointer variable
	int n=6;
	int *intptr = new int[n];//defining array of size n
}