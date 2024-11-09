// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpeOpe/Public/LawCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLawCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
OPEOPE_API UClass* Z_Construct_UClass_ALawCharacter();
OPEOPE_API UClass* Z_Construct_UClass_ALawCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_OpeOpe();
// End Cross Module References

// Begin Class ALawCharacter
void ALawCharacter::StaticRegisterNativesALawCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALawCharacter);
UClass* Z_Construct_UClass_ALawCharacter_NoRegister()
{
	return ALawCharacter::StaticClass();
}
struct Z_Construct_UClass_ALawCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LawCharacter.h" },
		{ "ModuleRelativePath", "Public/LawCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportCue_MetaData[] = {
		{ "Category", "LawCharacter" },
		{ "ModuleRelativePath", "Public/LawCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeleportCue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALawCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALawCharacter_Statics::NewProp_TeleportCue = { "TeleportCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALawCharacter, TeleportCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportCue_MetaData), NewProp_TeleportCue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALawCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALawCharacter_Statics::NewProp_TeleportCue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALawCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALawCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_OpeOpe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALawCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALawCharacter_Statics::ClassParams = {
	&ALawCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALawCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALawCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALawCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ALawCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALawCharacter()
{
	if (!Z_Registration_Info_UClass_ALawCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALawCharacter.OuterSingleton, Z_Construct_UClass_ALawCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALawCharacter.OuterSingleton;
}
template<> OPEOPE_API UClass* StaticClass<ALawCharacter>()
{
	return ALawCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALawCharacter);
ALawCharacter::~ALawCharacter() {}
// End Class ALawCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_LawCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALawCharacter, ALawCharacter::StaticClass, TEXT("ALawCharacter"), &Z_Registration_Info_UClass_ALawCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALawCharacter), 920133031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_LawCharacter_h_748031336(TEXT("/Script/OpeOpe"),
	Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_LawCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_LawCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
