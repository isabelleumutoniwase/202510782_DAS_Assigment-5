#ifndef LIBRARYBOOK_H
#define LIBRARYBOOK_H

#include <iostream>
using namespace std;

class LibraryBook
{
private:
    int bookID;
    string title;
    string author;
    string borrowerName;
    int daysBorrowed;
    bool borrowed;

public:
    LibraryBook();
    LibraryBook(int id, string t, string a);
    ~LibraryBook();

    void setBookID(int id);
    int getBookID();

    void setTitle(string t);
    string getTitle();

    void setAuthor(string a);
    string getAuthor();

    void borrowBook(string name, int days);
    void returnBook();

    bool isBorrowed();
    int getDaysBorrowed();

    void displayBook();
};

#endif
