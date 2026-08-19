#include <iostream>
using namespace std;

class Book {
protected:
    string title;
    int totalCopies;
    int availableCopies;

public:
    Book(string t, int copies) {
        title = t;
        totalCopies = copies;
        availableCopies = copies;
    }

    bool borrowBook() {
        if (availableCopies > 0) {
            availableCopies--;
            cout << "\"" << title << "\" borrowed. Copies left: " << availableCopies << endl;
            return true;
        }
        cout << "\"" << title << "\" is currently unavailable." << endl;
        return false;
    }

    void returnBook() {
        if (availableCopies < totalCopies) {
            availableCopies++;
            cout << "\"" << title << "\" returned. Copies left: " << availableCopies << endl;
        } else {
            cout << "All copies already accounted for." << endl;
        }
    }

    int getAvailableCopies() const {
        return availableCopies;
    }
};

class ReferenceBook : public Book {
public:
    ReferenceBook(string t) : Book(t, 1) {}

    // Override: reference books can never be borrowed (protectedVar reused)
    bool borrowBook() {
        cout << "\"" << title << "\" is a reference book and cannot be borrowed." << endl;
        return false;
    }
};

int main() {
    Book novel("The Alchemist", 3);
    ReferenceBook dictionary("Oxford Dictionary");

    novel.borrowBook();
    novel.borrowBook();
    novel.borrowBook();
    novel.borrowBook();  // fails - none left

    novel.returnBook();

    dictionary.borrowBook(); // always blocked

    return 0;
}