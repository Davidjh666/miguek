// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<UStaticMesh> meshEnemigoAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));

	meshEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshEnemigo"));
	RootComponent = meshEnemigo;

	/*if (meshEnemigoAsset.Succeeded())
	{
		meshEnemigo->SetStaticMesh(meshEnemigoAsset.Object);
	}*/

	energia = 100.0f;
	velocidad = 50.0f;
	resistencia = 10.0f;
	armadura = 0.0f;
	nivelAtaque = 10.0f;
	tipoEnemigo = ETipoEnemigo::TE_Animal;
	tipoMedioEnemigo = ETipoMedioEnemigo::TME_tierra;
	direccion = FVector(1.0f, 0.0f, 0.0f);
	posicion = FVector(0.0f, 0.0f, 0.0f);
	posicionInicial = FVector(0.0f, 0.0f, 0.0f);
	posicionFinal = FVector(0.0f, 0.0f, 0.0f);
	distanciaRecorrida = 0.0f;


}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

