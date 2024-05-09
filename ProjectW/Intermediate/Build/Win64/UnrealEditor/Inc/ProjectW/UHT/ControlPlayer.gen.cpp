// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectW/Public/ControlPlayer.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlPlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PROJECTW_API UClass* Z_Construct_UClass_AControlPlayer();
	PROJECTW_API UClass* Z_Construct_UClass_AControlPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectW();
// End Cross Module References
	DEFINE_FUNCTION(AControlPlayer::execOnEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AControlPlayer::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AControlPlayer::StaticRegisterNativesAControlPlayer()
	{
		UClass* Class = AControlPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &AControlPlayer::execOnBeginOverlap },
			{ "OnEndOverlap", &AControlPlayer::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics
	{
		struct ControlPlayer_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlPlayer_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlPlayer_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlPlayer_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlPlayer_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ControlPlayer_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlPlayer_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlPlayer_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ControlPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPlayer, nullptr, "OnBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::ControlPlayer_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::ControlPlayer_eventOnBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AControlPlayer_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlPlayer_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics
	{
		struct ControlPlayer_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlPlayer_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlPlayer_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlPlayer_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlPlayer_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ControlPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPlayer, nullptr, "OnEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::ControlPlayer_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::ControlPlayer_eventOnEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AControlPlayer_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlPlayer_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AControlPlayer);
	UClass* Z_Construct_UClass_AControlPlayer_NoRegister()
	{
		return AControlPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AControlPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatingPawnMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatingPawnMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanJump_MetaData[];
#endif
		static void NewProp_CanJump_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanJump;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControlPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectW,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AControlPlayer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AControlPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AControlPlayer_OnBeginOverlap, "OnBeginOverlap" }, // 3978680758
		{ &Z_Construct_UFunction_AControlPlayer_OnEndOverlap, "OnEndOverlap" }, // 3978601519
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AControlPlayer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ControlPlayer.h" },
		{ "ModuleRelativePath", "Public/ControlPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPlayer_Statics::NewProp_FloatingPawnMovement_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Creating properties for Spring Arm and Camera (two #include)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControlPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creating properties for Spring Arm and Camera (two #include)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPlayer_Statics::NewProp_FloatingPawnMovement = { "FloatingPawnMovement", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControlPlayer, FloatingPawnMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControlPlayer_Statics::NewProp_FloatingPawnMovement_MetaData), Z_Construct_UClass_AControlPlayer_Statics::NewProp_FloatingPawnMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPlayer_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Body" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControlPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPlayer_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControlPlayer, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControlPlayer_Statics::NewProp_MeshComponent_MetaData), Z_Construct_UClass_AControlPlayer_Statics::NewProp_MeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPlayer_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControlPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPlayer_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControlPlayer, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControlPlayer_Statics::NewProp_SpringArm_MetaData), Z_Construct_UClass_AControlPlayer_Statics::NewProp_SpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPlayer_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControlPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPlayer_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControlPlayer, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControlPlayer_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_AControlPlayer_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPlayer_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/ControlPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AControlPlayer_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControlPlayer, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControlPlayer_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_AControlPlayer_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPlayer_Statics::NewProp_CanJump_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Public/ControlPlayer.h" },
	};
#endif
	void Z_Construct_UClass_AControlPlayer_Statics::NewProp_CanJump_SetBit(void* Obj)
	{
		((AControlPlayer*)Obj)->CanJump = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlPlayer_Statics::NewProp_CanJump = { "CanJump", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AControlPlayer), &Z_Construct_UClass_AControlPlayer_Statics::NewProp_CanJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControlPlayer_Statics::NewProp_CanJump_MetaData), Z_Construct_UClass_AControlPlayer_Statics::NewProp_CanJump_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AControlPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPlayer_Statics::NewProp_FloatingPawnMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPlayer_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPlayer_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPlayer_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPlayer_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPlayer_Statics::NewProp_CanJump,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControlPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControlPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AControlPlayer_Statics::ClassParams = {
		&AControlPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AControlPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AControlPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControlPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AControlPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AControlPlayer_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_AControlPlayer, AControlPlayer::StaticClass, TEXT("AControlPlayer"), &Z_Registration_Info_UClass_AControlPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AControlPlayer), 652778023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Games_project_w_ProjectW_Source_ProjectW_Public_ControlPlayer_h_3917201973(TEXT("/Script/ProjectW"),
		Z_CompiledInDeferFile_FID_Unreal_Games_project_w_ProjectW_Source_ProjectW_Public_ControlPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Games_project_w_ProjectW_Source_ProjectW_Public_ControlPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
