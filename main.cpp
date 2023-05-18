#include <iostream>
using namespace std;

class Book {
public:
    string author;
    string title;
    string publisher;
    int pages;

};

int main()
{
    Book bookOne;
    bookOne.author ="JK Rowling";
    bookOne.title="HarryPotter";
    bookOne.publisher="BloomsBury";
    bookOne.pages=500;

    Book bookTwo;
    bookTwo.author="JRR Tolkien";
    bookTwo.title="Lord of the Rings";
    bookTwo.publisher="Allen & Unwin";
    bookTwo.pages=700;

    cout << "BookOne Info" << endl;
    cout << "Author: " << bookOne.author << "\n"
         << "Title: " << bookOne.title << "\n"
         << "Publisher: " << bookOne.publisher << "\n"
         << "Pages: " << bookOne.pages << endl;

    cout << endl;

    cout << "BookTwo Info" << endl;
    cout << "Author: " << bookTwo.author << "\n"
         << "Title: " << bookTwo.title << "\n"
         << "Publisher: " << bookTwo.publisher << "\n"
         << "Pages: " << bookTwo.pages << endl;
    return 0;
}
