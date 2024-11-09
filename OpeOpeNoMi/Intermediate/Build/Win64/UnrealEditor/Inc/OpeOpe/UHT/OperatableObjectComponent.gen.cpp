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

// Begin Class UOperatableObjectComponent Function RotateActor
struct Z_Construct_UFunction_UOperatableObjectComponent_RotateActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OperatableObjectComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatableObjectComponent_RotateActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatableObjectComponent, nullptr, "RotateActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatableObjectComponent_RotateActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatableObjectComponent_RotateActor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOperatableObjectComponent_RotateActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatableObjectComponent_RotateActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperatableObjectComponent::execRotateActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateActor();
	P_NATIVE_END;
}
// End Class UOperatableObjectComponent Function RotateActor

// Begin Class UOperatableObjectComponent
void UOperatableObjectComponent::StaticRegisterNativesUOperatableObjectComponent()
{
	UClass* Class = UOperatableObjectComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RotateActor", &UOperatableObjectComponent::execRotateActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatableObjectComponent_RotateActor, "RotateActor" }, // 995178722
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UOperatableObjectComponent, UOperatableObjectComponent::StaticClass, TEXT("UOperatableObjectComponent"), &Z_Registration_Info_UClass_UOperatableObjectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatableObjectComponent), 2066198748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_OperatableObjectComponent_h_3998440944(TEXT("/Script/OpeOpe"),
	Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_OperatableObjectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_OperatableObjectComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
