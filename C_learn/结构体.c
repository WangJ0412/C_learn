#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct Books{
//	char title[50];
//	char author[50];
//	char subject[100];
//	int book_id;
//}book = { "C 语言", "RUNOOB", "编程语言", 123456 };
//
//int main()
//{
//	printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);
//}
//#include <stdio.h>
//#include <string.h>
//
//struct Books
//{
//	char title[50];
//	char author[50];
//	char subject[100];
//	int book_id;
//};
//
//int main()
//{
//	struct Books Book1; /* 声明 Book1，类型为 Books */
//	struct Books Book2; /* 声明 Book2，类型为 Books */
//
//	/* Book1 详述 */
//	strcpy(Book1.title, "C Programming");
//	strcpy(Book1.author, "Nuha Ali");
//	strcpy(Book1.subject, "C Programming Tutorial");
//	Book1.book_id = 6495407;
//
//	/* Book2 详述 */
//	strcpy(Book2.title, "Telecom Billing");
//	strcpy(Book2.author, "Zara Ali");
//	strcpy(Book2.subject, "Telecom Billing Tutorial");
//	Book2.book_id = 6495700;
//
//	/* 输出 Book1 信息 */
//	printf("Book 1 title : %s\n", Book1.title);
//	printf("Book 1 author : %s\n", Book1.author);
//	printf("Book 1 subject : %s\n", Book1.subject);
//	printf("Book 1 book_id : %d\n", Book1.book_id);
//
//	/* 输出 Book2 信息 */
//	printf("Book 2 title : %s\n", Book2.title);
//	printf("Book 2 author : %s\n", Book2.author);
//	printf("Book 2 subject : %s\n", Book2.subject);
//	printf("Book 2 book_id : %d\n", Book2.book_id);
//
//	return 0;
//}


#include <stdio.h>
#include <string.h>

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int  book_id;
};

/* 函数声明 */
void printBook(struct Books *book);
int main()
{
	struct Books Book1; /* 声明 Book1，类型为 Books */
	struct Books Book2; /* 声明 Book2，类型为 Books */

	/* Book1 详述 */
	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "Nuha Ali");
	strcpy(Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;

	/* Book2 详述 */
	strcpy(Book2.title, "Telecom Billing");
	strcpy(Book2.author, "Zara Ali");
	strcpy(Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id = 6495700;
	printf("%d\n",&Book1.book_id);
	/* 通过传 Book1 的地址来输出 Book1 信息 */
	printBook(&Book1);

	/* 通过传 Book2 的地址来输出 Book2 信息 */
	printBook(&Book2);

	return 0;
}
void printBook(struct Books *book)
{
	printf("Book title : %s\n", book->title);
	printf("Book author : %s\n", book->author);
	printf("Book subject : %s\n", book->subject);
	printf("Book book_id : %d\n", book->book_id);
}