// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECIPE
public:
    class Recipe& operator=(class Recipe const&) = delete;
    Recipe(class Recipe const&) = delete;
    Recipe() = delete;
#endif

public:
    /*0*/ virtual ~Recipe();
    /*1*/ virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&) const = 0;
    /*2*/ virtual int getCraftingSize() const = 0;
    /*3*/ virtual class RecipeIngredient const& getIngredient(int, int) const = 0;
    /*4*/ virtual std::vector<class ItemInstance> const& getResultItem() const = 0;
    /*5*/ virtual bool isShapeless() const = 0;
    /*6*/ virtual bool matches(class CraftingContainer&, class Level&) const = 0;
    /*7*/ virtual int size() const = 0;
    /*8*/ virtual class mce::UUID const& getId() const;
    /*9*/ virtual class ItemPack const& getItemPack() const;
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual bool itemValidForRecipe(class ItemDescriptor const&, class ItemStack const&) const;
    /*12*/ virtual bool itemsMatch(class ItemDescriptor const&, class ItemDescriptor const&) const;
    /*13*/ virtual bool itemsMatch(class ItemDescriptor const&, class ItemDescriptor const&, class CompoundTag const*) const;
    /*14*/ virtual bool itemsMatch(class ItemDescriptor const&, int, int, class CompoundTag const*) const;
    /*15*/ virtual void loadResultList(class BlockPalette const&) const;
    /*
    inline bool isMultiRecipe() const{
        bool (Recipe::*rv)() const;
        *((void**)&rv) = dlsym("?isMultiRecipe@Recipe@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~Recipe(){
         (Recipe::*rv)();
        *((void**)&rv) = dlsym("??1Recipe@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI int countQuantityOfIngredient(class ItemInstance const&) const;
    MCAPI int getHeight() const;
    MCAPI std::vector<class RecipeIngredient> const& getIngredients() const;
    MCAPI class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const& getNetId() const;
    MCAPI int getPriority() const;
    MCAPI std::string getRecipeId() const;
    MCAPI class HashedString const& getTag() const;
    MCAPI int getWidth() const;
    MCAPI void setNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const&);
    MCAPI static bool isAnyAuxValue(class ItemDescriptor const&);

protected:
    MCAPI Recipe(class gsl::basic_string_span<char const, -1>, class HashedString, std::vector<class RecipeIngredient> const&);

private:

};