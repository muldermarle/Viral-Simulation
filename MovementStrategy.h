#pragma once

#include <vector>
#include "simulation.h"

namespace corona{
    class Abstract{
        public:
        virtual int move(int dt, std::vector<Subject> &subjects, int week) = 0;
    };
}
