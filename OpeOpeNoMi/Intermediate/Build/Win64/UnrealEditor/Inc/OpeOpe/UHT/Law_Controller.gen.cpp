// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpeOpe/Public/Law_Controller.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaw_Controller() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
OPEOPE_API UClass* Z_Construct_UClass_ALaw_Controller();
OPEOPE_API UClass* Z_Construct_UClass_ALaw_Controller_NoRegister();
UPackage* Z_Construct_UPackage__Script_OpeOpe();
// End Cross Module References

// Begin Class ALaw_Controller Function PerformShambles
struct Z_Construct_UFunction_ALaw_Controller_PerformShambles_Statics
{
	struct Law_Controller_eventPerformShambles_Parms
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALaw_Controller_PerformShambles_Statics::NewProp_Act = { "Act", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Law_Controller_eventPerformShambles_Parms, Act), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaw_Controller_PerformShambles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaw_Controller_PerformShambles_Statics::NewProp_Act,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaw_Controller_PerformShambles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaw_Controller_PerformShambles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaw_Controller, nullptr, "PerformShambles", nullptr, nullptr, Z_Construct_UFunction_ALaw_Controller_PerformShambles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaw_Controller_PerformShambles_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaw_Controller_PerformShambles_Statics::Law_Controller_eventPerformShambles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaw_Controller_PerformShambles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaw_Controller_PerformShambles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaw_Controller_PerformShambles_Statics::Law_Controller_eventPerformShambles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaw_Controller_PerformShambles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaw_Controller_PerformShambles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaw_Controller::execPerformShambles)
{
	P_GET_OBJECT(AActor,Z_Param_Act);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformShambles(Z_Param_Act);
	P_NATIVE_END;
}
// End Class ALaw_Controller Function PerformShambles

// Begin Class ALaw_Controller Function RotateActor
struct Z_Construct_UFunction_ALaw_Controller_RotateActor_Statics
{
	struct Law_Controller_eventRotateActor_Parms
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALaw_Controller_RotateActor_Statics::NewProp_Act = { "Act", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Law_Controller_eventRotateActor_Parms, Act), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaw_Controller_RotateActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaw_Controller_RotateActor_Statics::NewProp_Act,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaw_Controller_RotateActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaw_Controller_RotateActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaw_Controller, nullptr, "RotateActor", nullptr, nullptr, Z_Construct_UFunction_ALaw_Controller_RotateActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaw_Controller_RotateActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaw_Controller_RotateActor_Statics::Law_Controller_eventRotateActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaw_Controller_RotateActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaw_Controller_RotateActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaw_Controller_RotateActor_Statics::Law_Controller_eventRotateActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaw_Controller_RotateActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaw_Controller_RotateActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaw_Controller::execRotateActor)
{
	P_GET_OBJECT(AActor,Z_Param_Act);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateActor(Z_Param_Act);
	P_NATIVE_END;
}
// End Class ALaw_Controller Function RotateActor

// Begin Class ALaw_Controller Function ThrowActor
struct Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics
{
	struct Law_Controller_eventThrowActor_Parms
	{
		AActor* Act;
		FTimerHandle TimerHandler;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Law_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Act;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandler;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::NewProp_Act = { "Act", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Law_Controller_eventThrowActor_Parms, Act), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::NewProp_TimerHandler = { "TimerHandler", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Law_Controller_eventThrowActor_Parms, TimerHandler), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(0, nullptr) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::NewProp_Act,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaw_Controller_ThrowActor_Statics::NewProp_TimerHandler,
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
	P_GET_STRUCT(FTimerHandle,Z_Param_TimerHandler);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ThrowActor(Z_Param_Act,Z_Param_TimerHandler);
	P_NATIVE_END;
}
// End Class ALaw_Controller Function ThrowActor

// Begin Class ALaw_Controller
void ALaw_Controller::StaticRegisterNativesALaw_Controller()
{
	UClass* Class = ALaw_Controller::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PerformShambles", &ALaw_Controller::execPerformShambles },
		{ "RotateActor", &ALaw_Controller::execRotateActor },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportCue_MetaData[] = {
		{ "Category", "Law_Controller" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeleportCue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShamblesCue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TactCue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALaw_Controller_PerformShambles, "PerformShambles" }, // 1435828649
		{ &Z_Construct_UFunction_ALaw_Controller_RotateActor, "RotateActor" }, // 41529703
		{ &Z_Construct_UFunction_ALaw_Controller_ThrowActor, "ThrowActor" }, // 3090338628
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaw_Controller>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaw_Controller_Statics::NewProp_TeleportCue = { "TeleportCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaw_Controller, TeleportCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportCue_MetaData), NewProp_TeleportCue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaw_Controller_Statics::NewProp_ShamblesCue = { "ShamblesCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaw_Controller, ShamblesCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShamblesCue_MetaData), NewProp_ShamblesCue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaw_Controller_Statics::NewProp_TactCue = { "TactCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaw_Controller, TactCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TactCue_MetaData), NewProp_TactCue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaw_Controller_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaw_Controller_Statics::NewProp_TeleportCue,
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
struct Z_CompiledInDeferFile_FID_Users_PivGravcya_Documents_Unreal_Projects_OpeOpe_Source_OpeOpe_Public_Law_Controller_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaw_Controller, ALaw_Controller::StaticClass, TEXT("ALaw_Controller"), &Z_Registration_Info_UClass_ALaw_Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaw_Controller), 3603297765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PivGravcya_Documents_Unreal_Projects_OpeOpe_Source_OpeOpe_Public_Law_Controller_h_2258642989(TEXT("/Script/OpeOpe"),
	Z_CompiledInDeferFile_FID_Users_PivGravcya_Documents_Unreal_Projects_OpeOpe_Source_OpeOpe_Public_Law_Controller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PivGravcya_Documents_Unreal_Projects_OpeOpe_Source_OpeOpe_Public_Law_Controller_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
