/*
 * crypt.c
 * 
 * Copyright 2016 Franz Habison <habison.franz@gmx.at>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

void selection(void);
int encrypt(void);
int decrypt(void);
int encrypt_view(void);
int decrypt_view(void);

FILE *fp1, *fp2;
char ch;


void selection(void)
{
	int choice;
	while(choice != 5)
	{
		printf("Select one of the following:\n");
		printf("\n1. Encrypt\n");
		printf("2. Decrypt\n");
		printf("3. View the encrypted file\n");
		printf("4. View the decrypted file\n");
		printf("5. Exit\n");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				encrypt();
				break;
			case 2:
				decrypt();
				break;
			case 3:
				encrypt_view();
				break;
			case 4:
				decrypt_view();
				break;
			case 5:
				// Exit
				break;
			default:
				// nix
				break;
		}
	}
	
	printf("\n");
}

int encrypt(void)
{
	fp1 = fopen("crypt.c", "r");
	if (fp1 == NULL)
		printf("Source File could not be found\n");
	
	fp2 = fopen("testcrypt.txt", "w");
	if (fp2 == NULL)
		printf("Target file could not be found");
	
	while(1)
	{
		ch = fgetc(fp1);
		if (ch == EOF)
		{
			printf("\nEnd of file\n");
			break;
		}
		else
		{
			ch = ch - (8 * 5 - 3);
			fputc(ch, fp2);
		}
	}
	
	fclose(fp1);
	fclose(fp2);
	printf("\n");
	return 0;
}

int encrypt_view(void)
{
	fp1 = fopen("testcrypt.txt", "r");
	if (fp1 == NULL)
		printf("File not found\n");
	
	while(1)
	{
		ch = fgetc(fp1);
		if (ch == EOF)
		{
			printf("\nEnd of file\n");
			break;
		}
		else
		{
			printf("%c", ch);
		}
	}
	
	fclose(fp1);
	printf("\n");
	return 0;
}

int decrypt(void)
{
	fp1 = fopen("testcrypt.txt", "r");
	if (fp1 == NULL)
		printf("Source File could not be found\n");
	
	fp2 = fopen("testdecrypt.txt", "w");
	if (fp2 == NULL)
		printf("Target file could not be found");
	
	while(1)
	{
		ch = fgetc(fp1);
		if (ch == EOF)
		{
			printf("\nEnd of file\n");
			break;
		}
		else
		{
			ch = ch + (8 * 5 - 3);
			fputc(ch, fp2);
		}
	}
	
	fclose(fp1);
	fclose(fp2);
	printf("\n");
	return 0;
}

int decrypt_view(void)
{
	fp1 = fopen("testdecrypt.txt", "r");
	if (fp1 == NULL)
		printf("File not found\n");
	
	while(1)
	{
		ch = fgetc(fp1);
		if (ch == EOF)
		{
			printf("\nEnd of file\n");
			break;
		}
		else
		{
			printf("%c", ch);
		}
	}
	
	fclose(fp1);
	printf("\n");
	return 0;
}

int main(int argc, char **argv)
{
	selection();
	
	return 0;
}


















