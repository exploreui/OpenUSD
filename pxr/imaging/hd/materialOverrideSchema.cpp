//
// Copyright 2023 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
////////////////////////////////////////////////////////////////////////

/* ************************************************************************** */
/* **                                                                      ** */
/* ** This file is generated by a script.                                  ** */
/* **                                                                      ** */
/* ** Do not edit it directly (unless it is within a CUSTOM CODE section)! ** */
/* ** Edit hdSchemaDefs.py instead to make changes.                        ** */
/* **                                                                      ** */
/* ************************************************************************** */

#include "pxr/imaging/hd/materialOverrideSchema.h"

#include "pxr/imaging/hd/retainedDataSource.h"

#include "pxr/base/trace/trace.h"

// --(BEGIN CUSTOM CODE: Includes)--
// --(END CUSTOM CODE: Includes)--

PXR_NAMESPACE_OPEN_SCOPE

TF_DEFINE_PUBLIC_TOKENS(HdMaterialOverrideSchemaTokens,
    HD_MATERIAL_OVERRIDE_SCHEMA_TOKENS);

// --(BEGIN CUSTOM CODE: Schema Methods)--
// --(END CUSTOM CODE: Schema Methods)--

HdMaterialNodeParameterContainerSchema
HdMaterialOverrideSchema::GetInterfaceValues() const
{
    return HdMaterialNodeParameterContainerSchema(_GetTypedDataSource<HdContainerDataSource>(
        HdMaterialOverrideSchemaTokens->interfaceValues));
}

/*static*/
HdContainerDataSourceHandle
HdMaterialOverrideSchema::BuildRetained(
        const HdContainerDataSourceHandle &interfaceValues
)
{
    TfToken _names[1];
    HdDataSourceBaseHandle _values[1];

    size_t _count = 0;

    if (interfaceValues) {
        _names[_count] = HdMaterialOverrideSchemaTokens->interfaceValues;
        _values[_count++] = interfaceValues;
    }
    return HdRetainedContainerDataSource::New(_count, _names, _values);
}

HdMaterialOverrideSchema::Builder &
HdMaterialOverrideSchema::Builder::SetInterfaceValues(
    const HdContainerDataSourceHandle &interfaceValues)
{
    _interfaceValues = interfaceValues;
    return *this;
}

HdContainerDataSourceHandle
HdMaterialOverrideSchema::Builder::Build()
{
    return HdMaterialOverrideSchema::BuildRetained(
        _interfaceValues
    );
}

/*static*/
HdMaterialOverrideSchema
HdMaterialOverrideSchema::GetFromParent(
        const HdContainerDataSourceHandle &fromParentContainer)
{
    return HdMaterialOverrideSchema(
        fromParentContainer
        ? HdContainerDataSource::Cast(fromParentContainer->Get(
                HdMaterialOverrideSchemaTokens->materialOverride))
        : nullptr);
}

/*static*/
const TfToken &
HdMaterialOverrideSchema::GetSchemaToken()
{
    return HdMaterialOverrideSchemaTokens->materialOverride;
}

/*static*/
const HdDataSourceLocator &
HdMaterialOverrideSchema::GetDefaultLocator()
{
    static const HdDataSourceLocator locator(GetSchemaToken());
    return locator;
} 

PXR_NAMESPACE_CLOSE_SCOPE