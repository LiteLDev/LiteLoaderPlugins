// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EndGatewayFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDGATEWAYFEATURE
public:
    class EndGatewayFeature& operator=(class EndGatewayFeature const&) = delete;
    EndGatewayFeature(class EndGatewayFeature const&) = delete;
    EndGatewayFeature() = delete;
#endif

public:
    /*0*/ virtual ~EndGatewayFeature();
<<<<<<< HEAD
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual ~EndGatewayFeature();
=======
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual ~EndGatewayFeature();
>>>>>>> 51d0529ff191cb743d7dd9047e8ce5e7edba226d
    /*
    inline  ~EndGatewayFeature(){
         (EndGatewayFeature::*rv)();
        *((void**)&rv) = dlsym("??1EndGatewayFeature@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};