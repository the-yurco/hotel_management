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

    m:
    cout << "\n\t\t\t Please select from the menu options ";
    cout << "n\n1) Rooms";
    cout << "\n2 ) Pasta";
    cout << "\n3 ) Burger";
    cout << "\n4 ) Noodles";
    cout << "\n5 ) Shake";
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
            cout << "\n\n Enter pasta quantity: ";

            cin >> quant;
            if (Qpasta - Spasta >= quant)
            {
                Spasta = Spasta + quant;
                Total_pasta = (Total_pasta+quant*250);
                cout << "\n\n\t\t" << quant << "pasta is the order! ";
            }
            else

            {
                cout << "\n\tOnly" << Qpasta - Spasta << "Pasta remaining in hotel ";
                break;
            }

        case 3:
            cout << "\n\n Enter burger quantity: ";

            cin >> quant;
            if (Qburger - Sburger >= quant)
            {
                Sburger = Sburger + quant;
                Total_burger = (Total_burger+quant*120);
                cout << "\n\n\t\t" << quant << "burger is the order! ";
            }
            else

            {
                cout << "\n\tOnly" << Qburger - Sburger << "Burger remaining in hotel ";
                break;
            }

        case 4:
            cout << "\n\n Enter noodles quantity: ";

            cin >> quant;
            if (Qnoodles - Snoodles >= quant)
            {
                Snoodles = Snoodles + quant;
                Total_noodles = (Total_noodles+quant*140);
                cout << "\n\n\t\t" << quant << "noodles is the order! ";
            }
            else

            {
                cout << "\n\tOnly" << Qnoodles - Snoodles << "Noodles remaining in hotel ";
                break;
            }

        case 5:
            cout << "\n\n Enter shake quantity: ";

            cin >> quant;
            if (Qshake - Sshake >= quant)
            {
                Sshake = Sshake + quant;
                Total_shake = (Total_shake+quant*120);
                cout << "\n\n\t\t" << quant << "shake is the order! ";
            }
            else

            {
                cout << "\n\tOnly" << Qshake - Sshake << "Chake remaining in hotel ";
                break;
            }

        case 6:
            cout << "\n\n Enter chicken-roll quantity: ";

            cin >> quant;
            if (Qchicken - Schicken >= quant)
            {
                Schicken = Schicken + quant;
                Total_chicken = (Total_chicken+quant*150);
                cout << "\n\n\t\t" << quant << "chicken is the order! ";
            }
            else

            {
                cout << "\n\tOnly" << Qchicken - Schicken << "Chicken-roll remaining in hotel ";
                break;
            }

        case 7:
            cout << "\n\t\tDetails of sales and collection ";
            cout << "\n\n Number of room we had : " << Qrooms;
            cout << "\n\n Number of rooms we gave for rent : " << Srooms;
            cout << "\n\n Reamining rooms : " << Qrooms - Srooms;
            cout << "\n\n Total rooms collection for the day : " << Total_room;

            cout << "\n\t\tDetails of Pastas and collection ";
            cout << "\n\n Number of pastas we had : " << Qpasta;
            cout << "\n\n Number of pastas we gave for rent : " << Spasta;
            cout << "\n\n Reamining pastas : " << Qpasta - Spasta;
            cout << "\n\n Total pasta collection for the day : " << Total_pasta;

            cout << "\n\t\tDetails of burger and collection ";
            cout << "\n\n Number of burgers we had : " << Qburger;
            cout << "\n\n Number of burgers we gave for rent : " << Sburger;
            cout << "\n\n Reamining burgers : " << Qburger - Sburger;
            cout << "\n\n Total burgers collection for the day : " << Total_burger;

            cout << "\n\t\tDetails of noodles and collection ";
            cout << "\n\n Number of noodles we had : " << Qnoodles;
            cout << "\n\n Number of noodles we gave for rent : " << Snoodles;
            cout << "\n\n Reamining noodles : " << Qnoodles - Snoodles;
            cout << "\n\n Total noodles collection for the day : " << Total_noodles;

            cout << "\n\t\tDetails of shakes and collection ";
            cout << "\n\n Number of shakes we had : " << Qshake;
            cout << "\n\n Number of shakes we gave for rent : " << Sshake;
            cout << "\n\n Reamining shakes : " << Qshake - Sshake;
            cout << "\n\n Total shakes collection for the day : " << Total_shake;

            cout << "\n\t\tDetails of chicken-roll and collection ";
            cout << "\n\n Number of chicken-roll we had : " << Qchicken;
            cout << "\n\n Number of chicken-roll we gave for rent : " << Schicken;
            cout << "\n\n Reamining chicken-roll : " << Qchicken - Schicken;
            cout << "\n\n Total chicken-roll collection for the day : " << Total_chicken;
        
            case 8:
            exit(0);

            default:
                cout << "\n Please select the numbers mentioned above! ";
        }
        goto m;
    }
}