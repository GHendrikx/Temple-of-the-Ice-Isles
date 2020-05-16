// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTemple/SinusFloatingBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSinusFloatingBlock() {}
// Cross Module References
	THETEMPLE_API UClass* Z_Construct_UClass_ASinusFloatingBlock_NoRegister();
	THETEMPLE_API UClass* Z_Construct_UClass_ASinusFloatingBlock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheTemple();
// End Cross Module References
	void ASinusFloatingBlock::StaticRegisterNativesASinusFloatingBlock()
	{
	}
	UClass* Z_Construct_UClass_ASinusFloatingBlock_NoRegister()
	{
		return ASinusFloatingBlock::StaticClass();
	}
	struct Z_Construct_UClass_ASinusFloatingBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASinusFloatingBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTemple,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASinusFloatingBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SinusFloatingBlock.h" },
		{ "ModuleRelativePath", "SinusFloatingBlock.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASinusFloatingBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASinusFloatingBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASinusFloatingBlock_Statics::ClassParams = {
		&ASinusFloatingBlock::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASinusFloatingBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASinusFloatingBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASinusFloatingBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASinusFloatingBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASinusFloatingBlock, 331143900);
	template<> THETEMPLE_API UClass* StaticClass<ASinusFloatingBlock>()
	{
		return ASinusFloatingBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASinusFloatingBlock(Z_Construct_UClass_ASinusFloatingBlock, &ASinusFloatingBlock::StaticClass, TEXT("/Script/TheTemple"), TEXT("ASinusFloatingBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASinusFloatingBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
