#include "borrow.h"

namespace borrow {
	Borrow::Borrow(book::Book& b, date::Date borrowingdate,  reader::Reader borrower) :  _bookisbn(b.getIsbn()), _borrowingdate(borrowingdate),  _borrowerid(borrower.getid())
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