// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Alien_build.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Alien_build() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();

	ALIEN_BUILD_API class UClass* Z_Construct_UClass_AAlienVaisseau_NoRegister();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_AAlienVaisseau();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_ATestAlien_NoRegister();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_ATestAlien();
	ALIEN_BUILD_API class UPackage* Z_Construct_UPackage__Script_Alien_build();
	void AAlienVaisseau::StaticRegisterNativesAAlienVaisseau()
	{
	}
	UClass* Z_Construct_UClass_AAlienVaisseau_NoRegister()
	{
		return AAlienVaisseau::StaticClass();
	}
	UClass* Z_Construct_UClass_AAlienVaisseau()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_Alien_build();
			OuterClass = AAlienVaisseau::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AAlienVaisseau> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AlienVaisseau.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AlienVaisseau.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAlienVaisseau, 2200924469);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAlienVaisseau(Z_Construct_UClass_AAlienVaisseau, &AAlienVaisseau::StaticClass, TEXT("/Script/Alien_build"), TEXT("AAlienVaisseau"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAlienVaisseau);
	void ATestAlien::StaticRegisterNativesATestAlien()
	{
	}
	UClass* Z_Construct_UClass_ATestAlien_NoRegister()
	{
		return ATestAlien::StaticClass();
	}
	UClass* Z_Construct_UClass_ATestAlien()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Alien_build();
			OuterClass = ATestAlien::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ATestAlien> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TestAlien.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TestAlien.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestAlien, 1912758556);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestAlien(Z_Construct_UClass_ATestAlien, &ATestAlien::StaticClass, TEXT("/Script/Alien_build"), TEXT("ATestAlien"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestAlien);
	UPackage* Z_Construct_UPackage__Script_Alien_build()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Alien_build")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x215F433D;
			Guid.B = 0x1B7EDECE;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
