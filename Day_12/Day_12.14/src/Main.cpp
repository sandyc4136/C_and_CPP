#include<iostream>
#include<string>
using namespace std;
class Product{
private:
	string title;
	float price;
public:
	Product( void ){
		this->title = "";
		this->price = 0;
	}
	void acceptRecord( void ){
		cout<<"Title	:	";
		cin >>this->title;
		cout<<"Price	:	";
		cin>>this->price;
	}
	void printRecord( void ){
		cout<<"Title	:	"<< this->title <<endl;
		cout<<"Price	:	"<<this->price<<endl;
	}
};
class Book : public Product{
private:
	int pageCount;
public:
	Book( void ){
		this->pageCount = 0;
	}
	void acceptRecord( void ){
		Product::acceptRecord( );
		cout<<"Page Count	:	";
		cin>>this->pageCount;
	}
	void printRecord( void ){
		Product::printRecord( );
		cout<<"Page Count	:	"<<this->pageCount<<endl;
	}
};
class Tape : public Product{
private:
	int playTime;
public:
	Tape( void ){
		this->playTime = 0;
	}
	void acceptRecord( void ){
		Product::acceptRecord( );
		cout<<"Play Time	:	";
		cin>>this->playTime;
	}
	void printRecord( void ){
		Product::printRecord( );
		cout<<"Play Time	:	"<<this->playTime<<endl;
	}
};
int main( void ){
	Tape tape;
	tape.acceptRecord( );
	tape.printRecord( );
	return 0;
}
int main1( void ){
	Book book;
	book.acceptRecord( );
	book.printRecord( );
	return 0;
}
