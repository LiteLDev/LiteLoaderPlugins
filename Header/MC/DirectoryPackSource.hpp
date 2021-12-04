// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_DIRECTORYPACKSOURCE
#include "Extra/DirectoryPackSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART_DIRECTORYPACKSOURCE
class DirectoryPackSource {
#include "Extra/DirectoryPackSourceAPI.hpp"
public:
    /*0*/ virtual ~DirectoryPackSource();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual int /*enum PackOrigin*/ getPackOrigin() const;
    /*4*/ virtual int /*enum PackType*/ getPackType() const;
    /*5*/ virtual class PackSourceReport load(class IPackManifestFactory&, class IContentKeyProvider const&);

public:
    MCAPI static void checkAndRemoveIncompletePacks(class Core::Path const&);
};