#include <stdio.h>
#include "c4.h"
#include <iostream>
using namespace std;

// ����(implementation) ����


void Customer::InPersons() {
    for (int i = 0; i < 2; i++) {
        printf("�̸� �Է�:");
        scanf_s("%s",  P[i].name, 10);
        printf("���� �Է�:");
        scanf_s("%d", &P[i].age);
        printf("�޿� �Է�:");
        scanf_s("%f", &P[i].salary);
    }
}


void Customer::OutPersons() {
    for (int i = 0; i < 2; i++) {
        printf("�̸�: %s\n", P[i].name);
        printf("����: %d\n", P[i].age);
        printf("�޿�: %f\n", P[i].salary);
        printf("\n");
    }
}

void Person2::InPersons2() {
    cout << "Enter name: ";
    cin.getline(H.name, sizeof(H.name)); // �̸� �Է¹ޱ�

    cout << "Enter age: ";
    cin >> H.age; // ���� �Է¹ޱ�

    cout << "Enter salary: ";
    cin >> H.salary; // �޿� �Է¹ޱ�

    // ������� �Է¹ޱ�
    cout << "Enter date of birth (year month day): ";
    cin >> H.dob.year >> H.dob.month >> H.dob.day ;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ���� Ŭ����
}

void Person2::OutPersons2() {
    cout << "Name: " << H.name << "\n";
    cout << "Age: " << H.age << "\n";
    cout << "Salary: $" << H.salary << "\n";
    cout << "Date of Birth: " << H.dob.year << "/" << H.dob.month << "/" << H.dob.day  << "\n";
}