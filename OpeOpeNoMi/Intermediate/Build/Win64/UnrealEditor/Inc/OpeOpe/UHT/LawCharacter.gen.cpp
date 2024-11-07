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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALawCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
struct Z_CompiledInDeferFile_FID_Users_PivGravcya_Documents_Unreal_Projects_OpeOpe_Source_OpeOpe_Public_LawCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALawCharacter, ALawCharacter::StaticClass, TEXT("ALawCharacter"), &Z_Registration_Info_UClass_ALawCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALawCharacter), 1321019016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PivGravcya_Documents_Unreal_Projects_OpeOpe_Source_OpeOpe_Public_LawCharacter_h_1596245893(TEXT("/Script/OpeOpe"),
	Z_CompiledInDeferFile_FID_Users_PivGravcya_Documents_Unreal_Projects_OpeOpe_Source_OpeOpe_Public_LawCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PivGravcya_Documents_Unreal_Projects_OpeOpe_Source_OpeOpe_Public_LawCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
