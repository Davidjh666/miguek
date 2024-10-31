// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DONKEYKONG_TEST_DonkeyKongTipos_generated_h
#error "DonkeyKongTipos.generated.h already included, missing '#pragma once' in DonkeyKongTipos.h"
#endif
#define DONKEYKONG_TEST_DonkeyKongTipos_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DonkeyKong_Test_Source_DonkeyKong_Test_DonkeyKongTipos_h


#define FOREACH_ENUM_EDIFICULTAD(op) \
	op(EDificultad::VE_Facil) \
	op(EDificultad::VE_Medio) \
	op(EDificultad::VE_Dificil) 

enum class EDificultad : uint8;
template<> DONKEYKONG_TEST_API UEnum* StaticEnum<EDificultad>();

#define FOREACH_ENUM_EESTADOJUEGO(op) \
	op(EEstadoJuego::VE_Idle) \
	op(EEstadoJuego::VE_Playing) \
	op(EEstadoJuego::VE_Paused) \
	op(EEstadoJuego::VE_GameOver) 

enum class EEstadoJuego : uint8;
template<> DONKEYKONG_TEST_API UEnum* StaticEnum<EEstadoJuego>();

#define FOREACH_ENUM_EESTADOENEMIGO(op) \
	op(EEstadoEnemigo::EE_Idle) \
	op(EEstadoEnemigo::EE_Movimiento) \
	op(EEstadoEnemigo::EE_Atacando) \
	op(EEstadoEnemigo::EE_Huyendo) \
	op(EEstadoEnemigo::EE_Muerto) 

enum class EEstadoEnemigo : uint8;
template<> DONKEYKONG_TEST_API UEnum* StaticEnum<EEstadoEnemigo>();

#define FOREACH_ENUM_ETIPOMEDIOENEMIGO(op) \
	op(ETipoMedioEnemigo::TME_Aire) \
	op(ETipoMedioEnemigo::TME_tierra) \
	op(ETipoMedioEnemigo::TME_Agua) \
	op(ETipoMedioEnemigo::TME_Fuego) \
	op(ETipoMedioEnemigo::TME_Hielo) 

enum class ETipoMedioEnemigo : uint8;
template<> DONKEYKONG_TEST_API UEnum* StaticEnum<ETipoMedioEnemigo>();

#define FOREACH_ENUM_ETIPOENEMIGO(op) \
	op(ETipoEnemigo::TE_Animal) \
	op(ETipoEnemigo::TE_Vegetal) \
	op(ETipoEnemigo::TE_Mutante) \
	op(ETipoEnemigo::TE_Humano) \
	op(ETipoEnemigo::TE_Robot) 

enum class ETipoEnemigo : uint8;
template<> DONKEYKONG_TEST_API UEnum* StaticEnum<ETipoEnemigo>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
