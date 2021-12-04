// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#include "BlockCommandOrigin.hpp"
#define EXTRA_INCLUDE_PART_MINECARTBLOCKCOMMANDORIGIN
#include "Extra/MinecartBlockCommandOriginAPI.hpp"
#undef EXTRA_INCLUDE_PART_MINECARTBLOCKCOMMANDORIGIN
class MinecartBlockCommandOrigin : public BlockCommandOrigin {
#include "Extra/MinecartBlockCommandOriginAPI.hpp"
public:
    /*0*/ virtual ~MinecartBlockCommandOrigin();
    /*1*/ virtual std::string const& getRequestId() const;
    /*3*/ virtual class BlockPos getBlockPosition() const;
    /*4*/ virtual class Vec3 getWorldPosition() const;
    /*5*/ virtual class Level* getLevel() const;
    /*7*/ virtual class Actor* getEntity() const;
    /*8*/ virtual int /*enum CommandPermissionLevel*/ getPermissionsLevel() const;
    /*9*/ virtual std::unique_ptr<class CommandOrigin> clone() const;
    /*10*/ virtual class std::optional<class BlockPos> getCursorHitBlockPos() const;
    /*11*/ virtual class std::optional<class Vec3> getCursorHitPos() const;
    /*14*/ virtual bool canUseAbility(int /*enum AbilitiesIndex*/) const;
    /*16*/ virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /*17*/ virtual bool isSelectorExpansionAllowed() const;
    /*19*/ virtual unsigned char getSourceSubId() const;
    /*20*/ virtual class CommandOrigin const& getOutputReceiver() const;
    /*22*/ virtual int /*enum CommandOriginType*/ getOriginType() const;
    /*24*/ virtual class mce::UUID const& getUUID() const;
    /*25*/ virtual void handleCommandOutputCallback(class Json::Value&&) const;
    /*26*/ virtual class CompoundTag serialize() const;
    /*27*/ virtual bool isValid() const;
    /*29*/ virtual class BaseCommandBlock* _getBaseCommandBlock(class BlockSource&) const;
    /*30*/ virtual class CommandBlockActor* _getBlockEntity(class BlockSource&) const;

public:
    MCAPI static std::unique_ptr<class MinecartBlockCommandOrigin> load(class CompoundTag const&, class Level&);
};