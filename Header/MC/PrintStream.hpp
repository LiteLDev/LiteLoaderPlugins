// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_PRINTSTREAM
#include "Extra/PrintStreamAPI.hpp"
#undef EXTRA_INCLUDE_PART_PRINTSTREAM
class PrintStream {
#include "Extra/PrintStreamAPI.hpp"
public:
    /*0*/ virtual ~PrintStream();
    /*
    inline void print(std::string const& a0){
        void (PrintStream::*rv)(std::string const&);
        *((void**)&rv) = dlsym("?print@PrintStream@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0));
    }
    */
    MCAPI void println(std::string const&);

protected:

private:
};