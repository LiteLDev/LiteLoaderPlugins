// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_COMMANDREGISTRY
#include "Extra/CommandRegistryAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMMANDREGISTRY
class CommandRegistry {
#include "Extra/CommandRegistryAPI.hpp"
public:
    MCAPI void addEnumValueConstraints(std::string const&, std::vector<std::string> const&, enum SemanticConstraint);
    MCAPI int addEnumValues(std::string const&, std::vector<std::string> const&);
    MCAPI int addSoftEnum(std::string const&, std::vector<std::string>);
    MCAPI void addSoftEnumValues(std::string const&, std::vector<std::string>);
    MCAPI std::vector<std::string> getAliases(std::string const&) const;
    MCAPI std::vector<std::string> getAlphabeticalLookup(class CommandOrigin const&) const;
    MCAPI std::string getCommandName(std::string const&) const;
    MCAPI struct CommandSyntaxInformation getCommandOverloadSyntaxInformation(class CommandOrigin const&, std::string const&) const;
    MCAPI enum CommandStatus getCommandStatus(std::string const&) const;
    MCAPI bool isCommandOfType(std::string const&, enum CommandTypeFlag) const;
    MCAPI bool isValidCommand(std::string const&) const;
    MCAPI void registerAlias(std::string, std::string);
    MCAPI void registerCommand(std::string const&, char const*, enum CommandPermissionLevel, struct CommandFlag, struct CommandFlag);
    MCAPI void removeSoftEnumValues(std::string const&, std::vector<std::string>);
    MCAPI bool requiresCheatsEnabled(std::string const&) const;
    MCAPI class AvailableCommandsPacket serializeAvailableCommands() const;
    MCAPI void setCommandRegistrationOverride(class std::function<void (struct CommandFlag&, std::string const&)>);
    MCAPI void setNetworkUpdateCallback(class std::function<void (class Packet const&)>);
    MCAPI void setScoreCallback(class std::function<int (bool&, std::string const&, class Actor const&)>);
    MCAPI void setSoftEnumValues(std::string const&, std::vector<std::string>);

protected:

private:
    MCAPI void _addEnumValueConstraintsInternal(std::vector<struct std::pair<unsigned __int64, unsigned int>> const&, enum SemanticConstraint);
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(std::string const&, std::vector<struct std::pair<std::string, unsigned __int64>> const&, class typeid_t<class CommandRegistry>, bool (CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&) const);
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(std::string const&, std::vector<struct std::pair<unsigned __int64, unsigned __int64>> const&, class typeid_t<class CommandRegistry>, bool (CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&) const);
    MCAPI class CommandRegistry::Symbol _addFunctionSoftEnum();
    MCAPI class CommandRegistry::Symbol _getConstrainedParamEnumSymbol(class CommandRegistry::Symbol) const;
    MCAPI bool _isCommandElementValid(std::string const&) const;
    MCAPI bool _matchesEnumConstraintsSet(class CommandRegistry::Symbol const&, class CommandOrigin const&, class CommandRegistry::Symbol const&, enum SemanticConstraint) const;
    MCAPI void addEnumValuesToExisting(unsigned int, std::vector<struct std::pair<unsigned __int64, unsigned __int64>> const&);
    MCAPI class CommandRegistry::Symbol addPostfix(std::string const&);
    MCAPI void addRule(class CommandRegistry::Symbol, std::vector<class CommandRegistry::Symbol>&&, class std::function<struct CommandRegistry::ParseToken* (struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol)>, class CommandVersion);
    MCAPI void addSemanticConstraint(enum SemanticConstraint);
    MCAPI class CommandRegistry::Symbol addSoftTerminal(std::string const&);
    MCAPI void buildFirstSet(struct CommandRegistry::ParseTable&, class CommandRegistry::Symbol, unsigned int) const;
    MCAPI void buildFollowSet(struct CommandRegistry::ParseTable&, class CommandRegistry::Symbol, unsigned int, class std::set<class CommandRegistry::Symbol, struct std::less<class CommandRegistry::Symbol>, class std::allocator<class CommandRegistry::Symbol> >&) const;
    MCAPI class CommandRegistry::Symbol buildOptionalRuleChain(struct CommandRegistry::Signature const&, std::vector<class CommandParameterData> const&, std::vector<class CommandRegistry::Symbol> const&);
    MCAPI void buildOverload(struct CommandRegistry::Overload&);
    MCAPI void buildParseTable(unsigned int) const;
    MCAPI class CommandRegistry::Symbol buildRules(struct CommandRegistry::Signature&, std::vector<struct CommandRegistry::Overload*> const&, unsigned __int64);
    MCAPI bool checkOriginCommandFlags(class CommandOrigin const&, struct CommandFlag, enum CommandPermissionLevel) const;
    MCAPI std::unique_ptr<class Command> createCommand(struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&) const;
    MCAPI std::string describe(struct CommandRegistry::Signature const&, std::string const&, struct CommandRegistry::Overload const&, unsigned int, unsigned int*, unsigned int*) const;
    MCAPI std::string describe(class CommandParameterData const&) const;
    MCAPI std::string describe(class CommandRegistry::Symbol) const;
    MCAPI struct CommandRegistry::Signature* findCommand(std::string const&);
    MCAPI struct CommandRegistry::Signature const* findCommand(std::string const&) const;
    MCAPI class CommandRegistry::Symbol findEnumValue(std::string const&) const;
    MCAPI class CommandRegistry::Symbol findIdentifierInfo(std::string const&) const;
    MCAPI class CommandRegistry::Symbol findPostfix(std::string const&) const;
    MCAPI std::vector<class CommandRegistry::Symbol> first(struct CommandRegistry::ParseTable&, std::vector<class CommandRegistry::Symbol> const&) const;
    MCAPI void forEachNonTerminal(class std::function<void (class CommandRegistry::Symbol)>) const;
    MCAPI unsigned __int64 getEnumData(struct CommandRegistry::ParseToken const&) const;
    MCAPI struct InvertableFilter<std::string > getInvertableFilter(struct CommandRegistry::ParseToken const&) const;
    MCAPI bool isValid(class CommandRegistry::Symbol) const;
    MCAPI bool originCanRun(class CommandOrigin const&, struct CommandRegistry::Overload const&) const;
    MCAPI bool originCanRun(class CommandOrigin const&, struct CommandRegistry::Signature const&) const;
    MCAPI bool parseOperator(enum CommandOperator*, struct CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&) const;
    MCAPI bool parseSelector(class CommandSelectorBase*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&, bool) const;
    MCAPI void registerOverloadInternal(struct CommandRegistry::Signature&, struct CommandRegistry::Overload&);
    MCAPI void setupOverloadRules(struct CommandRegistry::Signature&, struct CommandRegistry::Overload&);
    MCAPI std::string symbolToString(class CommandRegistry::Symbol) const;
    MCAPI static std::string _removeStringQuotes(std::string const&);
    MCAPI static struct CommandRegistry::ParseToken* collapse(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol);
    MCAPI static struct CommandRegistry::ParseToken* collapseOn(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol, class CommandRegistry::Symbol);
    MCAPI static struct CommandRegistry::ParseToken* expand(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol);
    MCAPI static struct CommandRegistry::ParseToken* expandExcept(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol, class CommandRegistry::Symbol);
    MCAPI static struct CommandRegistry::ParseToken* fold(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol, class CommandRegistry::Symbol);
    MCAPI static struct CommandRegistry::ParseToken* kill(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol);
    MCAPI static bool readFloat(float&, struct CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&);
    MCAPI static bool readInt(int&, struct CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&);
    MCAPI static bool readRelativeCoordinate(bool&, float&, struct CommandRegistry::ParseToken const&, bool, std::string&, std::vector<std::string>&);
};