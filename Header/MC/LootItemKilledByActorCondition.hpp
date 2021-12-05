// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_LOOTITEMKILLEDBYACTORCONDITION
#include "Extra/LootItemKilledByActorConditionAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOTITEMKILLEDBYACTORCONDITION
class LootItemKilledByActorCondition {
#include "Extra/LootItemKilledByActorConditionAPI.hpp"
public:
    /*0*/ virtual ~LootItemKilledByActorCondition();
    /*1*/ virtual bool applies(class Random&, class LootTableContext&);
    /*
    inline bool applies(class Random& a0, class LootTableContext& a1){
        bool (LootItemKilledByActorCondition::*rv)(class Random&, class LootTableContext&);
        *((void**)&rv) = dlsym("?applies@LootItemKilledByActorCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z");
        return (this->*rv)(std::forward<class Random&>(a0), std::forward<class LootTableContext&>(a1));
    }
    */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

protected:

private:
};