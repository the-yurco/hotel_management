#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;

    //quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;

    //food item sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;

    //total prize of items
    int Total_room = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout << "\n\t quantity of items we have";
    cout << "\n Rooms avaible: ";
    cin >> Qrooms;
    cout << "\n Quality of pasta: ";
    cin >> Qpasta;
    cout << "\n Quantity of burger: ";
    cin >> Qburger;
    cout << "\n Quantity of noodles: ";
    cin >> Qnoodles;
    cout << "\n Quantity of shake: ";
    cin >> Qshake;
    cout << "\n Quantity of chicken-roll: ";
    cin >> Qchicken;

    cout << "\n\t\t\t Please select from the menu options ";
    cout << "n\n1) Rooms";
    cout << "\n2 ) Pasta";
    cout << "\n3 ) Burger";
    cout << "\n4 ) ";
    cout << "\n5 ) shake";
    cout << "\n6 ) Chicken-roll";
    cout << "\n7 ) Information regarding sales and collection ";
    cout << "\n8 ) Exit";

    cout << "\n\n Please Enter your choice !";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the number of rooms you want: ";

        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
                Total_room = (Total_room+quant*1200) ;
                cout << "\n\n\t\t" << quant << "room/rooms have been allowed to you! ";
        }
        else
            ;
        {
            cout << "\n\tOnly" << Qrooms - Srooms << "Rooms remaining in hotel ";
            break;

        case 2:
            cout << "\n\n Enter the number of rooms you want: ";

            cin >> quant;
            if (Qrooms - Srooms >= quant)
            {
                Srooms = Srooms + quant;
                Total_room = (Total_room+quant*1200);
                cout << "\n\n\t\t" << quant << "room/rooms have been allowed to you! ";
            }
            else

            {
                cout << "\n\tOnly" << Qrooms - Srooms << "Rooms remaining in hotel ";
                break;
            }
        }
    }
