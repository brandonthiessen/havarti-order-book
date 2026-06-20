#include "../include/orderbook.h"

int main() {

    OrderBook orders;
    Order o{1,Side::BUY,2.50,5};
    orders.add_order(o);
}
