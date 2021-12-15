#include "book.h"

Book::Book(std::string title, author::Author bookAuthor, std::string language, std::string category, date::Date pubDate, int isbn) : _title(title), _bookAuthor(bookAuthor), _language(language), _category(category), _pubDate(pubDate), _isbn(isbn) {

}

std::string Book::getTitle() const {
	return _title;
}

std::string Book::getAutor() {
	return _bookAuthor.getFullname();
}

std::string Book::getLanguage() const {
	return _language;
}

std::string Book::getCategory() const {
	return _category;
}

std::string Book::getPubDate() const {
	return toString(_pubDate);
}

int Book::getIsbn() const {
	return _isbn;
}