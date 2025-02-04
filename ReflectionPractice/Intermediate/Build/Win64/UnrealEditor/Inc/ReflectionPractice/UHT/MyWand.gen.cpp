// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReflectionPractice/Public/MyWand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyWand() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_AMyWand();
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_AMyWand_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReflectionPractice();
// End Cross Module References

// Begin Class AMyWand
void AMyWand::StaticRegisterNativesAMyWand()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyWand);
UClass* Z_Construct_UClass_AMyWand_NoRegister()
{
	return AMyWand::StaticClass();
}
struct Z_Construct_UClass_AMyWand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyWand.h" },
		{ "ModuleRelativePath", "Public/MyWand.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComp_MetaData[] = {
		{ "Category", "Cogwheel|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyWand.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Cogwheel|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyWand.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSceneComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyWand>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyWand_Statics::NewProp_RootSceneComp = { "RootSceneComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyWand, RootSceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSceneComp_MetaData), NewProp_RootSceneComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyWand_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyWand, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyWand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyWand_Statics::NewProp_RootSceneComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyWand_Statics::NewProp_StaticMeshComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyWand_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyWand_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ReflectionPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyWand_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyWand_Statics::ClassParams = {
	&AMyWand::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyWand_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyWand_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyWand_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyWand_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyWand()
{
	if (!Z_Registration_Info_UClass_AMyWand.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyWand.OuterSingleton, Z_Construct_UClass_AMyWand_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyWand.OuterSingleton;
}
template<> REFLECTIONPRACTICE_API UClass* StaticClass<AMyWand>()
{
	return AMyWand::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyWand);
AMyWand::~AMyWand() {}
// End Class AMyWand

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_ReflectionPractice_Source_ReflectionPractice_Public_MyWand_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyWand, AMyWand::StaticClass, TEXT("AMyWand"), &Z_Registration_Info_UClass_AMyWand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyWand), 4098622774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_ReflectionPractice_Source_ReflectionPractice_Public_MyWand_h_1145927680(TEXT("/Script/ReflectionPractice"),
	Z_CompiledInDeferFile_FID_UE_Projects_ReflectionPractice_Source_ReflectionPractice_Public_MyWand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_ReflectionPractice_Source_ReflectionPractice_Public_MyWand_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
