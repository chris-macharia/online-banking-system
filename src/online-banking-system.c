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
#include <stdlib.h>
#include <string.h>

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

	printf("\n Please select one of the above: ");
	printf("\n\n1.Register an account.");
	printf("\n2.Login to an account.");
	return EXIT_SUCCESS;
}
