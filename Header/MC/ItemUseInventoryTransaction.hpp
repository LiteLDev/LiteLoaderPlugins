// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_ITEMUSEINVENTORYTRANSACTION
#include "Extra/ItemUseInventoryTransactionAPI.hpp"
#undef EXTRA_INCLUDE_PART_ITEMUSEINVENTORYTRANSACTION
class ItemUseInventoryTransaction {
#include "Extra/ItemUseInventoryTransactionAPI.hpp"
public:
    /*0*/ virtual ~ItemUseInventoryTransaction();
    /*1*/ virtual void read(class ReadOnlyBinaryStream&);
    /*2*/ virtual void write(class BinaryStream&) const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual int /*enum enum InventoryTransactionError*/ handle(class Player&, bool) const;
    /*5*/ virtual void onTransactionError(class Player&, int /*enum enum InventoryTransactionError*/) const;
    /*
    inline int \/*enum enum InventoryTransactionError*\/ handle(class Player& a0, bool a1) const{
        int \/*enum enum InventoryTransactionError*\/ (ItemUseInventoryTransaction::*rv)(class Player&, bool) const;
        *((void**)&rv) = dlsym("?handle@ItemUseInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z");
        return (this->*rv)(std::forward<class Player&>(a0), std::forward<bool>(a1));
    }
    inline void onTransactionError(class Player& a0, int \/*enum enum InventoryTransactionError*\/ a1) const{
        void (ItemUseInventoryTransaction::*rv)(class Player&, int \/*enum enum InventoryTransactionError*\/) const;
        *((void**)&rv) = dlsym("?onTransactionError@ItemUseInventoryTransaction@@UEBAXAEAVPlayer@@W4InventoryTransactionError@@@Z");
        return (this->*rv)(std::forward<class Player&>(a0), std::forward<int \/*enum enum InventoryTransactionError*\/>(a1));
    }
    inline void postLoadItems(class BlockPalette& a0, bool a1){
        void (ItemUseInventoryTransaction::*rv)(class BlockPalette&, bool);
        *((void**)&rv) = dlsym("?postLoadItems@ItemUseInventoryTransaction@@UEAAXAEAVBlockPalette@@_N@Z");
        return (this->*rv)(std::forward<class BlockPalette&>(a0), std::forward<bool>(a1));
    }
    inline void read(class ReadOnlyBinaryStream& a0){
        void (ItemUseInventoryTransaction::*rv)(class ReadOnlyBinaryStream&);
        *((void**)&rv) = dlsym("?read@ItemUseInventoryTransaction@@UEAAXAEAVReadOnlyBinaryStream@@@Z");
        return (this->*rv)(std::forward<class ReadOnlyBinaryStream&>(a0));
    }
    inline void write(class BinaryStream& a0) const{
        void (ItemUseInventoryTransaction::*rv)(class BinaryStream&) const;
        *((void**)&rv) = dlsym("?write@ItemUseInventoryTransaction@@UEBAXAEAVBinaryStream@@@Z");
        return (this->*rv)(std::forward<class BinaryStream&>(a0));
    }
    */
    MCAPI class ItemUseInventoryTransaction& operator=(class ItemUseInventoryTransaction const&);
    MCAPI void resendBlocksAroundArea(class Player&, class BlockPos const&, unsigned char) const;
    MCAPI class ItemUseInventoryTransaction& setSelectedItem(class ItemStack const&);

protected:

private:
    MCAPI static class BidirectionalUnorderedMap<enum ItemUseInventoryTransaction::ActionType, std::string > const actionTypeMap;
};