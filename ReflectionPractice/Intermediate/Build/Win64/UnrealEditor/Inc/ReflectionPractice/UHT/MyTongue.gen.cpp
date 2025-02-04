// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReflectionPractice/Public/MyTongue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTongue() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_AMyTongue();
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_AMyTongue_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReflectionPractice();
// End Cross Module References

// Begin Class AMyTongue
void AMyTongue::StaticRegisterNativesAMyTongue()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTongue);
UClass* Z_Construct_UClass_AMyTongue_NoRegister()
{
	return AMyTongue::StaticClass();
}
struct Z_Construct_UClass_AMyTongue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyTongue.h" },
		{ "ModuleRelativePath", "Public/MyTongue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPos_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Public/MyTongue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnPos_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Public/MyTongue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Public/MyTongue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Public/MyTongue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Public/MyTongue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Public/MyTongue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTurningPoint_MetaData[] = {
		{ "Category", "Move" },
		{ "ModuleRelativePath", "Public/MyTongue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnPos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static void NewProp_bTurningPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTurningPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTongue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyTongue_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTongue, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPos_MetaData), NewProp_StartPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyTongue_Statics::NewProp_ReturnPos = { "ReturnPos", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTongue, ReturnPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnPos_MetaData), NewProp_ReturnPos_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyTongue_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTongue, TargetRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotation_MetaData), NewProp_TargetRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyTongue_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTongue, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyTongue_Statics::NewProp_TurnSpeed = { "TurnSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTongue, TurnSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnSpeed_MetaData), NewProp_TurnSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyTongue_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTongue, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
void Z_Construct_UClass_AMyTongue_Statics::NewProp_bTurningPoint_SetBit(void* Obj)
{
	((AMyTongue*)Obj)->bTurningPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyTongue_Statics::NewProp_bTurningPoint = { "bTurningPoint", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyTongue), &Z_Construct_UClass_AMyTongue_Statics::NewProp_bTurningPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTurningPoint_MetaData), NewProp_bTurningPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyTongue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTongue_Statics::NewProp_StartPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTongue_Statics::NewProp_ReturnPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTongue_Statics::NewProp_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTongue_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTongue_Statics::NewProp_TurnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTongue_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTongue_Statics::NewProp_bTurningPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTongue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyTongue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ReflectionPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTongue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTongue_Statics::ClassParams = {
	&AMyTongue::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyTongue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyTongue_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTongue_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTongue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyTongue()
{
	if (!Z_Registration_Info_UClass_AMyTongue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTongue.OuterSingleton, Z_Construct_UClass_AMyTongue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyTongue.OuterSingleton;
}
template<> REFLECTIONPRACTICE_API UClass* StaticClass<AMyTongue>()
{
	return AMyTongue::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTongue);
AMyTongue::~AMyTongue() {}
// End Class AMyTongue

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_ReflectionPractice_Source_ReflectionPractice_Public_MyTongue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyTongue, AMyTongue::StaticClass, TEXT("AMyTongue"), &Z_Registration_Info_UClass_AMyTongue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTongue), 1788840415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_ReflectionPractice_Source_ReflectionPractice_Public_MyTongue_h_4061766265(TEXT("/Script/ReflectionPractice"),
	Z_CompiledInDeferFile_FID_UE_Projects_ReflectionPractice_Source_ReflectionPractice_Public_MyTongue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_ReflectionPractice_Source_ReflectionPractice_Public_MyTongue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
