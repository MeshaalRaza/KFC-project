#include <iostream>
#include <vector>

class MenuItem {
public:
    std::string name;
    double price;

    MenuItem(const std::string& itemName, double itemPrice) : name(itemName), price(itemPrice) {}
};

class Order {
private:
    std::vector<MenuItem> items;

public:
    void addItem(const MenuItem& item) {
        items.push_back(item);
    }

    double calculateTotal() const {
        double total = 0.0;
        for (const auto& item : items) {
            total += item.price;
        }
        return total;
    }

    void displayReceipt() const {
        std::cout << "\n********** Receipt **********\n";
        for (const auto& item : items) {
            std::cout << item.name << "\t\t$" << item.price << "\n";
        }
        std::cout << "Total Amount: $" << calculateTotal() << "\n";
        std::cout << "*****************************\n";
    }
};

class Restaurant {
private:
    std::vector<MenuItem> menu;

public:
    void addToMenu(const std::string& itemName, double itemPrice) {
        MenuItem newItem(itemName, itemPrice);
        menu.push_back(newItem);
    }

    void displayMenu() const {
        std::cout << "\n********** Menu **********\n";
        for (const auto& item : menu) {
            std::cout << item.name << "\t\t$" << item.price << "\n";
        }
        std::cout << "**************************\n";
    }

    Order takeOrder() const {
        Order newOrder;
        char choice;
        do {
            int itemNumber;
            std::cout << "Enter the item number to add to your order: ";
            std::cin >> itemNumber;
            if (itemNumber >= 1 && itemNumber <= menu.size()) {
                newOrder.addItem(menu[itemNumber - 1]);
            } else {
                std::cout << "Invalid item number. Please try again.\n";
            }

            std::cout << "Do you want to add another item? (y/n): ";
            std::cin >> choice;

        } while (choice == 'y' || choice == 'Y');

        return newOrder;
    }
};

int main() {
    Restaurant kfc;  // or McDonald's
    kfc.addToMenu("Chicken Burger", 5.99);
    kfc.addToMenu("Fries", 2.49);
    kfc.addToMenu("Soda", 1.99);

    char option;
    do {
        std::cout << "\n********** Welcome to KFC **********\n";
        std::cout << "1. Display Menu\n";
        std::cout << "2. Take Order\n";
        std::cout << "3. Exit\n";
        std::cout << "************************************\n";
        std::cout << "Enter your choice (1-3): ";
        std::cin >> option;

        switch (option) {
            case '1':
                kfc.displayMenu();
                break;
            case '2': {
                Order customerOrder = kfc.takeOrder();
                customerOrder.displayReceipt();
                break;
            }
            case '3':
                std::cout << "Thank you for using the KFC app. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while (option != '3');

    return 0;
}

