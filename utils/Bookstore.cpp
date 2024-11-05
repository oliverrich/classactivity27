//
// Created by Oliver on 11/4/2024.
//
#include "Bookstore.h"
#include <iostream>

void addBook(Bookstore& bookstore, const Book& newBook) {
    for (Book& book : bookstore.inventory) {
        if (book == newBook) {
            book.quantity += newBook.quantity;
            cout << "updated quantity of existing book: " << book.title << endl;
            return;
        }
    }
    bookstore.inventory.push_back(newBook);
    cout << "added new book: " << newBook.title << endl;
}

Book* findBook(Bookstore& bookstore, const string& searchTerm) {
    for (Book& book : bookstore.inventory) {
        if (book.title == searchTerm || book.ISBN == searchTerm) {
            return &book;
        }
    }
    return nullptr;
}

void displayStoreDetails(const Bookstore& bookstore) {
    cout << "bookstore: " << bookstore.name << "\naddress: " << bookstore.address << endl;
}

void displayInventory(const Bookstore& bookstore) {
    cout << "\ninventory:\n";
    for (const Book& book : bookstore.inventory) {
        cout << book << endl;
    }
}
