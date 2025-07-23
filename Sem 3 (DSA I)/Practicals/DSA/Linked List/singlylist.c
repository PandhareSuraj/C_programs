#include "singlylist.h"

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Create List\n");
        printf("2. Display List\n");
        printf("3. Delete a Node\n");
        printf("4. Insert at Start\n");
        printf("5. Search an Element\n");
        printf("6. Reverse List\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                display(start);
                break;
            case 3:
                deletefunc();
                break;
            case 4:
                insertatstart();
                break;
            case 5:
                search();
                break;
            case 6:
                start = reverse(start);
                printf("Reversed list: ");
                display(start);
                break;
            case 7:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}
