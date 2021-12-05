// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_VANILLAGAMEMODULESERVER
#include "Extra/VanillaGameModuleServerAPI.hpp"
#undef EXTRA_INCLUDE_PART_VANILLAGAMEMODULESERVER
class VanillaGameModuleServer {
#include "Extra/VanillaGameModuleServerAPI.hpp"
public:
    /*0*/ virtual ~VanillaGameModuleServer();
    /*1*/ virtual void init(class ServerInstance&, class Level&);
    /*2*/ virtual void initializeBehaviorStack(class Experiments const&, class IResourcePackRepository&, class ResourcePackStack&, class BaseGameVersion const&);
    /*3*/ virtual void configureLevel(class Level&, class Experiments const&, class ResourcePackManager&, class BaseGameVersion const&);
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void __unk_vfn_2();
    /*7*/ virtual void setupCommands(class CommandRegistry&);
    /*8*/ virtual void configureServerNetworkHandler(class ServerInstance&, class ServerNetworkHandler&);
    /*
    inline void tick(){
        void (VanillaGameModuleServer::*rv)();
        *((void**)&rv) = dlsym("?tick@VanillaGameModuleServer@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void configureDocumentation(class IGameModuleDocumentation& a0){
        void (VanillaGameModuleServer::*rv)(class IGameModuleDocumentation&);
        *((void**)&rv) = dlsym("?configureDocumentation@VanillaGameModuleServer@@UEAAXAEAVIGameModuleDocumentation@@@Z");
        return (this->*rv)(std::forward<class IGameModuleDocumentation&>(a0));
    }
    inline void configureNewPlayer(class Player& a0){
        void (VanillaGameModuleServer::*rv)(class Player&);
        *((void**)&rv) = dlsym("?configureNewPlayer@VanillaGameModuleServer@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player&>(a0));
    }
    inline void configureLevel(class Level& a0, class Experiments const& a1, class ResourcePackManager& a2, class BaseGameVersion const& a3){
        void (VanillaGameModuleServer::*rv)(class Level&, class Experiments const&, class ResourcePackManager&, class BaseGameVersion const&);
        *((void**)&rv) = dlsym("?configureLevel@VanillaGameModuleServer@@UEAAXAEAVLevel@@AEBVExperiments@@AEAVResourcePackManager@@AEBVBaseGameVersion@@@Z");
        return (this->*rv)(std::forward<class Level&>(a0), std::forward<class Experiments const&>(a1), std::forward<class ResourcePackManager&>(a2), std::forward<class BaseGameVersion const&>(a3));
    }
    inline void configureServerNetworkHandler(class ServerInstance& a0, class ServerNetworkHandler& a1){
        void (VanillaGameModuleServer::*rv)(class ServerInstance&, class ServerNetworkHandler&);
        *((void**)&rv) = dlsym("?configureServerNetworkHandler@VanillaGameModuleServer@@UEAAXAEAVServerInstance@@AEAVServerNetworkHandler@@@Z");
        return (this->*rv)(std::forward<class ServerInstance&>(a0), std::forward<class ServerNetworkHandler&>(a1));
    }
    inline void init(class ServerInstance& a0, class Level& a1){
        void (VanillaGameModuleServer::*rv)(class ServerInstance&, class Level&);
        *((void**)&rv) = dlsym("?init@VanillaGameModuleServer@@UEAAXAEAVServerInstance@@AEAVLevel@@@Z");
        return (this->*rv)(std::forward<class ServerInstance&>(a0), std::forward<class Level&>(a1));
    }
    inline void initializeBehaviorStack(class Experiments const& a0, class IResourcePackRepository& a1, class ResourcePackStack& a2, class BaseGameVersion const& a3){
        void (VanillaGameModuleServer::*rv)(class Experiments const&, class IResourcePackRepository&, class ResourcePackStack&, class BaseGameVersion const&);
        *((void**)&rv) = dlsym("?initializeBehaviorStack@VanillaGameModuleServer@@UEAAXAEBVExperiments@@AEAVIResourcePackRepository@@AEAVResourcePackStack@@AEBVBaseGameVersion@@@Z");
        return (this->*rv)(std::forward<class Experiments const&>(a0), std::forward<class IResourcePackRepository&>(a1), std::forward<class ResourcePackStack&>(a2), std::forward<class BaseGameVersion const&>(a3));
    }
    inline void setupCommands(class CommandRegistry& a0){
        void (VanillaGameModuleServer::*rv)(class CommandRegistry&);
        *((void**)&rv) = dlsym("?setupCommands@VanillaGameModuleServer@@UEAAXAEAVCommandRegistry@@@Z");
        return (this->*rv)(std::forward<class CommandRegistry&>(a0));
    }
    */

protected:

private:
    MCAPI void _configureWorldGen(class IWorldRegistriesProvider&, struct SpawnSettings const&, class Experiments const&, class ResourcePackManager&, class BaseGameVersion const&);
    MCAPI void _registerGameplayHandlers(class Level&) const;
    MCAPI void _registerListeners(class Level&);
};