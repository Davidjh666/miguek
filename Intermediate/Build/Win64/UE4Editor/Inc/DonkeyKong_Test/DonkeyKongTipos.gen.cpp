// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_Test/DonkeyKongTipos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonkeyKongTipos() {}
// Cross Module References
	DONKEYKONG_TEST_API UEnum* Z_Construct_UEnum_DonkeyKong_Test_EDificultad();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_Test();
	DONKEYKONG_TEST_API UEnum* Z_Construct_UEnum_DonkeyKong_Test_EEstadoJuego();
	DONKEYKONG_TEST_API UEnum* Z_Construct_UEnum_DonkeyKong_Test_EEstadoEnemigo();
	DONKEYKONG_TEST_API UEnum* Z_Construct_UEnum_DonkeyKong_Test_ETipoMedioEnemigo();
	DONKEYKONG_TEST_API UEnum* Z_Construct_UEnum_DonkeyKong_Test_ETipoEnemigo();
// End Cross Module References
	static UEnum* EDificultad_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DonkeyKong_Test_EDificultad, Z_Construct_UPackage__Script_DonkeyKong_Test(), TEXT("EDificultad"));
		}
		return Singleton;
	}
	template<> DONKEYKONG_TEST_API UEnum* StaticEnum<EDificultad>()
	{
		return EDificultad_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDificultad(EDificultad_StaticEnum, TEXT("/Script/DonkeyKong_Test"), TEXT("EDificultad"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DonkeyKong_Test_EDificultad_Hash() { return 2174871832U; }
	UEnum* Z_Construct_UEnum_DonkeyKong_Test_EDificultad()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DonkeyKong_Test();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDificultad"), 0, Get_Z_Construct_UEnum_DonkeyKong_Test_EDificultad_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDificultad::VE_Facil", (int64)EDificultad::VE_Facil },
				{ "EDificultad::VE_Medio", (int64)EDificultad::VE_Medio },
				{ "EDificultad::VE_Dificil", (int64)EDificultad::VE_Dificil },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Otra enumeraci?n de ejemplo\n" },
				{ "ModuleRelativePath", "DonkeyKongTipos.h" },
				{ "ToolTip", "Otra enumeraci?n de ejemplo" },
				{ "VE_Dificil.DisplayName", "Dif?cil" },
				{ "VE_Dificil.Name", "EDificultad::VE_Dificil" },
				{ "VE_Facil.DisplayName", "F?cil" },
				{ "VE_Facil.Name", "EDificultad::VE_Facil" },
				{ "VE_Medio.DisplayName", "Medio" },
				{ "VE_Medio.Name", "EDificultad::VE_Medio" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DonkeyKong_Test,
				nullptr,
				"EDificultad",
				"EDificultad",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEstadoJuego_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DonkeyKong_Test_EEstadoJuego, Z_Construct_UPackage__Script_DonkeyKong_Test(), TEXT("EEstadoJuego"));
		}
		return Singleton;
	}
	template<> DONKEYKONG_TEST_API UEnum* StaticEnum<EEstadoJuego>()
	{
		return EEstadoJuego_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEstadoJuego(EEstadoJuego_StaticEnum, TEXT("/Script/DonkeyKong_Test"), TEXT("EEstadoJuego"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DonkeyKong_Test_EEstadoJuego_Hash() { return 721707923U; }
	UEnum* Z_Construct_UEnum_DonkeyKong_Test_EEstadoJuego()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DonkeyKong_Test();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEstadoJuego"), 0, Get_Z_Construct_UEnum_DonkeyKong_Test_EEstadoJuego_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEstadoJuego::VE_Idle", (int64)EEstadoJuego::VE_Idle },
				{ "EEstadoJuego::VE_Playing", (int64)EEstadoJuego::VE_Playing },
				{ "EEstadoJuego::VE_Paused", (int64)EEstadoJuego::VE_Paused },
				{ "EEstadoJuego::VE_GameOver", (int64)EEstadoJuego::VE_GameOver },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Enumeraci?n de ejemplo\n" },
				{ "ModuleRelativePath", "DonkeyKongTipos.h" },
				{ "ToolTip", "Enumeraci?n de ejemplo" },
				{ "VE_GameOver.DisplayName", "Game Over" },
				{ "VE_GameOver.Name", "EEstadoJuego::VE_GameOver" },
				{ "VE_Idle.DisplayName", "Idle" },
				{ "VE_Idle.Name", "EEstadoJuego::VE_Idle" },
				{ "VE_Paused.DisplayName", "Paused" },
				{ "VE_Paused.Name", "EEstadoJuego::VE_Paused" },
				{ "VE_Playing.DisplayName", "Playing" },
				{ "VE_Playing.Name", "EEstadoJuego::VE_Playing" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DonkeyKong_Test,
				nullptr,
				"EEstadoJuego",
				"EEstadoJuego",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEstadoEnemigo_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DonkeyKong_Test_EEstadoEnemigo, Z_Construct_UPackage__Script_DonkeyKong_Test(), TEXT("EEstadoEnemigo"));
		}
		return Singleton;
	}
	template<> DONKEYKONG_TEST_API UEnum* StaticEnum<EEstadoEnemigo>()
	{
		return EEstadoEnemigo_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEstadoEnemigo(EEstadoEnemigo_StaticEnum, TEXT("/Script/DonkeyKong_Test"), TEXT("EEstadoEnemigo"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DonkeyKong_Test_EEstadoEnemigo_Hash() { return 3543415400U; }
	UEnum* Z_Construct_UEnum_DonkeyKong_Test_EEstadoEnemigo()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DonkeyKong_Test();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEstadoEnemigo"), 0, Get_Z_Construct_UEnum_DonkeyKong_Test_EEstadoEnemigo_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEstadoEnemigo::EE_Idle", (int64)EEstadoEnemigo::EE_Idle },
				{ "EEstadoEnemigo::EE_Movimiento", (int64)EEstadoEnemigo::EE_Movimiento },
				{ "EEstadoEnemigo::EE_Atacando", (int64)EEstadoEnemigo::EE_Atacando },
				{ "EEstadoEnemigo::EE_Huyendo", (int64)EEstadoEnemigo::EE_Huyendo },
				{ "EEstadoEnemigo::EE_Muerto", (int64)EEstadoEnemigo::EE_Muerto },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EE_Atacando.Name", "EEstadoEnemigo::EE_Atacando" },
				{ "EE_Huyendo.Name", "EEstadoEnemigo::EE_Huyendo" },
				{ "EE_Idle.Name", "EEstadoEnemigo::EE_Idle" },
				{ "EE_Movimiento.Name", "EEstadoEnemigo::EE_Movimiento" },
				{ "EE_Muerto.Name", "EEstadoEnemigo::EE_Muerto" },
				{ "ModuleRelativePath", "DonkeyKongTipos.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DonkeyKong_Test,
				nullptr,
				"EEstadoEnemigo",
				"EEstadoEnemigo",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETipoMedioEnemigo_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DonkeyKong_Test_ETipoMedioEnemigo, Z_Construct_UPackage__Script_DonkeyKong_Test(), TEXT("ETipoMedioEnemigo"));
		}
		return Singleton;
	}
	template<> DONKEYKONG_TEST_API UEnum* StaticEnum<ETipoMedioEnemigo>()
	{
		return ETipoMedioEnemigo_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETipoMedioEnemigo(ETipoMedioEnemigo_StaticEnum, TEXT("/Script/DonkeyKong_Test"), TEXT("ETipoMedioEnemigo"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DonkeyKong_Test_ETipoMedioEnemigo_Hash() { return 3958892079U; }
	UEnum* Z_Construct_UEnum_DonkeyKong_Test_ETipoMedioEnemigo()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DonkeyKong_Test();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETipoMedioEnemigo"), 0, Get_Z_Construct_UEnum_DonkeyKong_Test_ETipoMedioEnemigo_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETipoMedioEnemigo::TME_Aire", (int64)ETipoMedioEnemigo::TME_Aire },
				{ "ETipoMedioEnemigo::TME_tierra", (int64)ETipoMedioEnemigo::TME_tierra },
				{ "ETipoMedioEnemigo::TME_Agua", (int64)ETipoMedioEnemigo::TME_Agua },
				{ "ETipoMedioEnemigo::TME_Fuego", (int64)ETipoMedioEnemigo::TME_Fuego },
				{ "ETipoMedioEnemigo::TME_Hielo", (int64)ETipoMedioEnemigo::TME_Hielo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "DonkeyKongTipos.h" },
				{ "TME_Agua.Name", "ETipoMedioEnemigo::TME_Agua" },
				{ "TME_Aire.Name", "ETipoMedioEnemigo::TME_Aire" },
				{ "TME_Fuego.Name", "ETipoMedioEnemigo::TME_Fuego" },
				{ "TME_Hielo.Name", "ETipoMedioEnemigo::TME_Hielo" },
				{ "TME_tierra.Name", "ETipoMedioEnemigo::TME_tierra" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DonkeyKong_Test,
				nullptr,
				"ETipoMedioEnemigo",
				"ETipoMedioEnemigo",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETipoEnemigo_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DonkeyKong_Test_ETipoEnemigo, Z_Construct_UPackage__Script_DonkeyKong_Test(), TEXT("ETipoEnemigo"));
		}
		return Singleton;
	}
	template<> DONKEYKONG_TEST_API UEnum* StaticEnum<ETipoEnemigo>()
	{
		return ETipoEnemigo_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETipoEnemigo(ETipoEnemigo_StaticEnum, TEXT("/Script/DonkeyKong_Test"), TEXT("ETipoEnemigo"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DonkeyKong_Test_ETipoEnemigo_Hash() { return 842287496U; }
	UEnum* Z_Construct_UEnum_DonkeyKong_Test_ETipoEnemigo()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DonkeyKong_Test();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETipoEnemigo"), 0, Get_Z_Construct_UEnum_DonkeyKong_Test_ETipoEnemigo_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETipoEnemigo::TE_Animal", (int64)ETipoEnemigo::TE_Animal },
				{ "ETipoEnemigo::TE_Vegetal", (int64)ETipoEnemigo::TE_Vegetal },
				{ "ETipoEnemigo::TE_Mutante", (int64)ETipoEnemigo::TE_Mutante },
				{ "ETipoEnemigo::TE_Humano", (int64)ETipoEnemigo::TE_Humano },
				{ "ETipoEnemigo::TE_Robot", (int64)ETipoEnemigo::TE_Robot },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "DonkeyKongTipos.h" },
				{ "TE_Animal.Name", "ETipoEnemigo::TE_Animal" },
				{ "TE_Humano.Name", "ETipoEnemigo::TE_Humano" },
				{ "TE_Mutante.Name", "ETipoEnemigo::TE_Mutante" },
				{ "TE_Robot.Name", "ETipoEnemigo::TE_Robot" },
				{ "TE_Vegetal.Name", "ETipoEnemigo::TE_Vegetal" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DonkeyKong_Test,
				nullptr,
				"ETipoEnemigo",
				"ETipoEnemigo",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
