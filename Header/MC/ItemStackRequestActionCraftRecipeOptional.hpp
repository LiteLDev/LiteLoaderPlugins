// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_ITEMSTACKREQUESTACTIONCRAFTRECIPEOPTIONAL
#include "Extra/ItemStackRequestActionCraftRecipeOptionalAPI.hpp"
#undef EXTRA_INCLUDE_PART_ITEMSTACKREQUESTACTIONCRAFTRECIPEOPTIONAL
class ItemStackRequestActionCraftRecipeOptional {
#include "Extra/ItemStackRequestActionCraftRecipeOptionalAPI.hpp"
public:
    /*0*/ virtual ~ItemStackRequestActionCraftRecipeOptional();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual void _write(class BinaryStream&) const;
    /*5*/ virtual bool _read(class ReadOnlyBinaryStream&);
    /*6*/ virtual void __unk_vfn_3();
    /*7*/ virtual void __unk_vfn_4();
    /*8*/ virtual void __unk_vfn_5();
    /*9*/ virtual void __unk_vfn_6();
    /*
    inline int getFilteredStringIndex() const{
        int (ItemStackRequestActionCraftRecipeOptional::*rv)() const;
        *((void**)&rv) = dlsym("?getFilteredStringIndex@ItemStackRequestActionCraftRecipeOptional@@UEBAHXZ");
        return (this->*rv)();
    }
    inline bool _read(class ReadOnlyBinaryStream& a0){
        bool (ItemStackRequestActionCraftRecipeOptional::*rv)(class ReadOnlyBinaryStream&);
        *((void**)&rv) = dlsym("?_read@ItemStackRequestActionCraftRecipeOptional@@UEAA_NAEAVReadOnlyBinaryStream@@@Z");
        return (this->*rv)(std::forward<class ReadOnlyBinaryStream&>(a0));
    }
    inline void _write(class BinaryStream& a0) const{
        void (ItemStackRequestActionCraftRecipeOptional::*rv)(class BinaryStream&) const;
        *((void**)&rv) = dlsym("?_write@ItemStackRequestActionCraftRecipeOptional@@UEBAXAEAVBinaryStream@@@Z");
        return (this->*rv)(std::forward<class BinaryStream&>(a0));
    }
    */
    MCAPI class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const& getRecipeNetId() const;

protected:

private:
};