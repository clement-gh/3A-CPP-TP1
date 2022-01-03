#include "borrow.h"

namespace borrow {
	Borrow::Borrow(date::Date borrowingdate, book::Book &b, reader::Reader &r) : _borrowingdate(borrowingdate), _bookisbn(b.getIsbn()), _readerid(r.getid())
	{
		bool status = b.bookstatus();
		assert(status && "livre déja emprunté impossible de l'emprunter!");

		b.setbookstatus(false);
	}
	

	std::string Borrow::getborrowingDate() const {
		return toString(_borrowingdate);
	}

	int Borrow::getIsbn() const
	{
		return _bookisbn;
	}

	std::string Borrow::getreaderid() const
	{
		return _readerid;
	}

	
}