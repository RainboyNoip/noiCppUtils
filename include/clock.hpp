#pragma once
#include "timer.hpp"
#include <iostream>


namespace noiCppUtils {
    class clock :public timer{
        public:
            explicit clock(std::ostream &os = std::cout);
            ~clock();
        private:
            std::ostream & m_os;

    };
}



