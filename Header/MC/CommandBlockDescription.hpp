// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CommandBlockDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKDESCRIPTION
public:
    class CommandBlockDescription& operator=(class CommandBlockDescription const&) = delete;
    CommandBlockDescription(class CommandBlockDescription const&) = delete;
    CommandBlockDescription() = delete;
#endif

public:
    /*0*/ virtual void __unk_vfn_0();
    /*1*/ virtual ~CommandBlockDescription();
    /*2*/ virtual void deserializeData(struct DeserializeDataParams);
    /*3*/ virtual void serializeData(class Json::Value&) const;
    /*
    inline  ~CommandBlockDescription(){
         (CommandBlockDescription::*rv)();
        *((void**)&rv) = dlsym("??1CommandBlockDescription@@UEAA@XZ");
        return (this->*rv)();
    }
    inline char const* getJsonName() const{
        char const* (CommandBlockDescription::*rv)() const;
        *((void**)&rv) = dlsym("?getJsonName@CommandBlockDescription@@UEBAPEBDXZ");
        return (this->*rv)();
    }
    */

protected:

private:

};