#include "c2.h"
#include <string.h> 
#include <iostream> 

using namespace std;

void USER::setUser(USER* A, const char name[50], const  char gender[50], const  char age[50], const  char phone[50])
{
	strcpy_s(A->name, 50, name);
	strcpy_s(A->gender, 50, gender);
	strcpy_s(A->age, 50, age);
	strcpy_s(A->phone, 50, phone);
}

void USER::getUser()
{
	cout << "name   : " << name << endl;
	cout << "gender : "<< gender << endl;
	cout << "age    : " << age << endl;
	cout << "phone  : " << phone << endl;
}