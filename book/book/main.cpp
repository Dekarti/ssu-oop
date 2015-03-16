#include <iostream>
#include "Book.h"
#include "List.h"
using namespace std;

int main() {
	Book* book;
	BookList bookList;
	for (int i = 0; i < 15; i++) {
		book = new Book("Title", "Author1", "Publisher1", i + 2000, i + 100);
		bookList.add(book);
	}

	bookList[5]->updateAuthor("James");
	bookList.print();
	return 0;
}