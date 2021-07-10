#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

// variable declaration -> initial stock and price per item
int stockBurger = 0, priceBurger = 160;
int stockPizza = 0, pricePizza = 380;
int stockSandwich = 0, priceSandwich = 45;
int stockCake = 0, priceCake = 95;
int stockIcecream = 0, priceIcecream = 85;
int stockCoffee = 0, priceCoffee = 80;

int bill = 0;
int sales = 0;

// function declaraation
void runApp(void);
char showAppMainMenu(void);
// fuctions for resturant manager and staff
void management(void);
char managementMenu(void); // management menu function
void stockEntry(void);     // stock entry function
void stockDisplay(void);   // view stock function
void priceUpdate(void);    // update price of foods
void priceDisplay(void);   // update price of foods

//function for customers
void showMenu(void);                               // func to show food menu
void orderFood(void);                              // to order food
void serveClacStockPrice(string, int *, int, int); // to serve, calculate stock and price
void serveFood(int, int);                          // to serve the food
void payBill();                                    // to the bill
bool checkStock(int, int);

// Main() function of the program
int main()
{
    stockEntry();
    runApp();
}

/*
* Function definition
*/

// definition of Run Application function
void runApp()
{
    char option;

    // while to run the program infinitly
    while (true)
    {
        option = showAppMainMenu();

        switch (option)
        {
        case '1':
            orderFood();
            break;

        case '2':
            payBill();
            break;

        case 'M':
        case 'm':
            management();
            break;

        case 'Q':
        case 'q':
            exit(0);

        default:
            cout << "\n Invalid input..." << endl;
            getch();
            break;
        }

        // if (option == 'Q' || option == 'q')
        // {
        //     break;
        // }
    }
}

// definition of MainMenu funcion
char showAppMainMenu()
{
    system("cls");

    char choice;

    cout << "\n\t *** Resturant Management ***" << endl
         << " Welcome to our resturant" << endl
         << "\n 1. Order food item" << endl
         << " 2. Pay bill" << endl
         << "\n M. Management" << endl
         << "\n Q. Quit"
         << "\n\n Enter your choice: ";

    cin >> choice;

    return choice;
}

void management()
{
    char option;

    while (true)
    {
        option = managementMenu();

        switch (option)
        {
        case '1':
            stockDisplay();
            break;
        case '2':
            priceDisplay();
            break;
        case '3':
            stockEntry();
            break;
        case '4':
            priceUpdate();
            break;
        case 'H':
        case 'h':
            break;
        case 'Q':
        case 'q':
            exit(0);
        default:
            cout << "\n Invalid input..." << endl;
            getch();
            break;
        }

        if (option == 'H' || option == 'h')
        {
            break;
        }
    }
}

char managementMenu()
{
    system("cls");

    char choice;

    cout << "\n\t *** Resturant Management ***" << endl
         << "\n Total sales: " << sales << endl
         << "\n 1. See Food stock" << endl
         << " 2. See price list" << endl
         << " 3. Stock entry " << endl
         << " 4. Update price" << endl
         << "\n 'H' Goto Main Menu" << endl
         << "\n 'Q' Quit" << endl
         << "\n\n Enter your choice: ";

    cin >> choice;

    return choice;
}

// definition of stock entry function
void stockEntry()
{
    system("cls");

    cout << "\n\t*** Stock Entry ***" << endl
         << " Please enter your food stock " << endl
         << "\n Number of Burger: ";
    cin >> stockBurger;

    cout << " Number of Pizza: ";
    cin >> stockPizza;

    cout << " Number of Sandwich: ";
    cin >> stockSandwich;

    cout << " Number of Cake: ";
    cin >> stockCake;

    cout << " Number of Icecream: ";
    cin >> stockIcecream;

    cout << " Number of Coffee: ";
    cin >> stockCoffee;

    system("cls");

    cout << "\n\t*** Stock Entry ***" << endl
         << " Food Stock updated successfully... " << endl
         << "\n Press any key to continue..." << endl;
    getch();
}

// definition of stock diplay function
void stockDisplay()
{
    system("cls");

    cout << "\n\t*** Food Stock ***" << endl
         << " Your available food stock shown below... " << endl
         << "\n Number of Burger: " << stockBurger << endl
         << " Number of Pizza: " << stockPizza << endl
         << " Number of Sandwich: " << stockSandwich << endl
         << " Number of Cake: " << stockCake << endl
         << " Number of Ice Cream: " << stockIcecream << endl
         << " Number of Coffee: " << stockCoffee << endl
         << "\n Press any key to retrun...";
    getch();
}

void priceUpdate()
{
    system("cls");

    cout << "\n\t*** Food Price list ***" << endl
         << " Please,update your available food price..." << endl
         << "\n Price of Burger: ";
    cin >> priceBurger;

    cout << " Price of Pizza: ";
    cin >> pricePizza;

    cout << " Price of Sandwich: ";
    cin >> priceSandwich;

    cout << " Price of Cake: ";
    cin >> priceCake;

    cout << " Price of Ice Cream: ";
    cin >> priceIcecream;

    cout << " Price of Coffee: ";
    cin >> priceCoffee;

    system("cls");

    cout << "\n\t*** Food Price list ***" << endl
         << " Food price list updated successfully" << endl
         << "\n Press any key to continue..." << endl;
    getch();
}

void priceDisplay()
{
    system("cls");

    cout << "\n\t*** Food Price list ***" << endl
         << " Price of your available food..." << endl
         << "\n Price of Burger: " << priceBurger << endl
         << " Price of Pizza: " << pricePizza << endl
         << " Price of Sandwich: " << priceIcecream << endl
         << " Price of Cake: " << priceCake << endl
         << " Price of Ice Cream: " << priceIcecream << endl
         << " Price of Coffee: " << priceCoffee << endl;

    cout << "\n Press any key to retrun...";
    getch();
}

// definition of menu function
// this will show food menu
void showMenu()
{
    system("cls");

    cout << "\n\t*** Menu Card ***" << endl
         << " Our available food items shown below... " << endl
         << "\n 1. Burger - " << priceBurger << "/- Tk" << endl
         << " 2. Pizza - " << pricePizza << "/- Tk" << endl
         << " 3. Sandwich - " << priceSandwich << "/- Tk" << endl
         << " 4. Cake - " << priceCake << "/- Tk" << endl
         << " 5. Ice Cream - " << priceIcecream << "/- Tk" << endl
         << " 6. Coffee - " << priceCoffee << "/- Tk" << endl;
}

// take order and serve
void orderFood()
{
    int choice, qty[6] = {0, 0, 0, 0, 0, 0}, input, tmpQty = 0;

    while (true)
    {
        showMenu();

        cout << "\n Enter your choice to order: ";
        cin >> choice;

        if (choice <= 6 || choice > 0)
        {
            cout << " Enter the quantity to you want: ";
            cin >> tmpQty;

            qty[choice - 1] = checkStock(choice, tmpQty) ? tmpQty : 0;
        }

        cout << "\n Do you need anything else? Y: Yes / N: No" << endl;

        //test code

        // cout << "\nChoice = " << choice << endl
        //      << "Quantity Array: " << endl;
        // for (int i = 0; i < 6; i++)
        //     cout << i + 1 << ". " << qty[i] << " pcs" << endl;

        //test code

        input = getch();

        if (input == 'N' || input == 'n')
            break;
    }

    for (int i = 0; i < 6; i++)
    {
        if (qty[i] == 0)
            continue;
        else
            serveFood(i + 1, qty[i]);
    }

    cout << "\n\n Press any key to return..." << endl;
    getch();
}

// server ordered food
void serveFood(int choice, int qty)
{
    switch (choice)
    {
    case 1:
        serveClacStockPrice("Burger", &stockBurger, priceBurger, qty);
        break;

    case 2:
        serveClacStockPrice("Pizza", &stockPizza, pricePizza, qty);
        break;

    case 3:
        serveClacStockPrice("Sandwich", &stockSandwich, priceSandwich, qty);
        break;

    case 4:
        serveClacStockPrice("Cake", &stockCake, priceCake, qty);
        break;

    case 5:
        serveClacStockPrice("Ice-Cream", &stockIcecream, priceIcecream, qty);
        break;

    case 6:
        serveClacStockPrice("Coffee", &stockCoffee, priceCoffee, qty);
        break;

    default:
        cout << "\n Invalid input..." << endl;
        cout << "\n Press any key to retrun..." << endl;
        getch();
        break;
    }
}

// serve and calculate stock and price
void serveClacStockPrice(string food, int *stock, int price, int qty)
{
    if (qty != 0)
    {
        if (*stock >= qty)
        {
            *stock -= qty;
            cout << "\n Here is your " << qty << " " << food << ", sir!" << endl;
            bill = bill + (price * qty);
        }
        else
            cout << "\n Sorry, we have only " << qty << " " << food << " available right now " << endl;
    }
}

bool checkStock(int choice, int qty)
{
    int stock;
    string food;

    switch (choice)
    {
    case 1:
        food = "Burger";
        stock = stockBurger;
        break;
    case 2:
        food = "Pizza";
        stock = stockPizza;
        break;
    case 3:
        food = "Sandwich";
        stock = stockSandwich;
        break;
    case 4:
        food = "Cake";
        stock = stockCake;
        break;
    case 5:
        food = "Ice-Cream";
        stock = stockIcecream;
        break;
    case 6:
        food = "Coffee";
        stock = stockCoffee;
        break;

    default:
        break;
    }

    if (stock < qty)
    {
        cout << "\n Sorry, we have only " << qty << " " << food << " available right now " << endl;
        return false;
    }

    return true;
}

// pay the bill
void payBill()
{
    system("cls");

    sales += bill;

    cout << "\n\t *** Payment section ***" << endl
         << "\n\n Your total payable bill is " << bill << "/- Tk." << endl
         << "\n\n Do you want to pay now? \n Y: Yes N: No" << endl;

    bill = 0;

    char input = getch();

    if (input == 'Y' || input == 'y')
    {
        cout << "\n Thank you, sir. Your payment has been taken." << endl
             << "\n\n Have good day! :)"
             << "\n\n Press any key to return..." << endl;
        getch();
    }
}