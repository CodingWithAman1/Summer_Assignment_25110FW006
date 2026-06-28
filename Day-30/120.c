#include <stdio.h>
#include <string.h>

int trainNo[100], seats[100], fare[100], n = 0, pnr = 1000;
char trainName[100][50], source[100][30], destination[100][30];

void addTrain();
void displayTrains();
void searchTrain();
void updateTrain();
void deleteTrain();
void adminMenu();
void passengerMenu();
void bookTicket();
void cancelTicket();
void checkSeats();

int main() {
    int ch;

    do {
        printf("\n====== IRCTC TRAIN TICKETING SYSTEM ====== \n");
        printf("1. Admin\n2. Passenger\n3. Exit\nChoice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                adminMenu();
                break;
            case 2:
                passengerMenu();
                break;
            case 3:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while (ch != 3);

    return 0;
}

void adminMenu() {
    int ch;

    do {
        printf("\n--- ADMIN MENU ---\n");
        printf("1. Add Train\n2. Display Trains\n3. Search Train\n4. Update Train\n5. Delete Train\n6. Back\nChoice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                addTrain();
                break;
            case 2:
                displayTrains();
                break;
            case 3:
                searchTrain();
                break;
            case 4:
                updateTrain();
                break;
            case 5:
                deleteTrain();
                break;
        }
    } while (ch != 6);
}

void passengerMenu() {
    int ch;

    do {
        printf("\n--- PASSENGER MENU ---\n");
        printf("1. View Trains\n2. Search Train\n3. Book Ticket\n4. Cancel Ticket\n5. Check Seats\n6. Back\nChoice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                displayTrains();
                break;
            case 2:
                searchTrain();
                break;
            case 3:
                bookTicket();
                break;
            case 4:
                cancelTicket();
                break;
            case 5:
                checkSeats();
                break;
        }
    } while (ch != 6);
}

void addTrain() {
    printf("Train No: ");
    scanf("%d", &trainNo[n]);

    printf("Train Name: ");
    scanf(" %[^\n]", trainName[n]);

    printf("Source: ");
    scanf(" %[^\n]", source[n]);

    printf("Destination: ");
    scanf(" %[^\n]", destination[n]);

    printf("Seats: ");
    scanf("%d", &seats[n]);

    printf("Fare: ");
    scanf("%d", &fare[n]);

    n++;
}

void displayTrains() {
    int i;

    if (n == 0) {
        printf("No trains.\n");
        return;
    }

    for (i = 0; i < n; i++) {
        printf(
            "\n%d %s\n%s -> %s\nSeats:%d Fare:%d\n",
            trainNo[i],
            trainName[i],
            source[i],
            destination[i],
            seats[i],
            fare[i]
        );
    }
}

void searchTrain() {
    int no, i, f = 0;

    scanf("%d", &no);

    for (i = 0; i < n; i++) {
        if (trainNo[i] == no) {
            printf("%s %s->%s Seats:%d Fare:%d\n",
                   trainName[i], source[i], destination[i], seats[i], fare[i]);
            f = 1;
        }
    }

    if (!f) {
        printf("Train Not Found\n");
    }
}

void updateTrain() {
    int no, i;

    printf("Train No: ");
    scanf("%d", &no);

    for (i = 0; i < n; i++) {
        if (trainNo[i] == no) {
            printf("New Name: ");
            scanf(" %[^\n]", trainName[i]);

            printf("New Source: ");
            scanf(" %[^\n]", source[i]);

            printf("New Destination: ");
            scanf(" %[^\n]", destination[i]);

            printf("New Seats: ");
            scanf("%d", &seats[i]);

            printf("New Fare: ");
            scanf("%d", &fare[i]);

            return;
        }
    }

    printf("Train Not Found\n");
}

void deleteTrain() {
    int no, i, j;

    printf("Train No: ");
    scanf("%d", &no);

    for (i = 0; i < n; i++) {
        if (trainNo[i] == no) {
            for (j = i; j < n - 1; j++) {
                trainNo[j] = trainNo[j + 1];
                seats[j] = seats[j + 1];
                fare[j] = fare[j + 1];
                strcpy(trainName[j], trainName[j + 1]);
                strcpy(source[j], source[j + 1]);
                strcpy(destination[j], destination[j + 1]);
            }
            n--;
            return;
        }
    }

    printf("Train Not Found\n");
}

void bookTicket() {
    int no, t, i;
    char pname[50], gender[10], coach[10], berth[20];
    int age;

    printf("Enter Train No: ");
    scanf("%d", &no);

    for (i = 0; i < n; i++) {
        if (trainNo[i] == no) {
            printf("Passenger Name: ");
            scanf(" %[^\n]", pname);

            printf("Age: ");
            scanf("%d", &age);

            printf("Gender: ");
            scanf("%s", gender);

            printf("Coach (SL/3A/2A): ");
            scanf("%s", coach);

            printf("Berth Preference (LB/MB/UB/SL/SU): ");
            scanf("%s", berth);

            printf("No. of Tickets: ");
            scanf("%d", &t);

            if (t > seats[i]) {
                printf("Waiting List\n");
                return;
            }

            seats[i] -= t;

            printf("\n========== TICKET ========== \n");
            printf("PNR            : %d\n", pnr++);
            printf("Passenger      : %s\n", pname);
            printf("Age            : %d\n", age);
            printf("Gender         : %s\n", gender);
            printf("Train          : %s\n", trainName[i]);
            printf("Route          : %s -> %s\n", source[i], destination[i]);
            printf("Coach          : %s\n", coach);
            printf("Berth Pref.    : %s\n", berth);
            printf("Status         : Confirmed\n");
            printf("Tickets        : %d\n", t);
            printf("Total Fare     : %d\n", t * fare[i]);
            printf("============================ \n");
            return;
        }
    }

    printf("Train Not Found\n");
}

void cancelTicket() {
    int no, t, i;

    printf("Train No: ");
    scanf("%d", &no);

    for (i = 0; i < n; i++) {
        if (trainNo[i] == no) {
            printf("Tickets to Cancel: ");
            scanf("%d", &t);

            seats[i] += t;
            printf("Cancellation Successful\n");
            return;
        }
    }

    printf("Train Not Found\n");
}

void checkSeats() {
    int no, i;

    printf("Train No: ");
    scanf("%d", &no);

    for (i = 0; i < n; i++) {
        if (trainNo[i] == no) {
            printf("Available Seats: %d\n", seats[i]);
            return;
        }
    }

    printf("Train Not Found\n");
}
