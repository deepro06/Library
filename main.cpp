#include <iostream>
#include <string>
using namespace std;
  

class Library
{
    public:
    string bookName;
    string author;
    string company;
    string publication_date;
    string isbnNumber;
    string totalCopy;

    public:
    void information()//information about the books
    {
        cout << "Name of the book: "<< bookName<< endl;
        cout<< "Author Name: " << author << endl;
        cout<< "Company: " << company << endl;
        cout<< "Publication date: " <<publication_date << endl;
        cout<< "Isbn number: " << isbnNumber << endl;
        cout<< "Total copies available in the library: " << totalCopy << endl;
        
    }
};
int main()
{
    string option;
    cout << "a)The art of War" <<endl;
    cout << "b)Thinking gast and slow"<<endl;
    cout << "c)Kafka on the shore"<<endl;
    cout << "Type it here:-";
    cin >> option;

    if(option == "a")
    {
        Library book1;
        book1.bookName ="The art of war";
        book1.author ="Sun tzu";
        book1.company = "Paperback";
        book1.publication_date = " august 12, 2001";
        book1.totalCopy = "1500000";
        book1.isbnNumber = "1233341" ;

        cout << "  *******____BOOK 1 INFORMATION____*******"<< endl;
        book1.information();
    }
    else if(option == "b")
    {
        Library book2;
        book2.bookName ="Thinking slow and fast";
        book2.author ="Daniel";
        book2.company = "Edu.books.ltd";
        book2.publication_date = " January 30, 2017";
        book2.totalCopy = " 23000";
        book2.isbnNumber = "34343341" ;

        cout << "  *******____BOOK 2 INFORMATION____*******"<< endl;
        book2.information();
    }
    else if(option == "c")
    {
        Library book3;
        book3.bookName ="Kafka on the shore";
        book3.author ="Haruki murakami";
        book3.company = "Something";
        book3.publication_date = " november 13, 2011";
        book3.totalCopy = "56300";
        book3.isbnNumber = "1343141234" ;

        cout << " *******____BOOK 3 INFORMATION____*******"<< endl;
        book3.information();
    }

    else
    {
        cout << "Juan........................";
    }





    


}