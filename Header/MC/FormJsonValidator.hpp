// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "JsonValidator.hpp"
#define EXTRA_INCLUDE_PART_FORMJSONVALIDATOR
#include "Extra/FormJsonValidatorAPI.hpp"
#undef EXTRA_INCLUDE_PART_FORMJSONVALIDATOR
class FormJsonValidator {
#include "Extra/FormJsonValidatorAPI.hpp"
public:
    MCAPI static class JsonValidator::Property getContentItemProperty(class JsonValidator::Property const&, class JsonValidator::Property const&, class JsonValidator::Property const&, class JsonValidator::Property const&, class JsonValidator::Property const&, class JsonValidator::Property const&);
    MCAPI static class JsonValidator::Property getControlLockedProperty();
    MCAPI static class JsonValidator::Property getDropdownProperty(bool);
    MCAPI static class JsonValidator::Property getLabelProperty();
    MCAPI static class JsonValidator::Property getSliderProperty(bool);
    MCAPI static class JsonValidator::Property getStepSliderProperty(bool);
    MCAPI static class JsonValidator::Property getTextInputProperty(bool);
    MCAPI static class JsonValidator::Property getToggleProperty(bool);

protected:

private:
};