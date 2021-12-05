// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_RESOURCESIGNATURE
#include "Extra/ResourceSignatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_RESOURCESIGNATURE
class ResourceSignature {
#include "Extra/ResourceSignatureAPI.hpp"
public:
    MCAPI static class Core::PathBuffer<std::string > const SIGNATURE_FILENAME;

protected:

private:
    MCAPI bool _areKnownFilesValid(class PackAccessStrategy const&, bool);
    MCAPI bool _checkSignedFiles(class PackAccessStrategy const&) const;
    MCAPI void _loadSignaturesFile(class Core::Path const&, class PackAccessStrategy const&);
};