// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MonsterRoomFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MONSTERROOMFEATURE
public:
    class MonsterRoomFeature& operator=(class MonsterRoomFeature const&) = delete;
    MonsterRoomFeature(class MonsterRoomFeature const&) = delete;
#endif

public:
    /*0*/ virtual ~MonsterRoomFeature();
<<<<<<< HEAD
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual ~MonsterRoomFeature();
=======
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual ~MonsterRoomFeature();
>>>>>>> 51d0529ff191cb743d7dd9047e8ce5e7edba226d
    /*
    inline  ~MonsterRoomFeature(){
         (MonsterRoomFeature::*rv)();
        *((void**)&rv) = dlsym("??1MonsterRoomFeature@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI MonsterRoomFeature();

protected:

private:

};