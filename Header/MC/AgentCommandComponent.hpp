// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_AGENTCOMMANDCOMPONENT
#include "Extra/AgentCommandComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_AGENTCOMMANDCOMPONENT
class AgentCommandComponent {
#include "Extra/AgentCommandComponentAPI.hpp"
public:
    MCAPI bool addCommand(std::unique_ptr<class AgentCommands::Command>);
    MCAPI std::unique_ptr<class AgentCommands::Command> const& getCurrentCommand() const;
    MCAPI int& getWaitForNextCommandTicks();
    MCAPI bool hasCommand();
    MCAPI void initFromDefinition(class Actor&);
    MCAPI void setCurrentCommand(std::unique_ptr<class AgentCommands::Command>);

protected:

private:
};