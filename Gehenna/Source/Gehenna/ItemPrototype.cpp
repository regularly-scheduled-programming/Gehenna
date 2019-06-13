// Fill out your copyright notice in the Description page of Project Settings.



#include "ItemPrototype.h"
#include "Engine.h"

// Sets default values
AItemPrototype::AItemPrototype()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	/*PrimaryActorTick.bCanEverTick = true;
	
	TBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BOX"));
	TBox->SetGenerateOverlapEvents(true);
	TBox->OnComponentBeginOverlap.AddDynamic(this, &AItemPrototype::TriggerEnter);
	TBox->OnComponentEndOverlap.AddDynamic(this, &AItemPrototype::TriggerExit);

	RootComponent = TBox;

	SM_TBox = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Box Mesh"));	
	SM_TBox->AttachTo(RootComponent);
*/

}

void AItemPrototype::GetPlayer(AActor* Player)
{
	//MyPlayerController = Cast<UInventoryPrototype>(Player);
	//UActorComponent* temp = Player->GetComponentByClass(UInventoryPrototype::StaticClass());
	//MyPlayerController = Cast<UInventoryPrototype>(temp);
}

// Called when the game starts or when spawned
void AItemPrototype::BeginPlay()
{
	Super::BeginPlay();
	
}

//void AItemPrototype::PickUp()
//{
//	//MyPlayerController->Inventory.Add(this);
//	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, FString::Printf(TEXT("You Picked Up Item %s"),*ItemName));
//	Destroy();
//}

// Called every frame
void AItemPrototype::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//if (MyPlayerController != nullptr) // NULL CHECK FOR PLAYER CONTROLLER
	//{
	//	if (MyPlayerController->Inventory.Num() <= MyPlayerController->InventoryCapacity -1)
	//	{

	//		//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Orange, TEXT("InventoryHasSpace"));
	//	}
	//	else
	//	{
	//	//	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Orange, TEXT("InventoryFull"));
	//	}
	//	if (MyPlayerController->bIsPickingUp && bItemIsWithinRange)
	//	{
	//		if (MyPlayerController->Inventory.Num() < MyPlayerController->InventoryCapacity)
	//		{
	//			//PickUp();
	//			MyPlayerController->AddToInventory(Item);
	//			//Destroy();
	//		}
	//		else
	//		{
	//			//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Orange, TEXT("InventoryFull"));
	//		}
	//	}
	//}
}

void AItemPrototype::TriggerEnter(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	bItemIsWithinRange = true;
	//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, FString::Printf(TEXT("Press E to Pick Up %s"), *ItemName));
	GetPlayer(OtherActor);
}

void AItemPrototype::TriggerExit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bItemIsWithinRange = false;
}

