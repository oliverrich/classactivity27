//
// Created by Oliver on 11/4/2024.
//
#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    string ISBN;
    int quantity;

    Book(string t, string a, string i, int q);

    // Overloading equality operator to compare books based on ISBN
    bool operator==(const Book& other) const;

    // Overloading stream insertion operator for easy printing of book details
    friend ostream& operator<<(ostream& os, const Book& book);
};

#endif

