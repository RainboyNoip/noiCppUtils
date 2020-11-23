#pragma once
#include <ctime>

namespace noiCppUtils {

    class timer {
        public:
            timer();
            void restart();
            double elapsed();
        private:
            std::clock_t _start_time;
    };
}
