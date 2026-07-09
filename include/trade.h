#pragma once

#include <cstdint>

namespace havarti {

struct Trade {
    int buy_order_id;
    int sell_order_id;
    int64_t price;
    int quantity;
};

} // namespace havarti
