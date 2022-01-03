#pragma once
#include <string>

#include "author.h"



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

		private:
			std::string _title;
			author::Author _bookAuthor;
			std::string _language;
			std::string _category;
			date::Date _pubDate;
			int _isbn;
	};

}

