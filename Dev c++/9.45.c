/* DITA AYODYA AL MIRA - D121241008 */
//NOMOR 9.45

#include <stdio.h>

// Define the currency conversion rates
#define NUM_CURRENCIES 10
typedef enum {
    BRITISH_POUND,
    CANADIAN_DOLLAR,
    DUTCH_GUILDER,
    FRENCH_FRANC,
    GERMAN_MARK,
    ITALIAN_LIRA,
    JAPANESE_YEN,
    MEXICAN_PESO,
    SWISS_FRANC,
    US_DOLLAR
} Currency;

typedef struct {
    char name[20];
    double rate; // conversion rate to US dollar
} CurrencyInfo;

CurrencyInfo currencies[NUM_CURRENCIES] = {
    {"British Pound", 0.65},
    {"Canadian Dollar", 1.4},
    {"Dutch Guilder", 1.7},
    {"French Franc", 5.3},
    {"German Mark", 1.5},
    {"Italian Lira", 1570},
    {"Japanese Yen", 98},
    {"Mexican Peso", 3.4},
    {"Swiss Franc", 1.3},
    {"US Dollar", 1}
};

// Function to display the currency menu
void displayMenu() {
    printf("Currency Conversion Menu:\n");
    for (int i = 0; i < NUM_CURRENCIES; i++) {
        printf("%d. %s\n", i + 1, currencies[i].name);
    }
    printf("%d. Quit\n", NUM_CURRENCIES + 1);
}

// Function to convert currency
void convertCurrency(Currency from, Currency to) {
    double rate = currencies[to].rate / currencies[from].rate;
    printf("1 %s = %.4f %s\n", currencies[from].name, rate, currencies[to].name);
}

int main() {
    int choice;
    Currency from, to;

    do {
        displayMenu();
        printf("Enter the number of the first currency: ");
        scanf("%d", &choice);
        from = choice - 1;

        if (from < 0 || from >= NUM_CURRENCIES) {
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        printf("Enter the number of the second currency: ");
        scanf("%d", &choice);
        to = choice - 1;

        if (to < 0 || to >= NUM_CURRENCIES) {
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        convertCurrency(from, to);
    } while (choice != NUM_CURRENCIES + 1);

    return 0;
}
