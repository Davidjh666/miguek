// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_Test/DonkeyKong_TestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonkeyKong_TestGameMode() {}
// Cross Module References
	DONKEYKONG_TEST_API UClass* Z_Construct_UClass_ADonkeyKong_TestGameMode_NoRegister();
	DONKEYKONG_TEST_API UClass* Z_Construct_UClass_ADonkeyKong_TestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_Test();
	DONKEYKONG_TEST_API UClass* Z_Construct_UClass_AInventario_NoRegister();
// End Cross Module References
	void ADonkeyKong_TestGameMode::StaticRegisterNativesADonkeyKong_TestGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADonkeyKong_TestGameMode_NoRegister()
	{
		return ADonkeyKong_TestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventario_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DonkeyKong_TestGameMode.h" },
		{ "ModuleRelativePath", "DonkeyKong_TestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics::NewProp_inventario_MetaData[] = {
		{ "ModuleRelativePath", "DonkeyKong_TestGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics::NewProp_inventario = { "inventario", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_TestGameMode, inventario), Z_Construct_UClass_AInventario_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics::NewProp_inventario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics::NewProp_inventario_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics::NewProp_inventario,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonkeyKong_TestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics::ClassParams = {
		&ADonkeyKong_TestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADonkeyKong_TestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADonkeyKong_TestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADonkeyKong_TestGameMode, 533866427);
	template<> DONKEYKONG_TEST_API UClass* StaticClass<ADonkeyKong_TestGameMode>()
	{
		return ADonkeyKong_TestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADonkeyKong_TestGameMode(Z_Construct_UClass_ADonkeyKong_TestGameMode, &ADonkeyKong_TestGameMode::StaticClass, TEXT("/Script/DonkeyKong_Test"), TEXT("ADonkeyKong_TestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADonkeyKong_TestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
