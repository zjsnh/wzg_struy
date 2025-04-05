#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

void menu()
{
	printf("******************************\n");
	printf("**** 1.add          2.del ****\n");
	printf("**** 3.search    4.modify ****\n");
	printf("**** 5.show        6.sort ****\n");
	printf("**** 0.exit               ****\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

int main()
{
	int input = 0;


	do
	{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			break;
		case SORT:
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}