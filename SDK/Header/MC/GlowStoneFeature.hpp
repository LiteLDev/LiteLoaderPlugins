// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GlowStoneFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLOWSTONEFEATURE
public:
    class GlowStoneFeature& operator=(class GlowStoneFeature const&) = delete;
    GlowStoneFeature(class GlowStoneFeature const&) = delete;
    GlowStoneFeature() = delete;
#endif

public:
    /*0*/ virtual ~GlowStoneFeature();
<<<<<<< HEAD
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual ~GlowStoneFeature();
=======
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual ~GlowStoneFeature();
>>>>>>> 51d0529ff191cb743d7dd9047e8ce5e7edba226d
    /*
    inline  ~GlowStoneFeature(){
         (GlowStoneFeature::*rv)();
        *((void**)&rv) = dlsym("??1GlowStoneFeature@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};