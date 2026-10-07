#include "book.h"
#include <iostream>

// Constructeur par défaut
Book::Book() : title(""), author(""), isbn("") {};

// Constructeur avec paramètre
Book::Book(const string& title, const string& author, const string& isbn) : title(title), author(author), isbn(isbn) {
    
}

// Getters
string Book::getTitle() const {
    return title;
}
string Book::getAuthor() const {
    return author;
}
string Book::getISBN() const {
    return isbn;
}
bool Book::getAvailability() const {
    return isAvailable;
}
string Book::getBorrowerId() const {
    return borrowerId;
}

// Setters
void Book::setTitle(const string& title) {
    this->title = title;
}
void Book::setAuthor(const string& author) {
    this->author = author;
}
void Book::setISBN(const string& isbn) {
    this->isbn = isbn;
}
void Book::setAvailability(bool availability) {
    this->isAvailable = availability;
}
void Book::setBorrowerId(const string& borrowerId) {
    this->borrowerId = borrowerId;
}

// Méthodes
void Book::checkOut(const string& borrowerId) {
    // TODO
}
void Book::returnBook() {
    // TODO
}
string Book::toString() const {
    // TODO
}
string Book::toFileFormat() const {
    // TODO
}
void Book::fromFileFormat(const string& line) {
    // TODO
}