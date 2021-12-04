// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RENDEROFFSETSITEMCOMPONENT
#include "Extra/RenderOffsetsItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_RENDEROFFSETSITEMCOMPONENT
class RenderOffsetsItemComponent {
#include "Extra/RenderOffsetsItemComponentAPI.hpp"
public:
    /*0*/ virtual ~RenderOffsetsItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual bool isNetworkComponent() const;
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();

private:
    MCAPI std::unique_ptr<class CompoundTag> _buildTRSTag(struct RenderOffsetsItemComponent::TRS const&) const;
    MCAPI std::unique_ptr<class CompoundTag> _buildVector3Tag(class std::array<float, 3> const&) const;
    MCAPI void _trsFromTag(class CompoundTag const&, struct RenderOffsetsItemComponent::TRS&);

    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Main_Hand_Defaults;
    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Off_Hand_Defaults;
};