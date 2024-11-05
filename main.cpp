#include "utils/Book.h"
#include "utils/Bookstore.h"
#include <iostream>
using namespace std;

int main() {

    Bookstore myBookstore = {"City Bookstore", "123 Main St"};


    addBook(myBookstore, Book("The Martian","Andy Wier", "1234", 4);



    string searchTerm;
    cout << "\nenter the title or ISBN of the book to find: ";
    getline(cin, searchTerm);
    Book* foundBook = findBook(myBookstore, searchTerm);
    if (foundBook) {
        cout << "\nbook found:\n" << *foundBook << endl;
    } else {
        cout << "book not found!" << endl;
    }


    displayStoreDetails(myBookstore);
    displayInventory(myBookstore);

    return 0;
}