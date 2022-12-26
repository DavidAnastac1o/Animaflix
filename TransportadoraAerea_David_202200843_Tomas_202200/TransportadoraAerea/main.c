#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "options.h"

int main(){
    int choice;
    cloneFile("data/BUpassenger.txt", "data/passenger.txt");
    cloneFile("data/BUaeronaves.txt", "data/aeronaves.txt");

    while(1){
        //call the function
        choice = menu();
        functionCaller(choice);
    }
}

void functionCaller (int Choice){
    switch (Choice){
        case 0:
            printf("\n\tProgram finishing executing...\n\n\n");
            exit(0);
        case 1:
            break;
        case 2:
            break;
        case 3:
            listingPlanes();
            break;
        case 4:
            break;
        case 5:
            addPlane();
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            authorizePlane();
            break;
        case 9:
            break;
        case 10:
            saveFiles();
            break;
        case 11:
            addPassenger();
            break;
        case 12:
            listingPassengers();
            break;
    }
}
