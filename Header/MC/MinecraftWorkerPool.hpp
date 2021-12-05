// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Bedrock.hpp"
#define EXTRA_INCLUDE_PART_MINECRAFTWORKERPOOL
#include "Extra/MinecraftWorkerPoolAPI.hpp"
#undef EXTRA_INCLUDE_PART_MINECRAFTWORKERPOOL
class MinecraftWorkerPool {
#include "Extra/MinecraftWorkerPoolAPI.hpp"
public:
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> ASYNC;
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> CONNECTEDSTORAGE;
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> DISK;
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> INPUT;
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> LEVELDB;
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> LEVELDB_COMPACTION;
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> NETWORK;
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> PYTHONRUNTIME;
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> RENDERING;
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> VR;
    MCAPI static class Bedrock::NonOwnerPointer<class WorkerPool> WATCHDOG;
    MCAPI static void configureMainThread();
    MCAPI static void configureServerThread();
    MCAPI static void createSingletons();
    MCAPI static void destroySingletons();
    MCAPI static void initializeDefaults();
    MCAPI static void loadWorkerConfigurations(unsigned int, unsigned int);

protected:

private:
};