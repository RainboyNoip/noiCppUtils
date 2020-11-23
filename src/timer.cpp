#include "timer.hpp"

noiCppUtils::timer::timer(){
    _start_time = clock();
}

double noiCppUtils::timer::elapsed() {
    return  double(std::clock() - _start_time) / CLOCKS_PER_SEC; 
}
