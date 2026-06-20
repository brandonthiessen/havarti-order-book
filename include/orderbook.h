#pragma once

#include <vector>

enum class Side {
    BUY, SELL
};

struct Order {
    int id;
    Side side;
    double price;
    int quantity;
};

struct Trade {
    int buy_order_id;
    int sell_order_id;
    double price;
    int quantity;
};

class OrderBook {
    public:
        std::vector<Trade> add_order(const Order& order);
    private:
        std::vector<Order> buys;
        std::vector<Order> sells;
};
