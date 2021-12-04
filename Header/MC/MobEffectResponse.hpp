// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_MOBEFFECTRESPONSE
#include "Extra/MobEffectResponseAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOBEFFECTRESPONSE
class MobEffectResponse {
#include "Extra/MobEffectResponseAPI.hpp"
public:
    /*0*/ virtual ~MobEffectResponse();
    /*1*/ virtual std::string const& getName() const;
    /*2*/ virtual void executeAction(class RenderParams&) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>&, class Factory<class EventResponse> const&) const;

public:
    MCAPI static std::string const NameID;
};