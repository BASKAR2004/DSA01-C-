#include<iostream>
using namespace std;
class MyClass {
private:
    int data;
public:
    MyClass(int value) : data(value) {}
    friend ostream& operator<<(ostream& a, const MyClass& obj) {
        a << "Data: " << obj.data;
        return a;
    }
};
int main() {
    MyClass obj(42);
    cout << obj << endl;
    return 0;
}

