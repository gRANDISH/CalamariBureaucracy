// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CalamariBureaucracy/CalamariBureaucracyGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCalamariBureaucracyGameMode() {}
// Cross Module References
	CALAMARIBUREAUCRACY_API UClass* Z_Construct_UClass_ACalamariBureaucracyGameMode_NoRegister();
	CALAMARIBUREAUCRACY_API UClass* Z_Construct_UClass_ACalamariBureaucracyGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CalamariBureaucracy();
// End Cross Module References
	void ACalamariBureaucracyGameMode::StaticRegisterNativesACalamariBureaucracyGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACalamariBureaucracyGameMode_NoRegister()
	{
		return ACalamariBureaucracyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACalamariBureaucracyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACalamariBureaucracyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CalamariBureaucracy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACalamariBureaucracyGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CalamariBureaucracyGameMode.h" },
		{ "ModuleRelativePath", "CalamariBureaucracyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACalamariBureaucracyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACalamariBureaucracyGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACalamariBureaucracyGameMode_Statics::ClassParams = {
		&ACalamariBureaucracyGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACalamariBureaucracyGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACalamariBureaucracyGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACalamariBureaucracyGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACalamariBureaucracyGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACalamariBureaucracyGameMode, 2964605904);
	template<> CALAMARIBUREAUCRACY_API UClass* StaticClass<ACalamariBureaucracyGameMode>()
	{
		return ACalamariBureaucracyGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACalamariBureaucracyGameMode(Z_Construct_UClass_ACalamariBureaucracyGameMode, &ACalamariBureaucracyGameMode::StaticClass, TEXT("/Script/CalamariBureaucracy"), TEXT("ACalamariBureaucracyGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACalamariBureaucracyGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
