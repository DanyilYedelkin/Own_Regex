#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "zadanie.h"


int main(){
	char str[MAX_LEN];
	printf("Zadaj vstupny retazec: ");
	fgets(str, MAX_LEN, stdin);

	str[strcspn(str, "\n")] = 0;

	printf("\nVstupny retazec: %s, dlzka retazca: %i", str, (int) strlen(str));
	printf("\nStav: %c\n", isAccepted(str) == ACCEPT ? 'A' : 'N');

	return 0;
}
