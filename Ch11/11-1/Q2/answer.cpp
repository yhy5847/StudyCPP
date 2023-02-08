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
	Book(Book& bk)
		:price(bk.price)
	{
		if (title != NULL)
		{
			delete[] title;
		}
		if (isbn != NULL)
		{
			delete[] isbn;
		}

		this->title = new char[strlen(bk.title) + 1];
		strcpy(this->title, bk.title);

		this->isbn = new char[strlen(bk.isbn) + 1];
		strcpy(this->isbn, bk.isbn);
	}
	Book& operator=(const Book& bk)
	{
		price = bk.price;

		if (title != NULL)
		{
			delete[] title;
		}
		if (isbn != NULL)
		{
			delete[] isbn;
		}

		this->title = new char[strlen(bk.title) + 1];
		strcpy(this->title, bk.title);

		this->isbn = new char[strlen(bk.isbn) + 1];
		strcpy(this->isbn, bk.isbn);

		return *this;
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
	EBook(EBook& ebk)
		: Book(ebk)
	{
		this->DRMKey = new char[strlen(ebk.DRMKey) + 1];
		strcpy(this->DRMKey, ebk.DRMKey);
	}
	EBook& operator=(const EBook& ebk)
	{
		Book::operator=(ebk);
		if (DRMKey != NULL)
		{
			delete[] DRMKey;
		}
		this->DRMKey = new char[strlen(ebk.DRMKey) + 1];
		strcpy(this->DRMKey, ebk.DRMKey);

		return *this;
	}
	void ShowEBookInfo()
	{
		ShowBookInfo();
		cout << "인증키: " << DRMKey << "\n";
	}
};

int main(void)
{
	Book bk1("좋은 C++", "555-12345-890-0", 20000);
	Book bk2("은 C++", "555-22245-890-1", 10000);
	bk1 = bk2;
	bk1.ShowBookInfo();
	Book bk3(bk2);
	bk3.ShowBookInfo();

	cout << endl;

	EBook ebk1("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	EBook ebk2("ebook", "555-12345", 100, "w0i8kiw");
	ebk1 = ebk2;
	ebk1.ShowEBookInfo();

	EBook ebk3(ebk2);
	ebk3.ShowEBookInfo();

	return 0;
}