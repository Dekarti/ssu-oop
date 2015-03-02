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
	string getTitle()     { return title; }
	string getAuthor()    { return author; }
	string getPublisher() { return publisher; }
	int    getYear()      { return year; }
	int    getPages()     { return pages; }

	void setTitle(string title)         { this->title = title; }
	void setAuthor(string author)       { this->author = author;; }
	void setPublisher(string publisher) { this->publisher = publisher;; }
	void setYear(int year)              { this->year = year; }
	void setPages(int pages)            { this->pages = pages; }

	template< typename T >
	void update(T obj, string type);
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
		 << " | " << setw(7) << year
		 << " | " << setw(7) << pages
		 << " | " << endl;
}

/*template< typename T >
void Book::update(T obj, string type) {
		if (type == "title")
			title = obj;
		if (type == "author")
			author = obj;
		if (type == "publisher")
			publisher = obj;
		if (type == "year")
			year = obj;
		if (type == "pages")
			pages = obj;
}*/