#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Passageiros.h"
#include "general.h"

int addPassenger(){
    int RepeatTimes = askInt("Type the number of passenger's you pretend to insert: ");
    FILE *File;
    //open file for writing
	File = fopen ("data/passenger.txt", "r+");
	if (File == NULL){
		fprintf(stderr, "\nError opened file\n");
		exit (1);
	}
    typePassenger Passengers[RepeatTimes];

    writeinFile(Passengers, File, RepeatTimes);
	closeFile(File);
}

void writeinFile(typePassenger *passengers, FILE *file, int repeatTimes){
    int i = 0, counter = 0;
	//gets the last id value
    while(fread(&*passengers, sizeof(typePassenger), 1, file))
    {
        counter++;
    }
    printf("sim");
	for (i = 0; i < repeatTimes; i++)
    {
        //get the passenger info
        counter++;
        passengers[i].id = counter;
        printf("\nType the Passengers's nif: ");
        scanf("%d", &passengers[i].nif);
        fflush(stdin);
        printf("\nType the Passengers's name: ");
        gets(passengers[i].firstName);
        fflush(stdin);
        printf("\nType the Passenger's last name: ");
        gets(passengers[i].lastName);
        fflush(stdin);
        //write structure to the file
        fwrite (&passengers[i], sizeof(typePassenger), 1, file);
    }

	if(fwrite != 0)
		printf("\nContents were written to the file successfully !\n");
	else
		printf("\nError writing file contents!\n");
}

int askInt(char *text){
    int value;
    printf("%s", text);
    scanf("%d", &value);
    fflush(stdin);
    return value;
}
