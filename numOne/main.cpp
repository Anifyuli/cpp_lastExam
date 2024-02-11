#include <iostream>
using namespace std;

class Book {
public:
  string title;
  string author;
  int year;

  Book(string title, string author, int year)
      : title(title), author(author), year(year) {}

  void showBookInfo() {
    cout << "Title : " << title << endl;
    cout << "Author : " << author << endl;
    cout << "Release year : " << year << endl;
  }

  void isOld(){
    if (year <= 2000)
    {
      cout << "This book is old" << endl;
    }
    else
    {
      cout << "This book is young" << endl;
    }
    
  }
};

int main(int argc, char const *argv[])
{
  Book romeoJuliet("Romeo & Juliet", "William Shakespear", 1957);
  romeoJuliet.showBookInfo();
  romeoJuliet.isOld();

  cout << "\n";

  Book harryPotter("Harry Potter and the Half-blood Prince", "JK Rowling", 2005);
  harryPotter.showBookInfo();
  harryPotter.isOld();

  return 0;
}