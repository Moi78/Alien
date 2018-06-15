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
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent_NoRegister();

	ALIEN_BUILD_API class UClass* Z_Construct_UClass_AAlienVaisseau_NoRegister();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_AAlienVaisseau();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_UID_Coffre_Property_NoRegister();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_UID_Coffre_Property();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_Alvl1_alienSpawner_NoRegister();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_Alvl1_alienSpawner();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_ATestAlien_NoRegister();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_ATestAlien();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_ATestOBJ_NoRegister();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_ATestOBJ();
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
	void UID_Coffre_Property::StaticRegisterNativesUID_Coffre_Property()
	{
	}
	UClass* Z_Construct_UClass_UID_Coffre_Property_NoRegister()
	{
		return UID_Coffre_Property::StaticClass();
	}
	UClass* Z_Construct_UClass_UID_Coffre_Property()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_Alien_build();
			OuterClass = UID_Coffre_Property::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ID = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ID, UID_Coffre_Property), 0x0010000000000005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UID_Coffre_Property> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ID_Coffre_Property.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ID_Coffre_Property.h"));
				MetaData->SetValue(NewProp_ID, TEXT("Category"), TEXT("ID du coffre"));
				MetaData->SetValue(NewProp_ID, TEXT("ModuleRelativePath"), TEXT("Public/ID_Coffre_Property.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UID_Coffre_Property, 1333013459);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UID_Coffre_Property(Z_Construct_UClass_UID_Coffre_Property, &UID_Coffre_Property::StaticClass, TEXT("/Script/Alien_build"), TEXT("UID_Coffre_Property"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UID_Coffre_Property);
	void Alvl1_alienSpawner::StaticRegisterNativesAlvl1_alienSpawner()
	{
	}
	UClass* Z_Construct_UClass_Alvl1_alienSpawner_NoRegister()
	{
		return Alvl1_alienSpawner::StaticClass();
	}
	UClass* Z_Construct_UClass_Alvl1_alienSpawner()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Alien_build();
			OuterClass = Alvl1_alienSpawner::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_repere = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("repere"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(repere, Alvl1_alienSpawner), 0x0010000000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_root = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("root"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(root, Alvl1_alienSpawner), 0x0010000000080009, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<Alvl1_alienSpawner> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("lvl1_alienSpawner.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/lvl1_alienSpawner.h"));
				MetaData->SetValue(NewProp_repere, TEXT("Category"), TEXT("lvl1_alienSpawner"));
				MetaData->SetValue(NewProp_repere, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_repere, TEXT("ModuleRelativePath"), TEXT("Public/lvl1_alienSpawner.h"));
				MetaData->SetValue(NewProp_root, TEXT("Category"), TEXT("lvl1_alienSpawner"));
				MetaData->SetValue(NewProp_root, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_root, TEXT("ModuleRelativePath"), TEXT("Public/lvl1_alienSpawner.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(Alvl1_alienSpawner, 2631376586);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Alvl1_alienSpawner(Z_Construct_UClass_Alvl1_alienSpawner, &Alvl1_alienSpawner::StaticClass, TEXT("/Script/Alien_build"), TEXT("Alvl1_alienSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Alvl1_alienSpawner);
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
	void ATestOBJ::StaticRegisterNativesATestOBJ()
	{
	}
	UClass* Z_Construct_UClass_ATestOBJ_NoRegister()
	{
		return ATestOBJ::StaticClass();
	}
	UClass* Z_Construct_UClass_ATestOBJ()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Alien_build();
			OuterClass = ATestOBJ::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_boxColl = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("boxColl"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(boxColl, ATestOBJ), 0x0010000000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_root = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("root"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(root, ATestOBJ), 0x0010000000080009, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ATestOBJ> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TestOBJ.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TestOBJ.h"));
				MetaData->SetValue(NewProp_boxColl, TEXT("Category"), TEXT("TestOBJ"));
				MetaData->SetValue(NewProp_boxColl, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_boxColl, TEXT("ModuleRelativePath"), TEXT("Public/TestOBJ.h"));
				MetaData->SetValue(NewProp_root, TEXT("Category"), TEXT("TestOBJ"));
				MetaData->SetValue(NewProp_root, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_root, TEXT("ModuleRelativePath"), TEXT("Public/TestOBJ.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestOBJ, 2170509149);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestOBJ(Z_Construct_UClass_ATestOBJ, &ATestOBJ::StaticClass, TEXT("/Script/Alien_build"), TEXT("ATestOBJ"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestOBJ);
	UPackage* Z_Construct_UPackage__Script_Alien_build()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Alien_build")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xFE8C51EE;
			Guid.B = 0x124EDAA4;
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
