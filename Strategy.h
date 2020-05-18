#pragma once

#include "MovementStrategy.h"

namespace corona
{
    class RegularMovement: public MovementStrategy{
        public:
        virtual int move(int dt, std::vector<Subject> &subjects, int week);
    };

    class LockdownMovement: public MovementStrategy{
        public:
        virtual int move(int dt, std::vector<Subject> &subjects, int week);
        private:
        bool run;
    };
}