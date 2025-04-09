#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"

void menu()
{
	printf("\n");
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

	Contact con;
	//此时通讯录中的data和sz都是随机值，应该初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
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