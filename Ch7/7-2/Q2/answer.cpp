#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Book
{
private:
	char* title;
	char* isbn;
	int price;

public:
	Book(const char* title, const char* isbn, int price)
	{
		this->title = new char[strlen(title) + 1];
		strcpy(this->title, title);

		this->isbn = new char[strlen(isbn) + 1];
		strcpy(this->isbn, isbn);

		this->price = price;
	}
	void ShowBookInfo()
	{
		cout << "제목: " << title << "\n"
			<< "ISBN: " << isbn << "\n"
			<< "가격: " << price << "\n";
	}
};

class EBook : public Book
{
private:
	char* DRMKey;

public:
	EBook(const char* title, const char* isbn, int price, const char* DRMKey)
		: Book(title, isbn, price)
	{
		this->DRMKey = new char[strlen(DRMKey) + 1];
		strcpy(this->DRMKey, DRMKey);
	}
	void ShowEBookInfo()
	{
		ShowBookInfo();
		cout << "인증키: " << DRMKey << "\n";
	}
};

int main(void)
{
	Book book("좋은 C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;
	EBook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();

	return 0;
}