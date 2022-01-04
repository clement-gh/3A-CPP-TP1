#include "reader.h"
#include "borrow.h"
namespace reader {
    reader::Reader::Reader(std::string firstname, std::string surname, std::string id) : _firstname(firstname), _surname(surname), _id(id)
    {
    }

    std::string reader::Reader::getfirstname() const
    {
        return _firstname;
    }

    std::string reader::Reader::getsurname() const
    {
        return _surname;
    }

    std::string Reader::getid() const
    {
        return _id;
    }

    void Reader::setid(std::string id)
    {
        _id = id;
    }



    std::vector<int> Reader::getlistborrowedbook() 
    {
        return  _borrowedbooks;
    }
    void Reader::addlistborrowedbook(int isbnbook)
    {

        _borrowedbooks.push_back(isbnbook);
    }

    void Reader::borrow(book::Book &b, date::Date d)
    {
      
        b.setbookstatus()
        b.setborrower(this->getid());


    }

    
   
}
