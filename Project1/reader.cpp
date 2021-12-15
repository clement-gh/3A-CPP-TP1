#include "reader.h"
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

    void reader::Reader::setfirstname(std::string firstname)
    {
        _firstname = firstname;
    }

    void reader::Reader::setsurname(std::string surname)
    {
        _surname = surname;
    }
    std::vector<int> Reader::getlistborrowedbook() const
    {
        return  _borrowedbooks;
    }
    void Reader::addlistborrowedbook(int isbnbook)
    {
        _borrowedbooks.push_back(isbnbook);
    }
    
}