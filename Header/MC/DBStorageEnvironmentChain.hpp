// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_DBSTORAGEENVIRONMENTCHAIN
#include "Extra/DBStorageEnvironmentChainAPI.hpp"
#undef EXTRA_INCLUDE_PART_DBSTORAGEENVIRONMENTCHAIN
class DBStorageEnvironmentChain {
#include "Extra/DBStorageEnvironmentChainAPI.hpp"
public:
    MCAPI class Core::Result isChainValid(bool) const;
    MCAPI static bool isContentKeyValid(class leveldb::Env*, class Core::Path const&, class ContentIdentity const&, std::string const&, class std::shared_ptr<class Core::FileStorageArea>);

protected:

private:
    MCAPI static std::unique_ptr<class FlushableEnv> createFlushableEnv(class leveldb::Env*, class std::shared_ptr<class Core::FileStorageArea>, class Core::Path const&);
};