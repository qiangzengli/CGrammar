//#include <stdio.h>
//#include <string.h>
//
////声明打印book函数
//
//	//定义结构体 Book  并声明结构体变量 book
//typedef struct Book
//{
//
//	int book_id;
//	char title[50];
//	char author[50];
//	char subject[100];
//
//
//};
//
//
//void printBook(struct Book book);
//
//void printBookByPointer(struct Book* book);
//
//
//int main(void)
//{
//	
//
//
//	//struct Book
//	//{
//	//	//声明变量
//	//	int book_id;
//	//	char title[50];
//	//	char author[50];
//	//	char subject[100];
//
//	//};
//	//	
//	////声明结构体变量
//	//struct Book english_book, chinese_book;
//
//	//	
//
//	////第三种定义结构体的方式
//	//typedef struct
//	//{
//	//	//声明变量
//	//	int book_id;
//	//	char title[50];
//	//	char author[50];
//	//	char subject[100];
//
//	//} Book;
//
//
//	//Book book;
//
//
//
//	//如果连个结构体互相包含 需要其中一个进行非完整定义
//	//struct Dog;
//
//
//	//struct Persona
//	//{
//	//	struct  Dog* dog;
//	//	double height;
//	//	int age;
//	//	double weight;
//	//	int gender;
//
//
//	//};
//
//	//struct Dog
//	//{
//
//	//	struct Person* person;
//	//	char dogName[20];
//	//	int  dogGender;
//	//	char dogColor[2];
//
//	//};
//
//
//
//
//	//printf("书籍id: %d \t 书籍作者：%s \t书籍描述：%s ", book.book_id, book.author, book.subject);
//
//
//	struct Book englishBook;
//	struct Book mathBook;
//
//	strcpy_s(englishBook.author, 30, "迈克尔");
//	strcpy_s(englishBook.title, 30, "C语言从入门到放弃");
//	strcpy_s(englishBook.subject, 30, "非常好的C语言进阶书籍");
//	englishBook.book_id = 1;
//
//
//
//	strcpy_s(mathBook.author, 30, "孔子");
//	strcpy_s(mathBook.title, 30, "奥数密集");
//	strcpy_s(mathBook.subject, 30, "非常好的学习数学的资料");
//	mathBook.book_id = 2;
//
//
//		//直接通过访问成员打印
//	/*printBook(englishBook);
//
//	printBook(mathBook);*/
//
//	//通过指针访问成员
//
//	printBookByPointer(&englishBook);
//	printBookByPointer(&mathBook);
//
//
//	/*printf("书籍的名字：%s\t\n书籍的作者：%s\t\n书籍的概览：%s\t \n书籍id:%d", englishBook.title, englishBook.author, englishBook.subject, englishBook.book_id);
//	printf("书籍的名字：%s\t\n书籍的作者：%s\t\n书籍的概览：%s\t \n书籍id:%d", mathBook.title, mathBook.author, mathBook.subject, mathBook.book_id);*/
//
//
//
//	return 0;
//
//
//}
//
//
////打印书本信息
//void printBook( struct Book tempBook) {
//
//	printf("书籍的名字：%s\t\n书籍的作者：%s\t\n书籍的概览：%s\t \n书籍id:%d", tempBook.title, tempBook.author, tempBook.subject, tempBook.book_id);
//}
//
//
//void printBookByPointer(struct Book* book)
//{
//
//	printf("书籍的名字：%s\t\n书籍的作者：%s\t\n书籍的概览：%s\t \n书籍id:%d", book->title, book->author, book->subject, book->book_id);
//
//}