// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#include "ScriptActorComponent.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTINVENTORYCOMPONENT2
#include "Extra/ScriptInventoryComponent2API.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTINVENTORYCOMPONENT2
class ScriptInventoryComponent2 : public ScriptActorComponent {
#include "Extra/ScriptInventoryComponent2API.hpp"
public:
    /*0*/ virtual ~ScriptInventoryComponent2();

public:
    MCAPI class Scripting::Result<int> getAdditionalSlotsPerStrength() const;
    MCAPI class Scripting::Result<bool> getCanBeSiphonedFrom() const;
    MCAPI class Scripting::Result<std::string> getContainerType() const;
    MCAPI class Scripting::Result<int> getInventorySize() const;
    MCAPI class Scripting::Result<class Scripting::WeakTypedObjectHandle<class ScriptInventoryComponentContainer>> getOrCreateContainer();
    MCAPI class Scripting::Result<bool> getPrivate() const;
    MCAPI class Scripting::Result<bool> getRestrictToOwner() const;
    MCAPI class ScriptInventoryComponent2& operator=(class ScriptInventoryComponent2&&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptInventoryComponent2> bind(struct Scripting::Version);
};