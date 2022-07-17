#include <iostream>
#include <string.h>
using namespace std;
class Book
{
    int price;
    char name[80];

public:
    Book(int price, char name[80])
    {
        this->price = price;
        strcpy(this->name, name);
    }

public:
void print()
{
    cout<<"Book - "<<this->name<<"  Price "<<this->price;
}
};

int main()
{
Book* book =new Book(250,"Basic C");
book->print();
    return 0;
    
}