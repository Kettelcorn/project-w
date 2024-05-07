// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectW/Public/ControlPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlPlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	PROJECTW_API UClass* Z_Construct_UClass_AControlPlayer();
	PROJECTW_API UClass* Z_Construct_UClass_AControlPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectW();
// End Cross Module References
	void AControlPlayer::StaticRegisterNativesAControlPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AControlPlayer);
	UClass* Z_Construct_UClass_AControlPlayer_NoRegister()
	{
		return AControlPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AControlPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControlPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectW,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AControlPlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ControlPlayer.h" },
		{ "ModuleRelativePath", "Public/ControlPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControlPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControlPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AControlPlayer_Statics::ClassParams = {
		&AControlPlayer::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControlPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AControlPlayer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AControlPlayer()
	{
		if (!Z_Registration_Info_UClass_AControlPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AControlPlayer.OuterSingleton, Z_Construct_UClass_AControlPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AControlPlayer.OuterSingleton;
	}
	template<> PROJECTW_API UClass* StaticClass<AControlPlayer>()
	{
		return AControlPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControlPlayer);
	AControlPlayer::~AControlPlayer() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Games_project_w_ProjectW_Source_ProjectW_Public_ControlPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Games_project_w_ProjectW_Source_ProjectW_Public_ControlPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AControlPlayer, AControlPlayer::StaticClass, TEXT("AControlPlayer"), &Z_Registration_Info_UClass_AControlPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AControlPlayer), 4162251252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Games_project_w_ProjectW_Source_ProjectW_Public_ControlPlayer_h_3448275503(TEXT("/Script/ProjectW"),
		Z_CompiledInDeferFile_FID_Unreal_Games_project_w_ProjectW_Source_ProjectW_Public_ControlPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Games_project_w_ProjectW_Source_ProjectW_Public_ControlPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
