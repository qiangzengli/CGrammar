//#include <stdio.h>
//#include <string.h>
//
////������ӡbook����
//
//	//����ṹ�� Book  �������ṹ����� book
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
//	//	//��������
//	//	int book_id;
//	//	char title[50];
//	//	char author[50];
//	//	char subject[100];
//
//	//};
//	//	
//	////�����ṹ�����
//	//struct Book english_book, chinese_book;
//
//	//	
//
//	////�����ֶ���ṹ��ķ�ʽ
//	//typedef struct
//	//{
//	//	//��������
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
//	//��������ṹ�廥����� ��Ҫ����һ�����з���������
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
//	//printf("�鼮id: %d \t �鼮���ߣ�%s \t�鼮������%s ", book.book_id, book.author, book.subject);
//
//
//	struct Book englishBook;
//	struct Book mathBook;
//
//	strcpy_s(englishBook.author, 30, "���˶�");
//	strcpy_s(englishBook.title, 30, "C���Դ����ŵ�����");
//	strcpy_s(englishBook.subject, 30, "�ǳ��õ�C���Խ����鼮");
//	englishBook.book_id = 1;
//
//
//
//	strcpy_s(mathBook.author, 30, "����");
//	strcpy_s(mathBook.title, 30, "�����ܼ�");
//	strcpy_s(mathBook.subject, 30, "�ǳ��õ�ѧϰ��ѧ������");
//	mathBook.book_id = 2;
//
//
//		//ֱ��ͨ�����ʳ�Ա��ӡ
//	/*printBook(englishBook);
//
//	printBook(mathBook);*/
//
//	//ͨ��ָ����ʳ�Ա
//
//	printBookByPointer(&englishBook);
//	printBookByPointer(&mathBook);
//
//
//	/*printf("�鼮�����֣�%s\t\n�鼮�����ߣ�%s\t\n�鼮�ĸ�����%s\t \n�鼮id:%d", englishBook.title, englishBook.author, englishBook.subject, englishBook.book_id);
//	printf("�鼮�����֣�%s\t\n�鼮�����ߣ�%s\t\n�鼮�ĸ�����%s\t \n�鼮id:%d", mathBook.title, mathBook.author, mathBook.subject, mathBook.book_id);*/
//
//
//
//	return 0;
//
//
//}
//
//
////��ӡ�鱾��Ϣ
//void printBook( struct Book tempBook) {
//
//	printf("�鼮�����֣�%s\t\n�鼮�����ߣ�%s\t\n�鼮�ĸ�����%s\t \n�鼮id:%d", tempBook.title, tempBook.author, tempBook.subject, tempBook.book_id);
//}
//
//
//void printBookByPointer(struct Book* book)
//{
//
//	printf("�鼮�����֣�%s\t\n�鼮�����ߣ�%s\t\n�鼮�ĸ�����%s\t \n�鼮id:%d", book->title, book->author, book->subject, book->book_id);
//
//}