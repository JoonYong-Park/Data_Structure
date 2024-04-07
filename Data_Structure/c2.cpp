#include "c2.h"
#include <string.h> 
#include <iostream> 

void USER::setUser(USER* A, const char name[50], const  char gender[50], const  char age[50], const  char phone[50])
{
	strcpy_s(A->name, 50, name);
	strcpy_s(A->gender, 50, gender);
	strcpy_s(A->age, 50, age);
	strcpy_s(A->phone, 50, phone);
}

void USER::getUser()
{
	std::cout << "name : " << name << std::endl;
	std::cout << "gender : "<< gender << std::endl;
	std::cout << "age : " << age << std::endl;
	std::cout << "phone : " << phone << std::endl;
}