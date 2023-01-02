// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){
//     char str[100] = "this is a sentence";
//     char *token = strtok(str," ");
//     // cout<< ;
//     while(token!=NULL){
//         cout<<*token;
//         token = strtok(NULL," ");
//     }
    
//     return 0;
// }
// C program to demonstrate working of strtok_r()
// by splitting string based on space character.
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Geeks for Geeks";
	char* token;
	char* rest = str;

	while ((token = strtok(rest, " ")))
		printf("%s\n", token);

	return (0);
}
