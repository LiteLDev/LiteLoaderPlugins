// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MovementScriptActorComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptMovementGenericComponent : public MovementScriptActorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMOVEMENTGENERICCOMPONENT
public:
    class ScriptMovementGenericComponent& operator=(class ScriptMovementGenericComponent const&) = delete;
    ScriptMovementGenericComponent(class ScriptMovementGenericComponent const&) = delete;
    ScriptMovementGenericComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptMovementGenericComponent();
    /*
    inline  ~ScriptMovementGenericComponent(){
         (ScriptMovementGenericComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptMovementGenericComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptMovementGenericComponent> bind(struct Scripting::Version);

protected:

private:

};