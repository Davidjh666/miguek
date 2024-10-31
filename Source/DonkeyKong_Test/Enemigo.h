// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DonkeyKongTipos.h"
#include "Enemigo.generated.h"

UCLASS()
class DONKEYKONG_TEST_API AEnemigo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FString nombre;
	float energia;
	float velocidad;
	float resistencia;
	float armadura;
	float nivelAtaque;
	ETipoEnemigo tipoEnemigo;
	ETipoMedioEnemigo tipoMedioEnemigo;
	FVector direccion;
	FVector posicion;
	FVector posicionInicial;
	FVector posicionFinal;
	float distanciaRecorrida;

	UStaticMeshComponent* meshEnemigo;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void atacar() PURE_VIRTUAL(AEnemigo::atacar, );
	virtual void mover() PURE_VIRTUAL(AEnemigo::mover, );
	virtual void recibirDano(float _dano) PURE_VIRTUAL(AEnemigo::recibirDano, );
	virtual void morir() PURE_VIRTUAL(AEnemigo::morir, );
	virtual void huir() PURE_VIRTUAL(AEnemigo::huir, );
	virtual void cambiarDireccion() PURE_VIRTUAL(AEnemigo::cambiarDireccion, );

};
