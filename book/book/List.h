#include <iostream>
#include <iomanip>
#include "Book.h"
#include <vector>

using namespace std;

class BookList {
public:
	BookList() {}
	void add(Book);
	void add(string title,
		     string author,
		     string publisher,
		     int year,
		     int pages);
	void remove(Book);
	void print();
private:
	vector<Book> books;
};

void BookList::add(Book book) {
	books.push_back(book);
}

void BookList::add(string title,
				   string author,
				   string publisher,
				   int year,
				   int pages) {
	Book book(title, author, publisher, year, pages);
	books.push_back(book);
}

void BookList::print() {
	cout << left
		 << " | " << setw(15) << "Title"
		 << " | " << setw(15) << "Author"
		 << " | " << setw(15) << "Publisher"
		 << " | " << setw(15) << "Year"
		 << " | " << setw(15) << "Pages"
		 << " | " << endl << " ";
	for (int i = 0; i < 91; i++) {
		if ((i % 18) != 0)
			cout << "-";
		else
			cout << "|";
	}
	cout << endl;
	for (int i = 0; i < books.size(); i++) {
		books[i].print();
	}
}



