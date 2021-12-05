// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ClientReplayStatePolicy.hpp"
#define EXTRA_INCLUDE_PART_SERVERCORRECTIONPOLICY
#include "Extra/ServerCorrectionPolicyAPI.hpp"
#undef EXTRA_INCLUDE_PART_SERVERCORRECTIONPOLICY
class ServerCorrectionPolicy : public ClientReplayStatePolicy {
#include "Extra/ServerCorrectionPolicyAPI.hpp"
public:
    /*0*/ virtual ~ServerCorrectionPolicy();
    /*1*/ virtual struct MovementCorrection shouldCorrectMovement(struct IActorMovementProxy&, class PlayerAuthInputPacket const&, unsigned __int64);
    /*
    inline struct MovementCorrection shouldCorrectMovement(struct IActorMovementProxy& a0, class PlayerAuthInputPacket const& a1, unsigned __int64 a2){
        struct MovementCorrection (ServerCorrectionPolicy::*rv)(struct IActorMovementProxy&, class PlayerAuthInputPacket const&, unsigned __int64);
        *((void**)&rv) = dlsym("?shouldCorrectMovement@ServerCorrectionPolicy@@UEAA?AUMovementCorrection@@AEAUIActorMovementProxy@@AEBVPlayerAuthInputPacket@@_K@Z");
        return (this->*rv)(std::forward<struct IActorMovementProxy&>(a0), std::forward<class PlayerAuthInputPacket const&>(a1), std::forward<unsigned __int64>(a2));
    }
    */

protected:

private:
};