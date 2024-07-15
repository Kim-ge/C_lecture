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
		printf("1. ���� �б�\n");
		printf("2. �߰�\n");
		printf("3. ���\n");
		printf("4. �˻�\n");
		printf("5. ���� ����\n");
		printf("6. ����\n");
		printf("==========================\n");
		printf("�������� �Է��Ͻÿ� : ");
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
		printf("���� ���� �Ұ�\n");
		return 1;
	}

	while (1) {
		fscanf(fp, "%s %s %s", ptr[*n].title, ptr[*n].author, ptr[*n].publisher);
		if (feof(fp) != 0)
			break;
		(*n)++;
	}
	printf("���� ���� ����!\n");

	fclose(fp);
	return 0;
}

void Addbook(books* ptr, int* n) {
	printf("������ �̸� : ");
	scanf("%s", ptr[*n].title);
	printf("���� : ");
	scanf("%s", ptr[*n].author);
	printf("���ǻ� : ");
	scanf("%s", ptr[*n].publisher);
	(*n)++;

}

void file_print(books* ptr, int* n) {
	int i;
	for (i = 0; i < *n; i++) {
		printf("���� : %s\n", ptr[i].title);
		printf("���� : %s\n", ptr[i].author);
		printf("���ǻ� : %s\n", ptr[i].publisher);
	}
}

int Searchbook(books* ptr, int* n) {
	int i;
	char search[30];

	printf("���� : ");
	scanf("%s", search);

	for (i = 0; i < STORAGE; i++) {
		if (strcmp(search, ptr[i].title) == 0) {
			printf("���ǻ�� %s\n", ptr[i].publisher);
		}
	}
	return 0;
}

int file_write(books* ptr, int* n) {
	int i;
	FILE* fp = fopen("BookManager.txt", "wt");

	if (fp == NULL) {
		printf("���� ���� �Ұ�\n");

		return 1;
	}
	for (i = 0; i < *n; i++) {
		fprintf(fp, "%s %s %s", ptr[i].title, ptr[i].author, ptr[i].publisher);
		fputc('\n', fp);
	}
	printf("���� ���� ����!(%d)\n", count);

	fclose(fp);
	return 0;
}