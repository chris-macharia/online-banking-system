/*
 ============================================================================
 Name        : online-banking-system.c
 Author      : chris-macharia
 Version     :
 Copyright   : free-software!!
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct user
{
	char phone[50];
	char account[50];
	char password[50];
	float balance;
};

int main(void)
{
	struct user usr;
	int opt=0;

	/*Prompting the user*/
	printf("\n Please select one of the above: ");
	printf("\n\n1.Register an account.\t");
	printf("\n2.Login to an account.");

	printf("\n\nYour choice:\t ");

	/*Getting user input*/
	scanf("%d",&opt);

	if(opt == 1)
	{
		system("cls");
		printf("\nEnter your account number:\t");
		scanf("%s", usr.account);
		printf("\nEnter your phone number: \t");
		scanf("%s", usr.phone);
		printf("\nEnter your new password:\t");
		scanf("%s",usr.password);
		usr.balance = 0;
	}

	return EXIT_SUCCESS;
}
