// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_Test/FabricaPosionesBenignas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaPosionesBenignas() {}
// Cross Module References
	DONKEYKONG_TEST_API UClass* Z_Construct_UClass_AFabricaPosionesBenignas_NoRegister();
	DONKEYKONG_TEST_API UClass* Z_Construct_UClass_AFabricaPosionesBenignas();
	DONKEYKONG_TEST_API UClass* Z_Construct_UClass_AFabricaPosiones();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_Test();
// End Cross Module References
	void AFabricaPosionesBenignas::StaticRegisterNativesAFabricaPosionesBenignas()
	{
	}
	UClass* Z_Construct_UClass_AFabricaPosionesBenignas_NoRegister()
	{
		return AFabricaPosionesBenignas::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaPosionesBenignas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaPosionesBenignas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaPosiones,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaPosionesBenignas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FabricaPosionesBenignas.h" },
		{ "ModuleRelativePath", "FabricaPosionesBenignas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaPosionesBenignas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaPosionesBenignas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaPosionesBenignas_Statics::ClassParams = {
		&AFabricaPosionesBenignas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaPosionesBenignas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaPosionesBenignas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaPosionesBenignas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaPosionesBenignas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaPosionesBenignas, 3116286947);
	template<> DONKEYKONG_TEST_API UClass* StaticClass<AFabricaPosionesBenignas>()
	{
		return AFabricaPosionesBenignas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaPosionesBenignas(Z_Construct_UClass_AFabricaPosionesBenignas, &AFabricaPosionesBenignas::StaticClass, TEXT("/Script/DonkeyKong_Test"), TEXT("AFabricaPosionesBenignas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaPosionesBenignas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
