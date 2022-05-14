// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperationAnaconda/OperationAnacondaGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperationAnacondaGameModeBase() {}
// Cross Module References
	OPERATIONANACONDA_API UClass* Z_Construct_UClass_AOperationAnacondaGameModeBase_NoRegister();
	OPERATIONANACONDA_API UClass* Z_Construct_UClass_AOperationAnacondaGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OperationAnaconda();
// End Cross Module References
	void AOperationAnacondaGameModeBase::StaticRegisterNativesAOperationAnacondaGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOperationAnacondaGameModeBase);
	UClass* Z_Construct_UClass_AOperationAnacondaGameModeBase_NoRegister()
	{
		return AOperationAnacondaGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AOperationAnacondaGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOperationAnacondaGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OperationAnaconda,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOperationAnacondaGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OperationAnacondaGameModeBase.h" },
		{ "ModuleRelativePath", "OperationAnacondaGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOperationAnacondaGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOperationAnacondaGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOperationAnacondaGameModeBase_Statics::ClassParams = {
		&AOperationAnacondaGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOperationAnacondaGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOperationAnacondaGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOperationAnacondaGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AOperationAnacondaGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOperationAnacondaGameModeBase.OuterSingleton, Z_Construct_UClass_AOperationAnacondaGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOperationAnacondaGameModeBase.OuterSingleton;
	}
	template<> OPERATIONANACONDA_API UClass* StaticClass<AOperationAnacondaGameModeBase>()
	{
		return AOperationAnacondaGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOperationAnacondaGameModeBase);
	struct Z_CompiledInDeferFile_FID_OperationAnaconda_Source_OperationAnaconda_OperationAnacondaGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OperationAnaconda_Source_OperationAnaconda_OperationAnacondaGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOperationAnacondaGameModeBase, AOperationAnacondaGameModeBase::StaticClass, TEXT("AOperationAnacondaGameModeBase"), &Z_Registration_Info_UClass_AOperationAnacondaGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOperationAnacondaGameModeBase), 973061236U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OperationAnaconda_Source_OperationAnaconda_OperationAnacondaGameModeBase_h_627356507(TEXT("/Script/OperationAnaconda"),
		Z_CompiledInDeferFile_FID_OperationAnaconda_Source_OperationAnaconda_OperationAnacondaGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OperationAnaconda_Source_OperationAnaconda_OperationAnacondaGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
