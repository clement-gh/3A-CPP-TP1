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
    /*
   

    void Reader::restore(book::Book& b)
    {
        if (b.bookstatus() == true) {
            std::cout << "Vous ne pouvez pas emprunter un livre qun'est pas emprunte." << std::endl;
        }
        else if ((b.lastborrower(this->getid()))==false) //livre non emprunté par le lecteur
        {
            std::cout << "Vous ne n'etes pas la personne qui a emprunté ce livre" << std::endl;
        }
        else
        {

            b.setbookstatus(true);
         //   b.delborrow();
        }




    }
    

    */
}

