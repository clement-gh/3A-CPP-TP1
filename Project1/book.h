#pragma once
#include <string>
#include "author.h"
#include <vector>
#include <iostream>

#ifndef BOOK_H
#define BOOK_H
namespace book {
	class Book {
		public:
			//constructeur "livre"
			Book (std::string title, author::Author bookAuthor, std::string language, std::string category, date::Date pubDate, int isbn);
			
			//getters
			std::string getTitle() const;
			std::string getAutor();
			std::string getLanguage() const;
			std::string getCategory() const;
			std::string getPubDate() const;
			int getIsbn() const;
			bool bookstatus()const;
			void setbookstatus(bool _isborrowed);
			std::string getstatusofbook() const;
			//std::string getborrower()const;
			void addlistofborrower(std::string borrower);

			bool lastborrower(std::string borrower );


		private:
			std::string _title;
			author::Author _bookAuthor;
			std::string _language;
			std::string _category;
			date::Date _pubDate;
			int _isbn;
			bool _isborrowed=true;
			std::vector<std::string> _borrowedby;
	};
	std::ostream& operator<<(std::ostream& os, Book& b);
}

#endif