#include "Functions.h"

LibraryBook books[50];
int countBook = 0;

void addBook()
{
    int id;
    string title, author;

    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter Title: ";
    cin >> title;

    cout << "Enter Author: ";
    cin >> author;

    books[countBook] = LibraryBook(id, title, author);
    countBook++;

    cout << "Book Added Successfully\n";
}

void displayBooks()
{
    for(int i=0; i<countBook; i++)
    {
        books[i].displayBook();
    }
}

void searchBook()
{
    int id;

    cout << "Enter Book ID: ";
    cin >> id;

    for(int i=0; i<countBook; i++)
    {
        if(books[i].getBookID()==id)
        {
            books[i].displayBook();
            return;
        }
    }

    cout << "Book Not Found\n";
}

void borrowBookMenu()
{
    int id, days;
    string name;

    cout << "Book ID: ";
    cin >> id;

    for(int i=0; i<countBook; i++)
    {
        if(books[i].getBookID()==id)
        {
            cout << "Borrower Name: ";
            cin >> name;

            cout << "Days Borrowed: ";
            cin >> days;

            books[i].borrowBook(name, days);
            cout << "Book Borrowed\n";
        }
    }
}

void returnBookMenu()
{
    int id;

    cout << "Book ID: ";
    cin >> id;

    for(int i=0; i<countBook; i++)
    {
        if(books[i].getBookID()==id)
        {
            books[i].returnBook();
            cout << "Book Returned\n";
        }
    }
}

void displayOverdueBooks()
{
    for(int i=0; i<countBook; i++)
    {
        if(books[i].getDaysBorrowed() > 14)
        {
            books[i].displayBook();
        }
    }
}

void calculateTotalFines()
{
    int total = 0;

    for(int i=0; i<countBook; i++)
    {
        if(books[i].getDaysBorrowed() > 14)
        {
            total += (books[i].getDaysBorrowed() - 14) * 100;
        }
    }

    cout << "Total Fine = " << total << " RWF" << endl;
}
