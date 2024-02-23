#include<iostream>
#include<string>
using namespace std;

class Book {
private:
    string bookname;
    int date;

public:
    Book(string b, int d) : bookname(b), date(d) {
        cout << "Book object created with name: " << bookname << ", date: " << date << endl;
    }

    void displayInfo() {
        cout << "Book name: " << bookname << ", Date: " << date << endl;
    }
};

int main() {
    Book mybook1("science", 19);
    Book mybook2("social", 12);
    mybook1.displayInfo();
    mybook2.displayInfo();
    return 0;
}

