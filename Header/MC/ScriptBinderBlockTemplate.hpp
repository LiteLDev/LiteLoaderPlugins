// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTBINDERBLOCKTEMPLATE
#include "Extra/ScriptBinderBlockTemplateAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTBINDERBLOCKTEMPLATE
class ScriptBinderBlockTemplate {
#include "Extra/ScriptBinderBlockTemplateAPI.hpp"
public:
    /*0*/ virtual ~ScriptBinderBlockTemplate();
    /*1*/ virtual std::string const& getTemplateIdentifier() const;
    /*2*/ virtual void applyTemplate(class ScriptObjectBinder&) const;
    /*
    inline void applyTemplate(class ScriptObjectBinder& a0) const{
        void (ScriptBinderBlockTemplate::*rv)(class ScriptObjectBinder&) const;
        *((void**)&rv) = dlsym("?applyTemplate@ScriptBinderBlockTemplate@@UEBAXAEAVScriptObjectBinder@@@Z");
        return (this->*rv)(std::forward<class ScriptObjectBinder&>(a0));
    }
    inline std::string const& getTemplateIdentifier() const{
        std::string const& (ScriptBinderBlockTemplate::*rv)() const;
        *((void**)&rv) = dlsym("?getTemplateIdentifier@ScriptBinderBlockTemplate@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(class Block const&, class BlockPos const&, class ScriptApi::ScriptObjectHandle&&);

protected:

private:
};