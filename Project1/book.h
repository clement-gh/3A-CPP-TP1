#pragma once
#include <string>
//#include "reader.h"
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
			bool bookstatus()const;
			void setbookstatus(bool _isborrowed);
			std::string getstatusofbook() const;
			//std::string getborrower()const;
			//void setborrower(std::string r);

		private:
			std::string _title;
			author::Author _bookAuthor;
			std::string _language;
			std::string _category;
			date::Date _pubDate;
			int _isbn;
			bool _isborrowed=true;
			//std::string _borrowedby;
	};

}

