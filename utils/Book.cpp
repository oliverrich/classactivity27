//
// Created by Oliver on 11/4/2024.
//

#include "Book.h"


Book::Book(string t, string a, string i, int q) : title(t), author(a), ISBN(i), quantity(q) {}
//ISBN for the id numbner
bool Book::operator==(const Book& other) const {
    return ISBN == other.ISBN;
}

ostream& operator<<(ostream& os, const Book& book) {
    os << "title: " << book.title << "\nauthor: " << book.author << "\nISBN: " << book.ISBN
       << "\nquantity: " << book.quantity << endl;
    return os;
}
