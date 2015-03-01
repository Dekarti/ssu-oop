#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Book {
public:
	Book() {}
	Book(string title,
		 string author,
		 string publisher,
		 int year,
		 int pages);
	void print();
private:
	string title;
	string author;
	string publisher;
	int year;
	int pages;
};

Book::Book(string title,
		   string author,
		   string publisher,
		   int year,
		   int pages) {
	this->title = title;
	this->author = author;
	this->publisher = publisher;
	this->year = year;
	this->pages = pages;
}

void Book::print() {
	cout << left
		 << " | " << setw(15) << title  
		 << " | " << setw(15) << author
		 << " | " << setw(15) << publisher
		 << " | " << setw(15) << year
		 << " | " << setw(15) << pages
		 << " | " << endl;
}

