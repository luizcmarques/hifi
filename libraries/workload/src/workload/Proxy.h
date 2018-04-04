//
//  Proxy.h
//  libraries/workload/src/workload
//
//  Created by Andrew Meadows 2018.01.30
//  Copyright 2018 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//
#ifndef hifi_workload_Proxy_h
#define hifi_workload_Proxy_h

#include "View.h"

namespace workload {

class Proxy {
public:
    Proxy() : sphere(0.0f) {}
    Proxy(const Sphere& s) : sphere(s) {}

    Sphere sphere;
    uint8_t region{ Region::INVALID };
    uint8_t prevRegion{ Region::INVALID };
    uint16_t _padding;
    uint32_t _paddings[3];

    using Vector = std::vector<Proxy>;
};


} // namespace workload

#endif // hifi_workload_Proxy_h