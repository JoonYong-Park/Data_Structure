#include <iostream>
using namespace std;

/// ���� �ε� - �Լ� �̸��� ���Ƶ� �Ű������� Ÿ���̳� ������ �ٸ��� �ٸ� �Լ��� �ν� ///
void func(int i)
{
	cout << "int: " << i << endl;
}

void func(char c)
{
	cout << "char:" << c << endl;
}

void func(int i, int j)
{
	cout << "int: " << i<< " " << "int: " << j << endl;
}

/// �������̵� - �θ� Ŭ������ �Լ��� �ڽ� Ŭ�������� ������ ///
class Animal {
    public:
        virtual void sound() {
            cout << "������ ���� �Ҹ�" << endl;
        }
};

class Dog : public Animal {
    public:
        void sound() override {
            cout << "�۸�!" << endl;
        }
};

// ���� �Լ�
int main() {

    // Overloading
    func(3);
    func('J');
    func(1, 2);
    printf("\n---------------------\n");

    // Overriding
    Animal* a = new Animal();
    a->sound();  // ������ ���� �Ҹ�

    Animal* d = new Dog();
    d->sound();  // �۸�!

    return 0;
}

