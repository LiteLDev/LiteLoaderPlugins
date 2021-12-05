// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_ACTORINCONTACTWITHWATER
#include "Extra/ActorInContactWithWaterAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORINCONTACTWITHWATER
class ActorInContactWithWater : public FilterTest {
#include "Extra/ActorInContactWithWaterAPI.hpp"
public:
    /*0*/ virtual ~ActorInContactWithWater();
    /*1*/ virtual bool evaluate(struct FilterContext const&) const;
    /*2*/ virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    /*3*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
    /*
    inline bool evaluate(struct FilterContext const& a0) const{
        bool (ActorInContactWithWater::*rv)(struct FilterContext const&) const;
        *((void**)&rv) = dlsym("?evaluate@ActorInContactWithWater@@UEBA_NAEBUFilterContext@@@Z");
        return (this->*rv)(std::forward<struct FilterContext const&>(a0));
    }
    inline class gsl::basic_string_span<char const, -1> getName() const{
        class gsl::basic_string_span<char const, -1> (ActorInContactWithWater::*rv)() const;
        *((void**)&rv) = dlsym("?getName@ActorInContactWithWater@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ");
        return (this->*rv)();
    }
    */

protected:

private:
};