#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "Author.h"

using namespace std;

class Book
{
    public:
        Book();
	Book(string name, Author author, double price, int qtyInStock = 0);
        virtual ~Book();
        string getName();

    protected:

    private:
        string name;
        Author author;
        double price;
        int qtyInStock = 0;
};

#endif // BOOK_H
