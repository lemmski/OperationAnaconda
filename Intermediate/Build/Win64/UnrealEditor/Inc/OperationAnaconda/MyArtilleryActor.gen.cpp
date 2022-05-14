// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperationAnaconda/MyArtilleryActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyArtilleryActor() {}
// Cross Module References
	OPERATIONANACONDA_API UClass* Z_Construct_UClass_AMyArtilleryActor_NoRegister();
	OPERATIONANACONDA_API UClass* Z_Construct_UClass_AMyArtilleryActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OperationAnaconda();
// End Cross Module References
	void AMyArtilleryActor::StaticRegisterNativesAMyArtilleryActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyArtilleryActor);
	UClass* Z_Construct_UClass_AMyArtilleryActor_NoRegister()
	{
		return AMyArtilleryActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyArtilleryActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyArtilleryActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OperationAnaconda,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyArtilleryActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyArtilleryActor.h" },
		{ "ModuleRelativePath", "MyArtilleryActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyArtilleryActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyArtilleryActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyArtilleryActor_Statics::ClassParams = {
		&AMyArtilleryActor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyArtilleryActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyArtilleryActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyArtilleryActor()
	{
		if (!Z_Registration_Info_UClass_AMyArtilleryActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyArtilleryActor.OuterSingleton, Z_Construct_UClass_AMyArtilleryActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyArtilleryActor.OuterSingleton;
	}
	template<> OPERATIONANACONDA_API UClass* StaticClass<AMyArtilleryActor>()
	{
		return AMyArtilleryActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyArtilleryActor);
	struct Z_CompiledInDeferFile_FID_OperationAnaconda_Source_OperationAnaconda_MyArtilleryActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OperationAnaconda_Source_OperationAnaconda_MyArtilleryActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyArtilleryActor, AMyArtilleryActor::StaticClass, TEXT("AMyArtilleryActor"), &Z_Registration_Info_UClass_AMyArtilleryActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyArtilleryActor), 2268597240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OperationAnaconda_Source_OperationAnaconda_MyArtilleryActor_h_245248259(TEXT("/Script/OperationAnaconda"),
		Z_CompiledInDeferFile_FID_OperationAnaconda_Source_OperationAnaconda_MyArtilleryActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OperationAnaconda_Source_OperationAnaconda_MyArtilleryActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
