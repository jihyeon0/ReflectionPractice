// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReflectionPractice/Public/MyCogwheel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCogwheel() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_AMyCogwheel();
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_AMyCogwheel_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReflectionPractice();
// End Cross Module References

// Begin Class AMyCogwheel Function RotationBody
struct Z_Construct_UFunction_AMyCogwheel_RotationBody_Statics
{
	struct MyCogwheel_eventRotationBody_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cogwheel|Actions" },
		{ "ModuleRelativePath", "Public/MyCogwheel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCogwheel_RotationBody_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCogwheel_eventRotationBody_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCogwheel_RotationBody_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCogwheel_RotationBody_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCogwheel_RotationBody_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCogwheel_RotationBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCogwheel, nullptr, "RotationBody", nullptr, nullptr, Z_Construct_UFunction_AMyCogwheel_RotationBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCogwheel_RotationBody_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCogwheel_RotationBody_Statics::MyCogwheel_eventRotationBody_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCogwheel_RotationBody_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCogwheel_RotationBody_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCogwheel_RotationBody_Statics::MyCogwheel_eventRotationBody_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCogwheel_RotationBody()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCogwheel_RotationBody_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCogwheel::execRotationBody)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotationBody(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class AMyCogwheel Function RotationBody

// Begin Class AMyCogwheel
void AMyCogwheel::StaticRegisterNativesAMyCogwheel()
{
	UClass* Class = AMyCogwheel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RotationBody", &AMyCogwheel::execRotationBody },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCogwheel);
UClass* Z_Construct_UClass_AMyCogwheel_NoRegister()
{
	return AMyCogwheel::StaticClass();
}
struct Z_Construct_UClass_AMyCogwheel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyCogwheel.h" },
		{ "ModuleRelativePath", "Public/MyCogwheel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComp_MetaData[] = {
		{ "Category", "Cogwheel|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCogwheel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Cogwheel|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCogwheel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/MyCogwheel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSceneComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCogwheel_RotationBody, "RotationBody" }, // 1680342817
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCogwheel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCogwheel_Statics::NewProp_RootSceneComp = { "RootSceneComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCogwheel, RootSceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSceneComp_MetaData), NewProp_RootSceneComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCogwheel_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCogwheel, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCogwheel_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCogwheel, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCogwheel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCogwheel_Statics::NewProp_RootSceneComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCogwheel_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCogwheel_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCogwheel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCogwheel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ReflectionPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCogwheel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCogwheel_Statics::ClassParams = {
	&AMyCogwheel::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyCogwheel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCogwheel_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCogwheel_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCogwheel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCogwheel()
{
	if (!Z_Registration_Info_UClass_AMyCogwheel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCogwheel.OuterSingleton, Z_Construct_UClass_AMyCogwheel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCogwheel.OuterSingleton;
}
template<> REFLECTIONPRACTICE_API UClass* StaticClass<AMyCogwheel>()
{
	return AMyCogwheel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCogwheel);
AMyCogwheel::~AMyCogwheel() {}
// End Class AMyCogwheel

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_ReflectionPractice_Source_ReflectionPractice_Public_MyCogwheel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCogwheel, AMyCogwheel::StaticClass, TEXT("AMyCogwheel"), &Z_Registration_Info_UClass_AMyCogwheel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCogwheel), 3230780555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_ReflectionPractice_Source_ReflectionPractice_Public_MyCogwheel_h_2891512726(TEXT("/Script/ReflectionPractice"),
	Z_CompiledInDeferFile_FID_UE_Projects_ReflectionPractice_Source_ReflectionPractice_Public_MyCogwheel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_ReflectionPractice_Source_ReflectionPractice_Public_MyCogwheel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
