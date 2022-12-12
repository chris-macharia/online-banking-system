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

int main(void) //=============================================================================================================================//
{
	setvbuf(stdout, NULL, _IONBF, 0); /*Eclipse IDE misb-ehaves when trying to run the program. This line will fix the buffer error causing that.*/

	struct user usr;
	int opt=0;
	FILE *fp;
	char filename[50], phone[50], pword[50];


	/*Prompting the user*/
	printf("\n Please select one of the above: ");
	printf("\n\n1.Register an account.\t");
	printf("\n2.Login to an account.");

	printf("\n\nYour choice:\t ");

	/*Getting user input*/
	scanf("%d",&opt);
	if(opt == 1)
	{
		system("clear");
		printf("\nEnter your account number:\t");
		scanf("%s", usr.account);
		printf("\nEnter your phone number: \t");
		scanf("%s", usr.phone);
		printf("\nEnter your new password:\t");
		scanf("%s",usr.password);
		usr.balance = 0;

		/*Saving the new account*/
		strcpy(filename, usr.phone);
		fp = fopen(strcat(filename,".txt"), "w");
		fwrite(&usr, sizeof(struct user), 1, fp);
		if(fwrite != 0)
		{
			printf("\nAccount successfully registered");
		}
		else
		{
			printf("\n\nSomething went wrong please try again.");
		}
		fclose(fp);
	}
	if(opt == 2)
	{
		/*Getting the phone number and the password from the user*/
		system("clear");
		printf("\nPhone number:\n\t");
		scanf("%s", phone);
		printf("\nPassword:\t");
		scanf("%s", pword);
		strcpy(filename, phone);
		fp = fopen(strcat(filename, ".txt"), "r");
		if(fp == NULL)
		{
			printf("\nAccount number not registered!");
		}
		else
		{
			fread(&usr, sizeof(struct user), 1, fp);
			fclose(fp);

			/*Matching the passwords*/
			if(!strcmp(pword,usr.password))  /*Will return 0*/
			{
				printf("\nPassword matched");

			}
			else
			{
				printf("\nInvalid password");
			}
		}


	}


	return EXIT_SUCCESS;
}
