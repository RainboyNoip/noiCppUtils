#include "clock.hpp"

noiCppUtils::clock::clock(std::ostream &os):timer(),m_os(os){}

noiCppUtils::clock::~clock(){
    std::istream::fmtflags old_flags = m_os.setf( std::istream::fixed,
            std::istream::floatfield );
    std::streamsize old_prec = m_os.precision( 6 );

    m_os << elapsed() << " s\n"
        << std::endl;
    m_os.flags( old_flags );
    m_os.precision( old_prec );
}
