
#include <stdio.h>

enum State {
    IDLE,
    COIN_INSERTED,
    DISPENSE,
    OUT_OF_STOCK
};

enum Command {
    INSERT_COIN,
    SELECT_ITEM,
    RESTOCK,
    CANCEL
};

enum State nextState(enum State state, enum Command command, int stock) {

    switch (state) {

        case IDLE:
            if (command == INSERT_COIN)
                return COIN_INSERTED;
            break;

        case COIN_INSERTED:
            if (command == SELECT_ITEM) {
                if (stock > 0)
                    return DISPENSE;
                else
                    return OUT_OF_STOCK;
            }
            if (command == CANCEL)
                return IDLE;
            break;

        case DISPENSE:
            return IDLE;

        case OUT_OF_STOCK:
            if (command == RESTOCK && stock > 0)
                return IDLE;
            break;
    }

    return state;
}

int main() {

    enum State state = IDLE;
    enum Command command;
    int stock = 3;
    int choice;

    do {
        printf("\n--- VENDING MACHINE ---\n");
        printf("1. Insert Coin\n");
        printf("2. Select Item\n");
        printf("3. Restock\n");
        printf("4. Cancel\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 5)
            break;

        if (choice < 1 || choice > 4) {
            printf("Invalid command!\n");
            continue;
        }

        command = choice - 1;

        enum State newState = nextState(state, command, stock);

        if (newState == DISPENSE) {
            printf("Item dispensed successfully!\n");
            stock--;
            newState = IDLE;
        }

        if (newState == OUT_OF_STOCK)
            printf("Sorry! Item is out of stock.\n");

        if (newState == state)
            printf("Invalid transition!\n");

        state = newState;

        printf("Current Stock: %d\n", stock);

    } while (1);

    return 0;
}
