#include "LibraryBook.h"

LibraryBook::LibraryBook()
{
    bookID = 0;
    title = "";
    author = "";
    borrowerName = "";
    daysBorrowed = 0;
    borrowed = false;
}

LibraryBook::LibraryBook(int id, string t, string a)
{
    bookID = id;
    title = t;
    author = a;
    borrowerName = "";
    daysBorrowed = 0;
    borrowed = false;
}

LibraryBook::~LibraryBook()
{
    cout << "Book object destroyed." << endl;
}

void LibraryBook::setBookID(int id)
{
    bookID = id;
}

int LibraryBook::getBookID()
{
    return bookID;
}

void LibraryBook::setTitle(string t)
{
    title = t;
}

string LibraryBook::getTitle()
{
    return title;
}

void LibraryBook::setAuthor(string a)
{
    author = a;
}

string LibraryBook::getAuthor()
{
    return author;
}

void LibraryBook::borrowBook(string name, int days)
{
    borrowerName = name;
    daysBorrowed = days;
    borrowed = true;
}

void LibraryBook::returnBook()
{
    borrowerName = "";
    daysBorrowed = 0;
    borrowed = false;
}

bool LibraryBook::isBorrowed()
{
    return borrowed;
}

int LibraryBook::getDaysBorrowed()
{
    return daysBorrowed;
}

void LibraryBook::displayBook()
{
    cout << "ID: " << bookID
         << " Title: " << title
         << " Author: " << author << endl;
}
