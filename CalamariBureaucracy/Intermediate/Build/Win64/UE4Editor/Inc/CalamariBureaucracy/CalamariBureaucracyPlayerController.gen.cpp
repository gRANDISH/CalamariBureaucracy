// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CalamariBureaucracy/CalamariBureaucracyPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCalamariBureaucracyPlayerController() {}
// Cross Module References
	CALAMARIBUREAUCRACY_API UClass* Z_Construct_UClass_ACalamariBureaucracyPlayerController_NoRegister();
	CALAMARIBUREAUCRACY_API UClass* Z_Construct_UClass_ACalamariBureaucracyPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CalamariBureaucracy();
// End Cross Module References
	void ACalamariBureaucracyPlayerController::StaticRegisterNativesACalamariBureaucracyPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ACalamariBureaucracyPlayerController_NoRegister()
	{
		return ACalamariBureaucracyPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACalamariBureaucracyPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACalamariBureaucracyPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CalamariBureaucracy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACalamariBureaucracyPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CalamariBureaucracyPlayerController.h" },
		{ "ModuleRelativePath", "CalamariBureaucracyPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACalamariBureaucracyPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACalamariBureaucracyPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACalamariBureaucracyPlayerController_Statics::ClassParams = {
		&ACalamariBureaucracyPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACalamariBureaucracyPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACalamariBureaucracyPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACalamariBureaucracyPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACalamariBureaucracyPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACalamariBureaucracyPlayerController, 44457575);
	template<> CALAMARIBUREAUCRACY_API UClass* StaticClass<ACalamariBureaucracyPlayerController>()
	{
		return ACalamariBureaucracyPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACalamariBureaucracyPlayerController(Z_Construct_UClass_ACalamariBureaucracyPlayerController, &ACalamariBureaucracyPlayerController::StaticClass, TEXT("/Script/CalamariBureaucracy"), TEXT("ACalamariBureaucracyPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACalamariBureaucracyPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
