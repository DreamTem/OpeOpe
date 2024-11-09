// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpeOpe/Public/SwappableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwappableComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OPEOPE_API UClass* Z_Construct_UClass_USwappableComponent();
OPEOPE_API UClass* Z_Construct_UClass_USwappableComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OpeOpe();
// End Cross Module References

// Begin Class USwappableComponent Function SwapPlaces
struct Z_Construct_UFunction_USwappableComponent_SwapPlaces_Statics
{
	struct SwappableComponent_eventSwapPlaces_Parms
	{
		FVector PositionToSwap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SwappableComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionToSwap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USwappableComponent_SwapPlaces_Statics::NewProp_PositionToSwap = { "PositionToSwap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SwappableComponent_eventSwapPlaces_Parms, PositionToSwap), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USwappableComponent_SwapPlaces_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USwappableComponent_SwapPlaces_Statics::NewProp_PositionToSwap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USwappableComponent_SwapPlaces_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwappableComponent_SwapPlaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwappableComponent, nullptr, "SwapPlaces", nullptr, nullptr, Z_Construct_UFunction_USwappableComponent_SwapPlaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USwappableComponent_SwapPlaces_Statics::PropPointers), sizeof(Z_Construct_UFunction_USwappableComponent_SwapPlaces_Statics::SwappableComponent_eventSwapPlaces_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USwappableComponent_SwapPlaces_Statics::Function_MetaDataParams), Z_Construct_UFunction_USwappableComponent_SwapPlaces_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USwappableComponent_SwapPlaces_Statics::SwappableComponent_eventSwapPlaces_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USwappableComponent_SwapPlaces()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwappableComponent_SwapPlaces_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USwappableComponent::execSwapPlaces)
{
	P_GET_STRUCT(FVector,Z_Param_PositionToSwap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwapPlaces(Z_Param_PositionToSwap);
	P_NATIVE_END;
}
// End Class USwappableComponent Function SwapPlaces

// Begin Class USwappableComponent
void USwappableComponent::StaticRegisterNativesUSwappableComponent()
{
	UClass* Class = USwappableComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SwapPlaces", &USwappableComponent::execSwapPlaces },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USwappableComponent);
UClass* Z_Construct_UClass_USwappableComponent_NoRegister()
{
	return USwappableComponent::StaticClass();
}
struct Z_Construct_UClass_USwappableComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SwappableComponent.h" },
		{ "ModuleRelativePath", "Public/SwappableComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USwappableComponent_SwapPlaces, "SwapPlaces" }, // 2395513385
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwappableComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USwappableComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OpeOpe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwappableComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USwappableComponent_Statics::ClassParams = {
	&USwappableComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USwappableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USwappableComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USwappableComponent()
{
	if (!Z_Registration_Info_UClass_USwappableComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwappableComponent.OuterSingleton, Z_Construct_UClass_USwappableComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USwappableComponent.OuterSingleton;
}
template<> OPEOPE_API UClass* StaticClass<USwappableComponent>()
{
	return USwappableComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USwappableComponent);
USwappableComponent::~USwappableComponent() {}
// End Class USwappableComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_SwappableComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USwappableComponent, USwappableComponent::StaticClass, TEXT("USwappableComponent"), &Z_Registration_Info_UClass_USwappableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwappableComponent), 464523592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_SwappableComponent_h_2870715173(TEXT("/Script/OpeOpe"),
	Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_SwappableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_SwappableComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
