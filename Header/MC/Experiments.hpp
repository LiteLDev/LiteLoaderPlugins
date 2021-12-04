// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_EXPERIMENTS
#include "Extra/ExperimentsAPI.hpp"
#undef EXTRA_INCLUDE_PART_EXPERIMENTS
class Experiments {
#include "Extra/ExperimentsAPI.hpp"

public:
    MCAPI bool DataDrivenBiomes() const;
    MCAPI bool DataDrivenItems() const;
    MCAPI bool Gametest() const;
    MCAPI bool Scripting() const;
    MCAPI bool UpcomingCreatorFeatures() const;
    MCAPI bool VanillaExperiments() const;
    MCAPI std::string getExperimentsActiveAsJSONList() const;
    MCAPI std::vector<std::string> getExperimentsActiveForTelemetry() const;
    MCAPI void getTagData(class CompoundTag const&);
    MCAPI bool isExperimentEnabled(enum AllExperiments) const;
    MCAPI void setTagData(class CompoundTag&) const;

    MCAPI static std::string const& getExperimentTextID(enum AllExperiments);
    MCAPI static std::vector<std::string> const& getToggleNames();
};