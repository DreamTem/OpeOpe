// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpeOpe/Public/OperatableObjectComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatableObjectComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OPEOPE_API UClass* Z_Construct_UClass_UOperatableObjectComponent();
OPEOPE_API UClass* Z_Construct_UClass_UOperatableObjectComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OpeOpe();
// End Cross Module References

// Begin Class UOperatableObjectComponent
void UOperatableObjectComponent::StaticRegisterNativesUOperatableObjectComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatableObjectComponent);
UClass* Z_Construct_UClass_UOperatableObjectComponent_NoRegister()
{
	return UOperatableObjectComponent::StaticClass();
}
struct Z_Construct_UClass_UOperatableObjectComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OperatableObjectComponent.h" },
		{ "ModuleRelativePath", "Public/OperatableObjectComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatableObjectComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOperatableObjectComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OpeOpe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatableObjectComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatableObjectComponent_Statics::ClassParams = {
	&UOperatableObjectComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatableObjectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatableObjectComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOperatableObjectComponent()
{
	if (!Z_Registration_Info_UClass_UOperatableObjectComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatableObjectComponent.OuterSingleton, Z_Construct_UClass_UOperatableObjectComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOperatableObjectComponent.OuterSingleton;
}
template<> OPEOPE_API UClass* StaticClass<UOperatableObjectComponent>()
{
	return UOperatableObjectComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatableObjectComponent);
UOperatableObjectComponent::~UOperatableObjectComponent() {}
// End Class UOperatableObjectComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_OperatableObjectComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOperatableObjectComponent, UOperatableObjectComponent::StaticClass, TEXT("UOperatableObjectComponent"), &Z_Registration_Info_UClass_UOperatableObjectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatableObjectComponent), 2324856422U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_OperatableObjectComponent_h_209761512(TEXT("/Script/OpeOpe"),
	Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_OperatableObjectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_OperatableObjectComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
