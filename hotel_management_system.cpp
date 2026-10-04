#include <iostream>
using namespace std;

class Hotel {
public:
    int roomNo;
    string name;
    int days;

    void bookRoom() {
        cout << "Enter Room Number: ";
        cin >> roomNo;

        cout << "Enter Customer Name: ";
        cin >> name;

        cout << "Enter Number of Days: ";
        cin >> days;

        cout << "Room Booked Successfully!\n";
    }

    void viewRooms() {
        cout << "\n--- Booked Room ---\n";
        cout << "Room: " << roomNo
             << " | Name: " << name
             << " | Days: " << days << endl;
    }

    void generateBill() {
        int bill = days * 1000;

        cout << "\nCustomer: " << name;
        cout << "\nDays Stayed: " << days;
        cout << "\nTotal Bill: " << bill << endl;
    }
};

int main() {
    Hotel h;
    int choice;

    do {
        cout << "\n\n===== HOTEL MANAGEMENT =====";
        cout << "\n1. Book Room";
        cout << "\n2. View Rooms";
        cout << "\n3. Generate Bill";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: h.bookRoom(); break;
            case 2: h.viewRooms(); break;
            case 3: h.generateBill(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}