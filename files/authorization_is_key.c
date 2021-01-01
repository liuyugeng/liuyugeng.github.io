// gcc authorization_is_key.c -O0 -fstack-protector -no-pie -o authorization_is_key
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_LEN 20 

void init() {
	/* this disabled stream buffering. 
	* You can safely ignore this function as there is no vuln in here */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	}

void print_secret() {
	char flagbuf[255] = {0};
	FILE* fd = fopen("flag", "r");
	fread(flagbuf, 255, 1, fd);
	printf("The Flag is: %s\n", flagbuf);
}

void check_credentials(char* username, char* password, int* is_authenticated) {
	//TODO: implement credential checking
	*is_authenticated = 0;
}

int main() {
	int attempts = 3;
	char username[MAX_LEN] = {0};
	char password[MAX_LEN] = {0};
	int is_authenticated;
	int* is_authenticated_ptr = &is_authenticated;
	init();

	while (attempts) {
		printf("Username:\n");
		scanf("%20s", username);
		printf("Password:\n");
		scanf("%20s", password);
		check_credentials(username, password, is_authenticated_ptr);
		printf("Checked credentials for user ");
		printf(username);
		printf(".\n");
		if (is_authenticated) {
			printf("Welcome!\n");
			print_secret();
			return 0;
		} 
		else {
			printf("Invalid Password! %d attempts left!\n", --attempts);
		}
		memset(username, '\0', sizeof(username));
		memset(password, '\0', sizeof(password));
	}
	return 0;
}
