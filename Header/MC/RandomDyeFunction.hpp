// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "LootItemFunction.hpp"
#define EXTRA_INCLUDE_PART_RANDOMDYEFUNCTION
#include "Extra/RandomDyeFunctionAPI.hpp"
#undef EXTRA_INCLUDE_PART_RANDOMDYEFUNCTION
class RandomDyeFunction : public LootItemFunction {
#include "Extra/RandomDyeFunctionAPI.hpp"
public:
    /*0*/ virtual ~RandomDyeFunction();
    /*1*/ virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
    /*2*/ virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    /*
    inline void apply(class ItemStack& a0, class Random& a1, class LootTableContext& a2){
        void (RandomDyeFunction::*rv)(class ItemStack&, class Random&, class LootTableContext&);
        *((void**)&rv) = dlsym("?apply@RandomDyeFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z");
        return (this->*rv)(std::forward<class ItemStack&>(a0), std::forward<class Random&>(a1), std::forward<class LootTableContext&>(a2));
    }
    inline void apply(class ItemInstance& a0, class Random& a1, class LootTableContext& a2){
        void (RandomDyeFunction::*rv)(class ItemInstance&, class Random&, class LootTableContext&);
        *((void**)&rv) = dlsym("?apply@RandomDyeFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z");
        return (this->*rv)(std::forward<class ItemInstance&>(a0), std::forward<class Random&>(a1), std::forward<class LootTableContext&>(a2));
    }
    */

protected:

private:
    MCAPI void _applyBase(class ItemStackBase&, class Random&) const;
    MCAPI class mce::Color _getRandomArmorColor(class Random&) const;
    MCAPI class mce::Color _getRandomDyeColor(class Random&) const;
};