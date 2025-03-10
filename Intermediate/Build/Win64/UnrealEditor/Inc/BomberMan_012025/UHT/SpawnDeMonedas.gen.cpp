// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/SpawnDeMonedas.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnDeMonedas() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ACoin_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ASpawnDeMonedas();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ASpawnDeMonedas_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ASpawnDeMonedas
void ASpawnDeMonedas::StaticRegisterNativesASpawnDeMonedas()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnDeMonedas);
UClass* Z_Construct_UClass_ASpawnDeMonedas_NoRegister()
{
	return ASpawnDeMonedas::StaticClass();
}
struct Z_Construct_UClass_ASpawnDeMonedas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnDeMonedas.h" },
		{ "ModuleRelativePath", "Public/SpawnDeMonedas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoinClass_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//El UPORPERTY nos permite modificar las variables en el editor\n//Son muy utiles para modificar variables sin tener que recompilar el proyecto\n//TSubclassOf nos permite seleccionar una clase de la cual se creara un objeto\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnDeMonedas.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "El UPORPERTY nos permite modificar las variables en el editor\nSon muy utiles para modificar variables sin tener que recompilar el proyecto\nTSubclassOf nos permite seleccionar una clase de la cual se creara un objeto" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumeroDeMonedas_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Cantidad de monedas a spawnear \n//Se puede modificar en el editor y aqui\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnDeMonedas.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cantidad de monedas a spawnear\nSe puede modificar en el editor y aqui" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanciaEntreMonedas_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Distancia entre monedas\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnDeMonedas.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distancia entre monedas" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CoinClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumeroDeMonedas;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanciaEntreMonedas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnDeMonedas>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnDeMonedas_Statics::NewProp_CoinClass = { "CoinClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnDeMonedas, CoinClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACoin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoinClass_MetaData), NewProp_CoinClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpawnDeMonedas_Statics::NewProp_NumeroDeMonedas = { "NumeroDeMonedas", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnDeMonedas, NumeroDeMonedas), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumeroDeMonedas_MetaData), NewProp_NumeroDeMonedas_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnDeMonedas_Statics::NewProp_DistanciaEntreMonedas = { "DistanciaEntreMonedas", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnDeMonedas, DistanciaEntreMonedas), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanciaEntreMonedas_MetaData), NewProp_DistanciaEntreMonedas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnDeMonedas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnDeMonedas_Statics::NewProp_CoinClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnDeMonedas_Statics::NewProp_NumeroDeMonedas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnDeMonedas_Statics::NewProp_DistanciaEntreMonedas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnDeMonedas_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnDeMonedas_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnDeMonedas_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnDeMonedas_Statics::ClassParams = {
	&ASpawnDeMonedas::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpawnDeMonedas_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnDeMonedas_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnDeMonedas_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnDeMonedas_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnDeMonedas()
{
	if (!Z_Registration_Info_UClass_ASpawnDeMonedas.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnDeMonedas.OuterSingleton, Z_Construct_UClass_ASpawnDeMonedas_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnDeMonedas.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ASpawnDeMonedas>()
{
	return ASpawnDeMonedas::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnDeMonedas);
ASpawnDeMonedas::~ASpawnDeMonedas() {}
// End Class ASpawnDeMonedas

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_SpawnDeMonedas_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnDeMonedas, ASpawnDeMonedas::StaticClass, TEXT("ASpawnDeMonedas"), &Z_Registration_Info_UClass_ASpawnDeMonedas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnDeMonedas), 265362026U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_SpawnDeMonedas_h_978362355(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_SpawnDeMonedas_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_SpawnDeMonedas_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
