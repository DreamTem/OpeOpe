// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpeOpe/Public/Law_Controller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaw_Controller() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
OPEOPE_API UClass* Z_Construct_UClass_ALaw_Controller();
OPEOPE_API UClass* Z_Construct_UClass_ALaw_Controller_NoRegister();
UPackage* Z_Construct_UPackage__Script_OpeOpe();
// End Cross Module References

// Begin Class ALaw_Controller Function ThrowActor
struct Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics
{
	struct Law_Controller_eventThrowActor_Parms
	{
		AActor* Act;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Law_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Act;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::NewProp_Act = { "Act", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Law_Controller_eventThrowActor_Parms, Act), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::NewProp_Act,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaw_Controller, nullptr, "ThrowActor", nullptr, nullptr, Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::Law_Controller_eventThrowActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::Law_Controller_eventThrowActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaw_Controller_ThrowActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaw_Controller::execThrowActor)
{
	P_GET_OBJECT(AActor,Z_Param_Act);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ThrowActor(Z_Param_Act);
	P_NATIVE_END;
}
// End Class ALaw_Controller Function ThrowActor

// Begin Class ALaw_Controller
void ALaw_Controller::StaticRegisterNativesALaw_Controller()
{
	UClass* Class = ALaw_Controller::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ThrowActor", &ALaw_Controller::execThrowActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaw_Controller);
UClass* Z_Construct_UClass_ALaw_Controller_NoRegister()
{
	return ALaw_Controller::StaticClass();
}
struct Z_Construct_UClass_ALaw_Controller_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Law_Controller.h" },
		{ "ModuleRelativePath", "Public/Law_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShamblesCue_MetaData[] = {
		{ "Category", "Law_Controller" },
		{ "ModuleRelativePath", "Public/Law_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TactCue_MetaData[] = {
		{ "Category", "Law_Controller" },
		{ "ModuleRelativePath", "Public/Law_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShamblesCue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TactCue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALaw_Controller_ThrowActor, "ThrowActor" }, // 2103271491
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaw_Controller>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaw_Controller_Statics::NewProp_ShamblesCue = { "ShamblesCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaw_Controller, ShamblesCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShamblesCue_MetaData), NewProp_ShamblesCue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaw_Controller_Statics::NewProp_TactCue = { "TactCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaw_Controller, TactCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TactCue_MetaData), NewProp_TactCue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaw_Controller_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaw_Controller_Statics::NewProp_ShamblesCue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaw_Controller_Statics::NewProp_TactCue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaw_Controller_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALaw_Controller_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_OpeOpe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaw_Controller_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaw_Controller_Statics::ClassParams = {
	&ALaw_Controller::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALaw_Controller_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALaw_Controller_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaw_Controller_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaw_Controller_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaw_Controller()
{
	if (!Z_Registration_Info_UClass_ALaw_Controller.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaw_Controller.OuterSingleton, Z_Construct_UClass_ALaw_Controller_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaw_Controller.OuterSingleton;
}
template<> OPEOPE_API UClass* StaticClass<ALaw_Controller>()
{
	return ALaw_Controller::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaw_Controller);
ALaw_Controller::~ALaw_Controller() {}
// End Class ALaw_Controller

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_Law_Controller_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaw_Controller, ALaw_Controller::StaticClass, TEXT("ALaw_Controller"), &Z_Registration_Info_UClass_ALaw_Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaw_Controller), 1782272270U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_Law_Controller_h_4095444526(TEXT("/Script/OpeOpe"),
	Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_Law_Controller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PivGravcya_OpeOpe_OpeOpeNoMi_Source_OpeOpe_Public_Law_Controller_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
