#include <stdio.h>

int main() {
    printf("...\t\t\t\t\tSHANESREE TOURISM\n");
    printf("REGISTRATION\t\t\t\t\t...\n\n\n");

    int no_of_members, starting_date, returning_date, no_of_days, final = 0, answer;

    printf("Enter the number of passengers: ");
    scanf("%d", &no_of_members);

    for (int i = 1; i <= no_of_members; i++) {
        char name[20], name1[20], gender[10];
        int age;
        double contact_number;

        printf("Enter First Name: ");
        scanf("%s", name);

        printf("Enter Last Name: ");
        scanf("%s", name1);

        printf("Enter Gender: ");
        scanf("%s", gender);

        printf("Enter Age: ");
        scanf("%d", &age);

        printf("Enter Contact Number: ");
        scanf("%lf", &contact_number);

        printf("\n\t\t\t\tPASSENGER'S NAME: %s %s\n", name, name1);
        printf("\t\t\t\tPASSENGER'S GENDER: %s\n", gender);
        printf("\t\t\t\tPASSENGER'S AGE: %d\n", age);
        printf("\t\t\t\tPASSENGER'S CONTACT NUMBER: %.0lf\n", contact_number);
    }

    printf("\n\n....\t\t\t\tTOURIST DESTINATIONS\t\t\t\t....\n\n");
    printf("\t\t\t\t 1. DELHI\n\t\t\t\t 2. KERALA\n");
    printf("\t\t\t\t 3. ANDHRA PRADESH\n\t\t\t\t 4. KASHMIR\n");
    printf("\t\t\t\t 5. GOA\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You have selected DELHI.\n");
        printf("...\t\t\t\t\tAMOUNT\t\t\t\t\t...\n");
        printf("Total Amount: 3000 (Without GST)\n");
        printf("1. Travels: 700\n2. Foods: 1000\n3. Stays: 1300\n");
        printf("4. Services: 300 (Not Compulsory)\n5. GST: 600\n");
        final = 3600;
    } else if (choice == 2) {
        printf("You have selected KERALA.\n");
        printf("...\t\t\t\t\tAMOUNT\t\t\t\t\t...\n");
        printf("Total Amount: 5000 (Without GST)\n");
        printf("1. Travels: 2000\n2. Foods: 1400\n3. Stays: 1400\n");
        printf("4. Services: 300 (Not Compulsory)\n5. GST: 1000\n");
        final = 6000;
    } else if (choice == 3) {
        printf("You have selected ANDHRA PRADESH.\n");
        printf("...\t\t\t\t\tAMOUNT\t\t\t\t\t...\n");
        printf("Total Amount: 5000 (Without GST)\n");
        printf("1. Travels: 2000\n2. Foods: 1400\n3. Stays: 1400\n");
        printf("4. Services: 300 (Not Compulsory)\n5. GST: 1000\n");
        final = 6000;
    } else if (choice == 4) {
        printf("You have selected KASHMIR.\n");
        printf("...\t\t\t\t\tAMOUNT\t\t\t\t\t...\n");
        printf("Total Amount: 4000 (Without GST)\n");
        printf("1. Travels: 1700\n2. Foods: 1000\n3. Stays: 1300\n");
        printf("4. Services: 300 (Not Compulsory)\n5. GST: 800\n");
        final = 4800;
    } else if (choice == 5) {
        printf("You have selected GOA.\n");
        printf("...\t\t\t\t\tAMOUNT\t\t\t\t\t...\n");
        printf("Total Amount: 4500 (Without GST)\n");
        printf("1. Travels: 1700\n2. Foods: 1500\n3. Stays: 1300\n");
        printf("4. Services: 300 (Not Compulsory)\n5. GST: 900\n");
        final = 5400;
    } else {
        printf("Invalid choice. Exiting program.\n");
        return 0;
    }

    printf("Starting Date (DDMMYYYY): ");
    scanf("%d", &starting_date);

    printf("Returning Date (DDMMYYYY): ");
    scanf("%d", &returning_date);

    printf("Number of Days: ");
    scanf("%d", &no_of_days);

    final = final * no_of_days;

    printf("Extra Services Needed:\n1. YES\n2. NO\nEnter Your Choice: ");
    scanf("%d", &answer);

    if (answer == 1) {
        final += 300;
    }

    printf("\nFinal Amount To Be Paid: %d\n", final);
    printf("\n\n...\t\t\t\t\tThank You For Registering.\t\t\t\t\t...\n");

    return 0;
}
