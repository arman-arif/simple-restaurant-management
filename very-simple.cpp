#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    int purchase_pizza = 0, purchase_burger = 0, purchase_sandwich = 0, purchase_icecream = 0, purchase_cake = 0;
    int sales_pizza = 0, sales_burger = 0, sales_sandwich = 0, sales_icecream = 0, sales_cake = 0;
    int pizza = 0, burger = 0, sandwich = 0, icecream = 0, cake = 0;
    int choice, quantity;

    cout << "\n\t\t\tPurchase Items";
    cout << "\n\n Number of Pizza :";
    cin >> purchase_pizza;
    cout << "\n\n Number of Burger:";
    cin >> purchase_burger;
    cout << "\n\n Number of Sandwich :";
    cin >> purchase_sandwich;
    cout << "\n\n Number of Ice-Cream :";
    cin >> purchase_icecream;
    cout << "\n\n Number of Cake :";
    cin >> purchase_cake;

    while (true)
    {
        system("cls");
        cout << "\n\t\tControl Panel ";
        cout << "\n\n 1.Pizza ";
        cout << "\n 2.Burger ";
        cout << "\n 3.Sandwich";
        cout << "\n 4.Ice-Cream ";
        cout << "\n 5.Cake ";
        cout << "\n 6.Details";
        cout << "\n 7.Exit ";
        cout << "\n\n Enter Your Choice :";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n\n Enter Pizza Quantity :";
            cin >> quantity;
            if (purchase_pizza - sales_pizza >= quantity)
            {
                sales_pizza += quantity;
                pizza += quantity * 400;
                cout << "\n\n\n\t\t\t" << quantity << " Pizza Sales Thank You !!!";
            }
            else
                cout << "\n\n\t\t\tSorry " << purchase_pizza - sales_pizza << " Pizza Remaining in Restaurant ...";
            break;

        case 2:
            cout << "\n\n Enter Burger Quantity :";
            cin >> quantity;
            if (purchase_burger - sales_burger >= quantity)
            {
                sales_burger += quantity;
                burger += quantity * 200;
                cout << "\n\n\n\t\t\t" << quantity << " Burger Sales Thank You !!!";
            }
            else
                cout << "\n\n\t\t\tSorry " << purchase_burger - sales_burger << " Burger Remaining in Restaurant ...";
            break;

        case 3:
            cout << "\n\n Enter Sandwich Quantity :";
            cin >> quantity;
            if (purchase_sandwich - sales_sandwich >= quantity)
            {
                sales_sandwich += quantity;
                sandwich += quantity * 100;
                cout << "\n\n\n\t\t\t" << quantity << " Sandwich Sales Thank You !!!";
            }
            else
                cout << "\n\n\t\t\tSorry " << purchase_sandwich - sales_sandwich << " Sandwich Remaining in Restaurant ...";
            break;

        case 4:
            cout << "\n\n Enter Ice-Cream Quantity :";
            cin >> quantity;
            if (purchase_icecream - sales_icecream >= quantity)
            {
                sales_icecream += quantity;
                icecream += quantity * 150;
                cout << "\n\n\n\t\t\t" << quantity << " Ice-Cream Sales Thank You !!!";
            }
            else
                cout << "\n\n\t\t\tSorry " << purchase_icecream - sales_icecream << " Ice-Cream Remaining in Restaurant ...";
            break;

        case 5:
            cout << "\n\n Enter Cake Quantity :";
            cin >> quantity;
            if (purchase_cake - sales_cake >= quantity)
            {
                sales_cake += quantity;
                cake += quantity * 700;
                cout << "\n\n\n\t\t\t" << quantity << " Cake Sales Thank You !!!";
            }
            else
                cout << "\n\n\t\t\tSorry " << purchase_cake - sales_cake << " Cake Remaining in Restaurant ...";
            break;

        case 6:
            system("cls");
            cout << "\n\t\t\tDetails Panel";
            cout << "\n\n Purchase Pizza Quantity :" << purchase_pizza;
            cout << "\n Sales Pizza Quality :" << sales_pizza;
            cout << "\n Remaining Pizza Quantity :" << purchase_pizza - sales_pizza;
            cout << "\n Total Pizza Sale Price in a Day :" << pizza;

            cout << "\n\n Purchase Burger Quantity :" << purchase_burger;
            cout << "\n Sales Burger Quality :" << sales_burger;
            cout << "\n Remaining Burger Quantity :" << purchase_burger - sales_burger;
            cout << "\n Total Burger Sale Price in a Day :" << burger;

            cout << "\n\n Purchase Sandwich Quantity :" << purchase_sandwich;
            cout << "\n Sales Sandwich Quality :" << sales_sandwich;
            cout << "\n Remaining Sandwich Quantity :" << purchase_sandwich - sales_sandwich;
            cout << "\n Total Sandwich Sale Price in a Day :" << sandwich;

            cout << "\n\n Purchase Ice-Cream Quantity :" << purchase_icecream;
            cout << "\n Sales Ice-CreAM Quality :" << sales_icecream;
            cout << "\n Remaining Ice-Cream Quantity :" << purchase_icecream - sales_icecream;
            cout << "\n Total Ice-Cream Sale Price in a Day :" << icecream;

            cout << "\n\n Purchase Cake Quantity :" << purchase_cake;
            cout << "\n Sales Cake Quality :" << sales_cake;
            cout << "\n Remaining Cake Quantity :" << purchase_cake - sales_cake;
            cout << "\n Total Cake Sale Price in a Day :" << cake;

            cout << "\n\n\n Total Day Price :" << pizza + burger + sandwich + icecream + cake;

            break;

        case 7:
            exit(0);

        default:
            cout << "\n\n Invalid Value>>...Please Try Again...";
            break;
        }
        getch();
    }

    //goto p;
}
