#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STORAGE 50

typedef struct Books {
	char title[30];
	char author[30];
	char publisher[30];
}books;

int count = 0;
int file_read(books* ptr, int* n);
void Addbook(books* ptr, int* n);
void file_print(books* ptr, int* n);
int Searchbook(books* ptr, int* n);
int file_write(books* ptr, int* n);

int main(void) {
	int choice;
	int book = 0;
	books booklist[STORAGE];

	while (1) {
		printf("==========================\n");
		printf("1. 파일 읽기\n");
		printf("2. 추가\n");
		printf("3. 출력\n");
		printf("4. 검색\n");
		printf("5. 파일 쓰기\n");
		printf("6. 종료\n");
		printf("==========================\n");
		printf("정수값을 입력하시오 : ");
		scanf("%d", &choice);

		if (choice == 1) {
			file_read(booklist, &book);

		}
		else if (choice == 2) {
			count++;
			Addbook(booklist, &book);
		}
		else if (choice == 3) {
			file_print(booklist, &book);
		}
		else if (choice == 4) {
			Searchbook(booklist, &book);
		}
		else if (choice == 5) {
			file_write(booklist, &book);
			count = 0;

		}
		else
			break;
	}
	return 0;
}

int file_read(books* ptr, int* n) {
	*n = 0;
	FILE* fp = fopen("BookManager.txt", "rt");

	if (fp == NULL) {
		printf("파일 오픈 불가\n");
		return 1;
	}

	while (1) {
		fscanf(fp, "%s %s %s", ptr[*n].title, ptr[*n].author, ptr[*n].publisher);
		if (feof(fp) != 0)
			break;
		(*n)++;
	}
	printf("파일 오픈 성공!\n");

	fclose(fp);
	return 0;
}

void Addbook(books* ptr, int* n) {
	printf("도서의 이름 : ");
	scanf("%s", ptr[*n].title);
	printf("저자 : ");
	scanf("%s", ptr[*n].author);
	printf("출판사 : ");
	scanf("%s", ptr[*n].publisher);
	(*n)++;

}

void file_print(books* ptr, int* n) {
	int i;
	for (i = 0; i < *n; i++) {
		printf("제목 : %s\n", ptr[i].title);
		printf("저자 : %s\n", ptr[i].author);
		printf("출판사 : %s\n", ptr[i].publisher);
	}
}

int Searchbook(books* ptr, int* n) {
	int i;
	char search[30];

	printf("제목 : ");
	scanf("%s", search);

	for (i = 0; i < STORAGE; i++) {
		if (strcmp(search, ptr[i].title) == 0) {
			printf("출판사는 %s\n", ptr[i].publisher);
		}
	}
	return 0;
}

int file_write(books* ptr, int* n) {
	int i;
	FILE* fp = fopen("BookManager.txt", "wt");

	if (fp == NULL) {
		printf("파일 오픈 불가\n");

		return 1;
	}
	for (i = 0; i < *n; i++) {
		fprintf(fp, "%s %s %s", ptr[i].title, ptr[i].author, ptr[i].publisher);
		fputc('\n', fp);
	}
	printf("파일 오픈 성공!(%d)\n", count);

	fclose(fp);
	return 0;
}