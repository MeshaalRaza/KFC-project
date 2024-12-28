# KFC-project
# Restaurant Ordering System

This repository contains a simple C++ application simulating a restaurant ordering system. Users can view a menu, place an order, and receive a receipt detailing their selected items and total cost.

## Features

- **Menu Management**: Displays the restaurant's menu with item names and prices.
- **Order Placement**: Allows users to select items from the menu to create an order.
- **Receipt Generation**: Displays a detailed receipt with the total amount for the ordered items.
- **Interactive Interface**: User-friendly command-line interface for seamless interaction.

## Code Overview

### Classes

1. **`MenuItem`**:
   - Represents a single menu item with a name and price.

2. **`Order`**:
   - Manages the items in a customer's order.
   - Calculates the total cost of the order.
   - Displays a detailed receipt.

3. **`Restaurant`**:
   - Maintains the menu.
   - Provides functionality for users to view the menu and place orders.

### Main Program Flow

1. The application starts with a predefined menu.
2. Users can choose from three options:
   - Display the menu.
   - Place an order.
   - Exit the program.
3. When placing an order, users can add multiple items to their order.
4. A receipt is displayed after the order is finalized.

## Getting Started

### Prerequisites

- C++ Compiler (e.g., g++, clang++)
- Basic knowledge of command-line usage

## Sample Usage

### Menu Display
```
********** Menu **********
Chicken Burger       $5.99
Fries                $2.49
Soda                 $1.99
**************************
```

### Order Placement
```
Enter the item number to add to your order: 1
Do you want to add another item? (y/n): y
Enter the item number to add to your order: 3
Do you want to add another item? (y/n): n
```

### Receipt Example
```
********** Receipt **********
Chicken Burger       $5.99
Soda                 $1.99
Total Amount:        $7.98
*****************************
```

## Customization

- Modify the menu by updating the `addToMenu` calls in the `main` function.
- Extend the functionality by adding discounts, tax calculations, or additional features.
## License

This project is licensed under the MIT License. See the `LICENSE` file for details.
