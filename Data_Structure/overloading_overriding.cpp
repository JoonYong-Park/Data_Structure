#include <iostream>
using namespace std;

/// 오버 로딩 - 함수 이름이 같아도 매개변수의 타입이나 개수가 다르면 다른 함수로 인식 ///
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

/// 오버라이딩 - 부모 클래스의 함수를 자식 클래스에서 재정의 ///
class Animal {
    public:
        virtual void sound() {
            cout << "동물이 내는 소리" << endl;
        }
};

class Dog : public Animal {
    public:
        void sound() override {
            cout << "멍멍!" << endl;
        }
};

// 메인 함수
int main() {

    // Overloading
    func(3);
    func('J');
    func(1, 2);
    printf("\n---------------------\n");

    // Overriding
    Animal* a = new Animal();
    a->sound();  // 동물이 내는 소리

    Animal* d = new Dog();
    d->sound();  // 멍멍!

    return 0;
}

