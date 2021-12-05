// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_BLOCKMAPCOLORDESCRIPTION
#include "Extra/BlockMapColorDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKMAPCOLORDESCRIPTION
class BlockMapColorDescription {
#include "Extra/BlockMapColorDescriptionAPI.hpp"
public:
    /*0*/ virtual ~BlockMapColorDescription();
    /*1*/ virtual std::string const& getName() const;
    /*2*/ virtual void initializeComponent(class EntityContext&) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription> >&, class BlockComponentFactory const&) const;
    /*
    inline void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription> >& a0, class BlockComponentFactory const& a1) const{
        void (BlockMapColorDescription::*rv)(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription> >&, class BlockComponentFactory const&) const;
        *((void**)&rv) = dlsym("?buildSchema@BlockMapColorDescription@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UBlockComponentGroupDescription@@@JsonUtil@@@std@@AEBVBlockComponentFactory@@@Z");
        return (this->*rv)(std::forward<class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription> >&>(a0), std::forward<class BlockComponentFactory const&>(a1));
    }
    inline std::string const& getName() const{
        std::string const& (BlockMapColorDescription::*rv)() const;
        *((void**)&rv) = dlsym("?getName@BlockMapColorDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline void initializeComponent(class EntityContext& a0) const{
        void (BlockMapColorDescription::*rv)(class EntityContext&) const;
        *((void**)&rv) = dlsym("?initializeComponent@BlockMapColorDescription@@UEBAXAEAVEntityContext@@@Z");
        return (this->*rv)(std::forward<class EntityContext&>(a0));
    }
    */
    MCAPI static std::string const NameID;

protected:

private:
};