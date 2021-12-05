// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BehaviorDefinition.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_SUBTREEDEFINITION
#include "Extra/SubtreeDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_SUBTREEDEFINITION
class SubtreeDefinition : public BehaviorDefinition {
#include "Extra/SubtreeDefinitionAPI.hpp"
public:
    /*0*/ virtual ~SubtreeDefinition();
    /*1*/ virtual void load(class Json::Value, class BehaviorFactory const&);
    /*
    inline void load(class Json::Value a0, class BehaviorFactory const& a1){
        void (SubtreeDefinition::*rv)(class Json::Value, class BehaviorFactory const&);
        *((void**)&rv) = dlsym("?load@SubtreeDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z");
        return (this->*rv)(std::forward<class Json::Value>(a0), std::forward<class BehaviorFactory const&>(a1));
    }
    */

protected:

private:
};