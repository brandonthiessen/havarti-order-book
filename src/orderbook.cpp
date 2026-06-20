#include "orderbook.h"

std::vector<Trade>
OrderBook::add_order(const Order& order)
{

    std::vector<Trade> trades;

    if (order.side == Side::BUY) {
        buys.push_back(order);
    } else if (order.side == Side::SELL) {
        sells.push_back(order);
    }

    return trades;
}
