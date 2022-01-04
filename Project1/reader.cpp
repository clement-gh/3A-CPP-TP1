#include "reader.h"

namespace reader {
    reader::Reader::Reader(std::string firstname, std::string surname) : _firstname(firstname), _surname(surname)
    {
        setid();
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

    void Reader::setid()
    {
      
       std::string firstChar = _firstname.substr(0,1) ; //permet d'avoir id du type cghys à partir de clement en prénom et ghys en nom
       _id = firstChar + _surname;
        
    }



    std::vector<int> Reader::getlistborrowedbook()
    {
        return  _borrowedbooks;
    }
    void Reader::addlistborrowedbook(int isbnbook)
    {

        _borrowedbooks.push_back(isbnbook);
    }
    
    std::ostream& operator<<(std::ostream& os, Reader& r) {
        os << "Informations sur le lecteur : ";
        os << r.getfirstname();
        os << ", ";
        os << r.getsurname();
        os << ", ";
        os << r.getid();

        return os;

    }
}

