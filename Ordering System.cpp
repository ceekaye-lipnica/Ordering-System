#include <iostream>
#include <iomanip>
#include <stdlib.h>

//Coded by:
//  BERNADETTE V. NUNEZ
//  CHELSEA KATE M. LIPNICA (Lead Developer)



using namespace std;

void menu ();
void drinks ();
void shake ();
void milktea ();
void coffee ();
void juice ();
void pizza ();
void fries ();
void shawarma ();
void sandwhich ();
void burger ();
void waffle ();
void display ();
void dash ();

int main()
{
   char order, ans;
   int orderlist = 0, quantity = 0;
   float amount [18] = {85, 45, 150, 40, 60, 70, 18, 28, 38, 39, 49, 69, 55, 45, 15, 85, 35, 50};
   float money = 0, total = 0, sum = 0;
   float a, b;


    system ("color 0b");

    cout << "\t    ==========================================" << endl;
    cout << "\t    |    WELCOME TO BERKAYE'S FOOD CORNER    |" << endl;
    cout << "\t    ==========================================" << endl;

    menu ();
    drinks ();

    cout << "\nEnter your order: ";
    cin >> order;

    system ("CLS");

    if (order > 'L'|| order >= '0')

    {

    if (order == 'A' || order == 'a')
    {
        burger ();

        cout << "\nEnter order here: ";
        cin >> orderlist;

    switch (orderlist)
    {
 case 1 :
    cout << "\nYou've ordered Veggie Burger " << endl;
    break;

 case 2 :
    cout << "\nYou've ordered Bacon Burger " << endl;
    break;
case 3 :
    cout << "\nYou've ordered Hungarian Burger " << endl;
    break;
case 4 :
    cout << "\nYou've ordered Salmon Burger " << endl;
    break;
case 5 :
    cout << "\nYou've ordered Chili Burger " << endl;
    break;
    }

    cout << "How many?: ";
    cin >> quantity;

    total = quantity * amount [0];

 cout << "\nTotal Amount: " << total << endl;
 cout << "Enter payment: ";
 cin >> money;

    sum = money - total;

     if(money>=total){

    sum = money - total;

 cout << "\nYour change is " << sum << endl;
    }
    else
    {
        cout << "Not enough payment";
    }
    }

    else if (order == 'B' || order == 'b')
    {
        fries ();

       cout << "\nEnter order here: ";
        cin >> orderlist;


    switch (orderlist)
    {
 case 1 :
    cout << "\nYou've ordered French Fries " << endl;
    break;

 case 2 :
    cout << "\nYou've ordered Sour cream Fries  " << endl;
    break;
case 3 :
    cout << "\nYou've ordered Chili Fries  " << endl;
    break;
case 4 :
    cout << "\nYou've ordered Cheese Fries"  << endl;
    break;
case 5 :
    cout << "\nYou've ordered Barbecue Fries  " << endl;
    break;
    }


 cout << "How many?: ";
 cin >> quantity;

        total = quantity * amount [1];

 cout << "\nTotal Amount: " << total << endl;

 cout << "Enter payment: ";
 cin >> money;

        sum = money - total;

     if(money>=total){

    sum = money - total;

 cout << "\nYour change is " << sum << endl;
    }
    else
    {
        cout << "Not enough payment";
    }
    }

    else if (order == 'C' || order == 'c')
    {
        pizza();

        cout << "\nEnter order here: ";
        cin >> orderlist;

    switch (orderlist)
    {
 case 1 :
    cout << "\nYou've ordered Peperoni Pizza " << endl;
    break;

 case 2 :
    cout << "\nYou've ordered Hawaiian Pizza  " << endl;
    break;
case 3 :
    cout << "\nYou've ordered Veggie Pizza  " << endl;
    break;
case 4 :
    cout << "\nYou've ordered Meaty Pizza"  << endl;
    break;
case 5 :
    cout << "\nYou've ordered Overload Pizza " << endl;
    break;
    }
    cout << "How many?: ";
    cin >> quantity;

    total = quantity * amount [2];


 cout << "\nTotal Amount: " << total << endl;

 cout << "Enter payment: ";
 cin >> money;

    sum = money - total;

     if(money>=total){

    sum = money - total;

 cout << "\nYour change is " << sum << endl;
    }
    else
    {
        cout << "Not enough payment";
    }
    }

    else if (order == 'D' || order == 'd')
    {
        shawarma();

        cout << "\nEnter order here: ";
        cin >> orderlist;

    cout << "How many?: ";
    cin >> quantity;

    switch (orderlist)
    {
 case 1 :
    cout << "\nYou've ordered Small Sized Shawarma " << endl;
    total = quantity * amount [3];
    break;

 case 2 :
    cout << "\nYou've ordered Medium Sized Shawarma   " << endl;
    total = quantity * amount [4];
    break;
case 3 :
    cout << "\nYou've ordered Large Sized Shawarma  " << endl;
    total = quantity * amount [5];
    break;
    }

 cout << "\nTotal Amount: " << total << endl;
 cout << "Enter payment: ";
 cin >> money;

    sum = money - total;

     if(money>=total){

    sum = money - total;

 cout << "\nYour change is " << sum << endl;
    }
    else
    {
        cout << "Not enough payment";
    }
    }

    else if (order == 'E' || order == 'e')
    {
        sandwhich();

        cout << "\nEnter order here: ";
        cin >> orderlist;

        cout << "How many?: ";
        cin >> quantity;

    switch (orderlist)
    {
 case 1 :
    cout << "\nYou've ordered Small Sized Sandwhich " << endl;
    total = quantity * amount [6];
    break;

 case 2 :
    cout << "\nYou've ordered Medium Sized Sandwhich   " << endl;
    total = quantity * amount [7];
    break;
case 3 :
    cout << "\nYou've ordered Large Sized Sandwhich  " << endl;
    total = quantity * amount [8];
    break;
    }

 cout << "\nTotal Amount: " << total << endl;
 cout << "Enter payment: ";
 cin >> money;

    sum = money - total;

     if(money>=total){

    sum = money - total;

 cout << "\nYour change is " << sum << endl;
    }
    else
    {
        cout << "Not enough payment";
    }
    }

    else if (order == 'F' || order == 'f')
    {
        waffle();

        cout << "\nEnter order here: ";
        cin >> orderlist;

        cout << "How many?: ";
        cin >> quantity;


    switch (orderlist)
    {
 case 1 :
    cout << "\nYou've ordered Small Sized Waffles " << endl;
    total = quantity * amount [9];
    break;

 case 2 :
    cout << "\nYou've ordered Medium Sized Waffles   " << endl;
    total = quantity * amount [10];
    break;
case 3 :
    cout << "\nYou've ordered Large Sized Waffles  " << endl;
    total = quantity * amount [11];
    break;
    }

 cout << "\nTotal Amount: " << total << endl;
 cout << "Enter payment: ";
 cin >> money;

    sum = money - total;

     if(money>=total){

    sum = money - total;

 cout << "\nYour change is " << sum << endl;
    }
    else
    {
        cout << "Not enough payment";
    }
    }

    else if (order == 'G' || order == 'g')
    {
        cout << "\nYou've ordered Nachos " << endl;
        cout << "How many?: ";
        cin >> quantity;

    total = quantity * amount [12];

 cout << "\nTotal Amount: " << total << endl;

 cout << "Enter payment: ";
 cin >> money;

    sum = money - total;

     if(money>=total){

    sum = money - total;

 cout << "\nYour change is " << sum << endl;
    }
    else
    {
        cout << "Not enough payment";
    }
    }

    else if (order == 'H' || order == 'h')
    {
        shake();

        cout << "\nEnter order here: ";
        cin >> orderlist;

    switch (orderlist)
    {
 case 1 :
    cout << "\nYou've ordered Cookies N' Cream Shake " << endl;
    break;

 case 2 :
    cout << "\nYou've ordered Black Forest Shake  " << endl;
    break;
case 3 :
    cout << "\nYou've ordered Coffee Crumble Shake  " << endl;
    break;
case 4 :
    cout << "\nYou've ordered Rocky Road Shake"  << endl;
    break;
case 5 :
    cout << "\nYou've ordered Double Dutch Shake  " << endl;
    break;
    }
        cout << "How many?: ";
        cin >> quantity;

    total = quantity * amount [13];

 cout << "\nTotal Amount: " << total << endl;
 cout << "Enter payment: ";
 cin >> money;

    sum = money - total;

     if(money>=total){

    sum = money - total;

 cout << "\nYour change is " << sum << endl;
    }
    else
    {
        cout << "Not enough payment";
    }
    }

    else if (order == 'I' || order == 'i')
    {
        cout << "\nYou've ordered water " << endl;
        cout << "How many?: ";
        cin >> quantity;

    total = quantity * amount [14];

 cout << "\nTotal Amount: " << total << endl;

 cout << "Enter payment: ";
 cin >> money;

    sum = money - total;

     if(money>=total){

    sum = money - total;

 cout << "\nYour change is " << sum << endl;
    }
    else
    {
        cout << "Not enough payment";
    }
    }
    else if (order == 'J' || order == 'j')
    {
        milktea ();

        cout << "\nEnter order here: ";
        cin >> orderlist;

    switch (orderlist)
    {
 case 1 :
    cout << "\nYou've ordered Winter Melon Milktea " << endl;
    break;

 case 2 :
    cout << "\nYou've ordered Matcha Milktea  " << endl;
    break;
case 3 :
    cout << "\nYou've ordered Caramel Milktea  " << endl;
    break;
case 4 :
    cout << "\nYou've ordered Red Velvet Milktea"  << endl;
    break;
case 5 :
    cout << "\nYou've ordered Taro Milktea  " << endl;
    break;
    }
        cout << "How many?: ";
        cin >> quantity;

    total = quantity * amount [15];

 cout << "\nTotal Amount: " << total << endl;

 cout << "Enter payment: ";
 cin >> money;

    sum = money - total;

     if(money>=total){

    sum = money - total;

 cout << "\nYour change is " << sum << endl;
    }
    else
    {
        cout << "Not enough payment";
    }
    }

    else if (order == 'K' || order == 'k')
    {
        juice ();

        cout << "\nEnter order here: ";
        cin >> orderlist;

    switch (orderlist)
    {
 case 1 :
    cout << "\nYou've ordered Lychee Juice " << endl;
    break;

 case 2 :
    cout << "\nYou've ordered Buko Juice  " << endl;
    break;
case 3 :
    cout << "\nYou've ordered Mango Juice " << endl;
    break;
case 4 :
    cout << "\nYou've ordered Melon Juice"  << endl;
    break;
case 5 :
    cout << "\nYou've ordered Lemon Juice  " << endl;
    break;
    }
        cout << "How many?: ";
        cin >> quantity;

    total = quantity * amount [16];

 cout << "\nTotal Amount: " << total << endl;

 cout << "Enter payment: ";
 cin >> money;

    sum = money - total;

     if(money>=total){

    sum = money - total;

 cout << "\nYour change is " << sum << endl;
    }
    else
    {
        cout << "Not enough payment";
    }
    }

    else if (order == 'L' || order == 'l')
    {

       coffee ();

        cout << "\nEnter order here: ";
        cin >> orderlist;

    switch (orderlist)
    {
 case 1 :
    cout << "\nYou've ordered French Vanilla " << endl;
    break;

 case 2 :
    cout << "\nYou've ordered Caramel Macchiato  " << endl;
    break;
case 3 :
    cout << "\nYou've ordered Black Coffee  " << endl;
    break;
case 4 :
    cout << "\nYou've ordered Mocha"  << endl;
    break;
case 5 :
    cout << "\nYou've ordered Hazelnut  " << endl;
    break;
    }
        cout << "How many?: ";
        cin >> quantity;

    total = quantity * amount [17];

 cout << "\nTotal Amount: " << total << endl;

 cout << "Enter payment: ";
 cin >> money;
    if(money>=total){

    sum = money - total;

 cout << "\nYour change is " << sum << endl;
    }
    else
    {
        cout << "Not enough payment";
    }
    }

    else
    {
            cout << "\n\nWrong input of order. Try Again!" << endl;
    }
    }

    dash();

    cout << "\n\nDo you want to order again? Type (Y) or (N): ";
    cin >> ans;

    system ("CLS");

    if (ans == 'Y' || ans == 'y' )
    {
        main ();
    }
    else
    {
         display ();
    }

    return 0;
}

void menu()
{
    cout << "\n\t\t\t>>> MENU LIST <<<    " << endl;
    cout << "\t\t(A)" << setw(10) << " BURGER " << setw(20) << "85.00" << endl;
    cout << "\t\t(B)" << setw(10) << " FRENCH FRIES "<< setw(16) << "45.00" << endl;
    cout << "\t\t(C)" << setw(10) << " PIZZA " << setw(20) << "150.00"<< endl;
    cout << "\t\t(D)" << setw(10) << " SHAWARMA " <<setw(20)<< "40.00-70.00" << endl;
    cout << "\t\t(E)" << setw(10) << " SANDWHICH " << setw(19) << "18.00-38.00"<< endl;
    cout << "\t\t(F)" << setw(10) << " WAFFLES " << setw(20) << "39.00-69.00" << endl;
    cout << "\t\t(G)" << setw(10) << " NACHOS " << setw(20) << "55.00"<< endl;

}

void drinks()
{
    cout << " \n\n\t\t\t>>> BEVERAGES <<<     " << endl;
    cout << "\t\t(H)" << setw(10) << " SHAKE " << setw(20)<< "45.00" << endl;
    cout << "\t\t(I)" << setw(10) << " WATER" << setw(20)<< "15.00"<< endl;
    cout << "\t\t(J)" << setw(10) << " MILKTEA " << setw(20)<< "85.00"<< endl;
    cout << "\t\t(K)" << setw(10) << " JUICE" << setw(20)<< "35.00"<< endl;
    cout << "\t\t(L)" << setw(10) << " COFFEE " << setw(20)<< "50.00"<< endl;
}

void shake ()
{
    cout << "\nSHAKE OPTION: " << endl;
    cout << "(1)" << setw(5) << "COOKIES N' CREAM " << endl;
    cout << "(2)" << setw(5) << "BLACK FOREST " << endl;
    cout << "(3)" << setw(5) << " COFFEE CRUMBLE" << endl;
    cout << "(4)" << setw(5) << " ROCKY ROAD" << endl;
    cout << "(5)" << setw(5) << " DOUBLE DUTCH" << endl;
}

void milktea()
{
    cout << "\nMILKTEA OPTION: " << endl;
    cout << "(1)" << setw(5) << " WINTERMELON " << endl;
    cout << "(2)" << setw(5) << " MATCHA " << endl;
    cout << "(3)" << setw(5) << " CARAMEL" << endl;
    cout << "(4)" << setw(5) << " RED VELVET" << endl;
    cout << "(5)" << setw(5) << " TARO" << endl;
}

void juice ()
{
    cout << "\nJUICE OPTION: " << endl;
    cout << "(1)" << setw(5) << " LYCHEE " << endl;
    cout << "(2)" << setw(5) << " BUKO " << endl;
    cout << "(3)" << setw(5) << " MANGO" << endl;
    cout << "(4)" << setw(5) << " MELON" << endl;
    cout << "(5)" << setw(5) << " LEMON" << endl;
}

void coffee ()
{
    cout << "\nCOFFEE OPTION: " << endl;
    cout << "(1)" << setw(5) << " FRENCH VANILLA" << endl;
    cout << "(2)" << setw(5) << " CARAMEL MACCHIATO " << endl;
    cout << "(3)" << setw(5) << " BLACK COFFEE" << endl;
    cout << "(4)" << setw(5) << " MOCHA" << endl;
    cout << "(5)" << setw(5) << " HAZELNUT" << endl;
}

void pizza ()
{
    cout << "\nPIZZA OPTION: " << endl;
    cout << "(1)" << setw(5) << " PEPERONI PIZZA " << endl;
    cout << "(2)" << setw(5) << " HAWAIIAN PIZZA " << endl;
    cout << "(3)" << setw(5) << " VEGGIE PIZZA " << endl;
    cout << "(4)" << setw(5) << " MEATY PIZZA " << endl;
    cout << "(5)" << setw(5) << " OVERLOAD PIZZA" << endl;
}

void fries ()
{
    cout << "\nFRENCH FRIES OPTIONS: " << endl;
    cout << "(1)" << setw(5) << " PLAIN " << endl;
    cout << "(2)" << setw(5) << " SOURCREAM " << endl;
    cout << "(3)" << setw(5) << " CHILI " << endl;
    cout << "(4)" << setw(5) << " CHEESE " << endl;
    cout << "(5)" << setw(5) << " BARBECUE" << endl;
}

void shawarma ()
{
    cout << "\nSHAWARMA SIZES: " << endl;
    cout << "(1)" << setw(5) << " SMALL " << setw(20) << "40.00"<< endl;
    cout << "(2)" << setw(5) << " MEDIUM " << setw(19) << "60.00"<< endl;
    cout << "(3)" << setw(5) << " LARGE " << setw(20) << "70.00"<< endl;
}

void sandwhich ()
{
    cout << "\nSANDWICH SIZES: " << endl;
    cout << "(1)" << setw(5) << " SMALL "<< setw(20)<<"18.00" << endl;
    cout << "(2)" << setw(5) << " MEDIUM"<< setw(20) << "28.00"<< endl;
    cout << "(3)" << setw(5) << " LARGE " << setw(20)<<"38.00"<< endl;

}

void burger ()
{
    cout << "\nBURGER OPTIONS:  " << endl;
    cout << "(1)" << setw(5) << " VEGGIE BURGER " << endl;
    cout << "(2)" << setw(5) << " BACON BURGER " << endl;
    cout << "(3)" << setw(5) << " HUNGARIAN BURGER " << endl;
    cout << "(4)" << setw(5) << " SALMON BURGER " << endl;
    cout << "(5)" << setw(5) << " CHILI BURGER " << endl;
}

void waffle()
{
    cout << "\nWAFFLE SIZES: " << endl;
    cout << "(1)" << setw(5) << " SMALL " << setw(20) << "39.00"<< endl;
    cout << "(2)" << setw(5) << " MEDIUM " << setw(19) << "49.00"<< endl;
    cout << "(3)" << setw(5) << " LARGE " << setw(20) << "69.00"<< endl;
}

void display ()
{
    cout << "\n\n >> Your order will arrived at 10 minutes." << endl;

    cout << "\n\n================================================" << endl;
    cout << "|   Thank you for ordering. Please come again! |" << endl;
    cout << "================================================" << endl;

}

void dash ()
{
    cout << "\n==================================================" << endl;
}

