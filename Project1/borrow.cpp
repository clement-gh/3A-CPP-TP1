#include "borrow.h"

namespace borrow {
	Borrow::Borrow(book::Book& b, date::Date borrowingdate,  std::string borrowerid) :  _bookisbn(b.getIsbn()), _borrowingdate(borrowingdate),  _borrowerid(borrowerid)
	{
		
	}
	

	std::string Borrow::getborrowingDate() const {
		return toString(_borrowingdate);
	}

	int Borrow::getbisbn() const
	{
		return _bookisbn;
	}

	std::string Borrow::getborrowerid() const
	{
		return _borrowerid;
	}

	void Borrow::setreaderid(std::string id)
	{
		_borrowerid = id;
	}


}