#include <iostream>
#include "Book.h"
#include "List.h"
using namespace std;

int main() {
	Book book("Title1", "Author1", "Publisher1", 2001, 100);
	BookList bookList;
	bookList.add(book);
	bookList.print();
	return 0;
}