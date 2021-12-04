// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_LOCALIZATION
#include "Extra/LocalizationAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOCALIZATION
class Localization {
#include "Extra/LocalizationAPI.hpp"

public:
    MCAPI void appendTranslations(class Localization const&);
    MCAPI void appendTranslations(std::string const&, std::vector<std::string> const&, std::vector<std::string> const&, std::string const&);
    MCAPI bool get(std::string const&, std::string&, std::vector<std::string> const&) const;
    MCAPI std::string getFullLanguageCode() const;
    MCAPI void loadFromPack(std::string const&, class PackAccessStrategy const&, std::vector<std::string> const&);
    MCAPI void loadFromResourcePackManager(class ResourcePackManager&, std::vector<std::string> const&);

    MCAPI static std::string getLanguageCode(std::string const&);

protected:
    MCAPI struct OptionalString _get(std::string const&, std::vector<std::string> const&) const;
    MCAPI class Core::PathBuffer<std::string> _getLangFilePath(std::string const&);
    MCAPI struct OptionalString _getSimple(std::string const&) const;
    MCAPI struct OptionalString _parseFormattedString(std::string const&) const;
    MCAPI void _replaceTokens(std::string&, std::vector<std::string> const&) const;

    MCAPI static bool _isCommaSeperatedLanguage(std::string const&);
};