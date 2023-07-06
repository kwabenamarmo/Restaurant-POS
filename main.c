#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Menu item structure
typedef struct
{
    char name[50];
    char description[100];
    float price;
    char category[50];
} MenuItem;

// Order item structure
typedef struct
{
    MenuItem item;
    int quantity;
} OrderItem;

// Order structure
typedef struct
{
    OrderItem items[50];
    int itemCount;
    int isComplete;
} Order;

// Bill structure
typedef struct
{
    Order order;
    float taxes;
    float discount;
} Bill;

// Customer structure
typedef struct
{
    char name[50];
    char contactInfo[100];
    int membershipStatus;
} Customer;

// Function prototypes
void addMenuItem(MenuItem menu[], int *menuSize);
void editMenuItem(MenuItem menu[], int menuSize);
void removeMenuItem(MenuItem menu[], int *menuSize);
void displayMenu(MenuItem menu[], int menuSize);
void takeCustomerOrder(MenuItem menu[], int menuSize, Order *order);
void calculateOrderTotal(Order *order);
void generateOrderTicket(Order *order);
void markOrderComplete(Order *order);
void generateBill(Order *order, Bill *bill);
void calculateTotalRevenue(Order orderHistory[], int orderCount);
void addCustomer(Customer customerList[], int *customerCount);
void editCustomer(Customer customerList[], int customerCount);
void removeCustomer(Customer customerList[], int *customerCount);
void viewCustomerDetails(Customer customerList[], int customerCount);
void viewOrderHistory(Order orderHistory[], int orderCount);
void generateDailyReport(Order orderHistory[], int orderCount);
void generateWeeklyReport(Order orderHistory[], int orderCount);
void generateMonthlyReport(Order orderHistory[], int orderCount);
void identifyPopularItems(Order orderHistory[], int orderCount);
void identifyCustomerPreferences(Order orderHistory[], int orderCount);

int main()
{
    MenuItem menu[100]; // Array to store menu items
    int menuSize = 0;   // Current number of menu items

    Order orderHistory[100]; // Array to store order history
    int orderCount = 0;      // Current number of orders

    Customer customerList[100]; // Array to store customer records
    int customerCount = 0;      // Current number of customers

    int choice;
    do
    {
        printf("\n--- Restaurant Management System ---\n");
        printf("1. Menu Management\n");
        printf("2. Order Processing\n");
        printf("3. Billing\n");
        printf("4. Customer Management\n");
        printf("5. Reporting\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n--- Menu Management ---\n");
            printf("1. Add new menu item\n");
            printf("2. Edit menu item\n");
            printf("3. Remove menu item\n");
            printf("4. Display menu\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                addMenuItem(menu, &menuSize);
                break;
            case 2:
                editMenuItem(menu, menuSize);
                break;
            case 3:
                removeMenuItem(menu, &menuSize);
                break;
            case 4:
                displayMenu(menu, menuSize);
                break;
            default:
                printf("Invalid choice.\n");
            }
            break;

        case 2:
            printf("\n--- Order Processing ---\n");
            printf("1. Take customer order\n");
            printf("2. Mark order as complete\n");
        }