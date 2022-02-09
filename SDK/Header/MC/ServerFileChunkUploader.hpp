// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "IFileChunkUploader.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerFileChunkUploader : public IFileChunkUploader {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERFILECHUNKUPLOADER
public:
    class ServerFileChunkUploader& operator=(class ServerFileChunkUploader const&) = delete;
    ServerFileChunkUploader(class ServerFileChunkUploader const&) = delete;
    ServerFileChunkUploader() = delete;
#endif

public:
    /*0*/ virtual ~ServerFileChunkUploader();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void initFileUploader(std::string const&, struct FileInfo const&, int, class Json::Value const&, class std::function<void (bool)>);
    /*3*/ virtual void getServerMissingChunks(struct FileInfo const&, class std::function<void (std::vector<struct FileChunkInfo>)>) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void uploadChunk(struct FileInfo const&, struct FileChunkInfo const&, std::vector<unsigned char> const&, class std::function<void (bool)>);
    /*7*/ virtual bool canCancelUpload(struct FileInfo const&) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual enum UploadError getInitErrorCode() const;
    /*10*/ virtual float getUploadProgress(struct FileInfo const&) const;
    /*11*/ virtual struct FileChunkInfo getChunkInfo(struct FileInfo const&, int) const;
    /*
    inline void update(){
        void (ServerFileChunkUploader::*rv)();
        *((void**)&rv) = dlsym("?update@ServerFileChunkUploader@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void confirmChunkReceived(struct FileInfo const& a0, struct FileChunkInfo const& a1){
        void (ServerFileChunkUploader::*rv)(struct FileInfo const&, struct FileChunkInfo const&);
        *((void**)&rv) = dlsym("?confirmChunkReceived@ServerFileChunkUploader@@UEAAXAEBUFileInfo@@AEBUFileChunkInfo@@@Z");
        return (this->*rv)(std::forward<struct FileInfo const&>(a0), std::forward<struct FileChunkInfo const&>(a1));
    }
    inline void cancelUpload(struct FileInfo const& a0){
        void (ServerFileChunkUploader::*rv)(struct FileInfo const&);
        *((void**)&rv) = dlsym("?cancelUpload@ServerFileChunkUploader@@UEAAXAEBUFileInfo@@@Z");
        return (this->*rv)(std::forward<struct FileInfo const&>(a0));
    }
    */

protected:

private:

};