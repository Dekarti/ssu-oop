#include <iostream>
#include <iomanip>
#include "Book.h"
#include <vector>

using namespace std;

class BookList {
public:
	BookList() {}
	void add(Book*);
	void add(string title,
		     string author,
		     string publisher,
		     int year,
		     int pages);
	void remove(Book);
	void print();
	Book* operator[](int i);
private:
	vector<Book*> books;
};

void BookList::add(Book* book) {
	books.push_back(book);
}

void BookList::add(string title,
				   string author,
				   string publisher,
				   int year,
				   int pages) {
	Book* book = new Book(title, author, publisher, year, pages);
	books.push_back(book);
}

void BookList::print() {
	cout << left
		 << " | " << setw(15) << "Title"
		 << " | " << setw(15) << "Author"
		 << " | " << setw(15) << "Publisher"
		 << " | " << setw(7)  << "Year"
		 << " | " << setw(7)  << "Pages"
		 << " | " << endl;

	for (int i = 0; i < books.size(); i++) {
		books[i]->print();
	}
}

Book* BookList::operator[](int i) {
	return books[i];
}


