// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_LOOTITEMMATCHTOOLCONDITION
#include "Extra/LootItemMatchToolConditionAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOTITEMMATCHTOOLCONDITION
class LootItemMatchToolCondition {
#include "Extra/LootItemMatchToolConditionAPI.hpp"
public:
    /*0*/ virtual ~LootItemMatchToolCondition();
    /*1*/ virtual bool applies(class Random&, class LootTableContext&);
    /*
    inline bool applies(class Random& a0, class LootTableContext& a1){
        bool (LootItemMatchToolCondition::*rv)(class Random&, class LootTableContext&);
        *((void**)&rv) = dlsym("?applies@LootItemMatchToolCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z");
        return (this->*rv)(std::forward<class Random&>(a0), std::forward<class LootTableContext&>(a1));
    }
    */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

protected:

private:
};