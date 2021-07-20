#include <stdio.h>
#include <conio.h>
void main()
{
struct book
{
char author[20],title[20],publication[20];
float price;
int no_pages;
}book1,book2,book3;
clrscr();
printf("Enter the book-1 details: Author,title,price,number of pages,date of publication");
scanf("%s %s %f %d %s",book1.author,book1.title,&book1.price,&book1.no_pages,book1.publication);
printf("Enter the book-2 details: Author,title,price,number of pages,date of publication");
scanf("%s %s %f %d %s",book2.author,book2.title,&book2.price,&book2.no_pages,book2.publication);
printf("Enter the book-3 details: Author,title,price,number of pages,date of publication");
scanf("%s %s %f %d %s",book3.author,book3.title,&book3.price,&book3.no_pages,book3.publication);
if(book1.price>=book2.price && book1.price>=book3.price)
printf("Book-1 has the highest price\nIts details are :\nAuthor = %s\nTitle = %s\nPrice = %.2f\nNumber of pages = %d\nDate of publication = %s\n",book1.author,book1.title,book1.price,book1.no_pages,book1.publication);
else if(book2.price>=book1.price && book2.price>=book3.price)
printf("Book-2 has the highest price\nIts details are :\nAuthor = %s\nTitle = %s\nPrice = %.2f\nNumber of pages = %d\nDate of publication = %s\n",book2.author,book2.title,book2.price,book2.no_pages,book2.publication);
else
printf("Book-3 has the highest price\nIts details are :\nAuthor = %s\nTitle = %s\nPrice = %.2f\nNumber of pages = %d\nDate of publication = %s\n",book3.author,book3.title,book3.price,book3.no_pages,book3.publication);
getch();
}

Output :
Enter the book-1 details: Author,title,price,number of pages,date of publication
Vibha HarryPotter 900 700 1-7-12
Enter the book-2 details: Author,title,price,number of pages,date of publication
Danielle Goosebumps 400 150 24-9-17
Enter the book-3 details: Author,title,price,number of pages,date of publication
Rebekah TheWimpyKid 500 300 15-3-20
Book-1 has the highest price
Its details are :
Author = Vibha
Title = HarryPotter
Price = 900.00
Number of pages = 700
Date of publication = 1-7-12
