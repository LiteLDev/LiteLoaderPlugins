// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_COMPOSITEPACKSOURCE
#include "Extra/CompositePackSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMPOSITEPACKSOURCE
class CompositePackSource {
#include "Extra/CompositePackSourceAPI.hpp"
public:
    /*0*/ virtual ~CompositePackSource();
    /*1*/ virtual void forEachPackConst(class std::function<void (class Pack const&)>) const;
    /*2*/ virtual void forEachPack(class std::function<void (class Pack&)>);
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual class PackSourceReport load(class IPackManifestFactory&, class IContentKeyProvider const&);
    /*
    inline void forEachPack(class std::function<void (class Pack&)> a0){
        void (CompositePackSource::*rv)(class std::function<void (class Pack&)>);
        *((void**)&rv) = dlsym("?forEachPack@CompositePackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z");
        return (this->*rv)(std::forward<class std::function<void (class Pack&)>>(a0));
    }
    inline void forEachPackConst(class std::function<void (class Pack const&)> a0) const{
        void (CompositePackSource::*rv)(class std::function<void (class Pack const&)>) const;
        *((void**)&rv) = dlsym("?forEachPackConst@CompositePackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z");
        return (this->*rv)(std::forward<class std::function<void (class Pack const&)>>(a0));
    }
    inline class PackSourceReport load(class IPackManifestFactory& a0, class IContentKeyProvider const& a1){
        class PackSourceReport (CompositePackSource::*rv)(class IPackManifestFactory&, class IContentKeyProvider const&);
        *((void**)&rv) = dlsym("?load@CompositePackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBVIContentKeyProvider@@@Z");
        return (this->*rv)(std::forward<class IPackManifestFactory&>(a0), std::forward<class IContentKeyProvider const&>(a1));
    }
    */

protected:

private:
};