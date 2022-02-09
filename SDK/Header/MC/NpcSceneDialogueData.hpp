// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "NpcComponent.hpp"
#undef BEFORE_EXTRA

class NpcSceneDialogueData {

#define AFTER_EXTRA
// Add Member There
public:
NpcComponent mComponent;
    Actor mActor;
    string mString;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCSCENEDIALOGUEDATA
public:
    class NpcSceneDialogueData& operator=(class NpcSceneDialogueData const&) = delete;
    NpcSceneDialogueData(class NpcSceneDialogueData const&) = delete;
    NpcSceneDialogueData() = delete;
#endif

public:
    /*0*/ virtual ~NpcSceneDialogueData();
    /*1*/ virtual std::string const& getDialogueText() const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual std::string const& getNameText() const;
    /*4*/ virtual std::string const& getNameRawText() const;
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual struct NpcActionsContainer& getActionsContainer();
    /*7*/ virtual struct NpcActionsContainer const& getActionsContainer() const;
    /*
    inline  ~NpcSceneDialogueData(){
         (NpcSceneDialogueData::*rv)();
        *((void**)&rv) = dlsym("??1NpcSceneDialogueData@@UEAA@XZ");
        return (this->*rv)();
    }
    inline std::string const& getSceneName() const{
        std::string const& (NpcSceneDialogueData::*rv)() const;
        *((void**)&rv) = dlsym("?getSceneName@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline class Actor const& getActor() const{
        class Actor const& (NpcSceneDialogueData::*rv)() const;
        *((void**)&rv) = dlsym("?getActor@NpcSceneDialogueData@@UEBAAEBVActor@@XZ");
        return (this->*rv)();
    }
    inline class Actor& getActor(){
        class Actor& (NpcSceneDialogueData::*rv)();
        *((void**)&rv) = dlsym("?getActor@NpcSceneDialogueData@@UEAAAEAVActor@@XZ");
        return (this->*rv)();
    }
    inline struct ActorUniqueID const& getActorUniqueID(){
        struct ActorUniqueID const& (NpcSceneDialogueData::*rv)();
        *((void**)&rv) = dlsym("?getActorUniqueID@NpcSceneDialogueData@@UEAAAEBUActorUniqueID@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI NpcSceneDialogueData(class NpcComponent&, class Actor&, std::string const&);

protected:

private:

};