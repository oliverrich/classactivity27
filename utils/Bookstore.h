//
// Created by Oliver on 11/4/2024.
//

#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include <string>
#include <vector>
#include "Book.h"
using namespace std;

struct Bookstore {
    string name;
    string address;
    vector<Book> inventory;
};


void addBook(Bookstore& bookstore, const Book& newBook);
Book* findBook(Bookstore& bookstore, const string& searchTerm);
void displayStoreDetails(const Bookstore& bookstore);
void displayInventory(const Bookstore& bookstore);

#endif

