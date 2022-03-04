#ifndef LIBRARY_MANAGEMENT_H_
#define LIBRARY_MANAGEMENT_H_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct library{
   char bookname[50];
   char author[50];
   int bookid[10];
   int noofpages;
   float price;
}book;
#endif