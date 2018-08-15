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
	INPUTCORE_API class UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();

	ALIEN_BUILD_API class UFunction* Z_Construct_UFunction_UEnxtensionHUDblueprint_BindControl();
	ALIEN_BUILD_API class UFunction* Z_Construct_UFunction_UEnxtensionHUDblueprint_ChangeLanguage();
	ALIEN_BUILD_API class UFunction* Z_Construct_UFunction_UEnxtensionHUDblueprint_getCurrentLanguage();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_UEnxtensionHUDblueprint_NoRegister();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_UEnxtensionHUDblueprint();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_UID_Coffre_Property_NoRegister();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_UID_Coffre_Property();
	ALIEN_BUILD_API class UFunction* Z_Construct_UFunction_UOperatorExtension_isBetween();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_UOperatorExtension_NoRegister();
	ALIEN_BUILD_API class UClass* Z_Construct_UClass_UOperatorExtension();
	ALIEN_BUILD_API class UPackage* Z_Construct_UPackage__Script_Alien_build();
	void UEnxtensionHUDblueprint::StaticRegisterNativesUEnxtensionHUDblueprint()
	{
		UClass* Class = UEnxtensionHUDblueprint::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "BindControl", (Native)&UEnxtensionHUDblueprint::execBindControl },
			{ "ChangeLanguage", (Native)&UEnxtensionHUDblueprint::execChangeLanguage },
			{ "getCurrentLanguage", (Native)&UEnxtensionHUDblueprint::execgetCurrentLanguage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 3);
	}
	UFunction* Z_Construct_UFunction_UEnxtensionHUDblueprint_BindControl()
	{
		struct EnxtensionHUDblueprint_eventBindControl_Parms
		{
			FString toBind;
			FKey key;
		};
		UObject* Outer=Z_Construct_UClass_UEnxtensionHUDblueprint();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BindControl"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04042401, 65535, sizeof(EnxtensionHUDblueprint_eventBindControl_Parms));
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(key, EnxtensionHUDblueprint_eventBindControl_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FKey());
			UProperty* NewProp_toBind = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("toBind"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(toBind, EnxtensionHUDblueprint_eventBindControl_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Controls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/EnxtensionHUDblueprint.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEnxtensionHUDblueprint_ChangeLanguage()
	{
		struct EnxtensionHUDblueprint_eventChangeLanguage_Parms
		{
			FString langue;
		};
		UObject* Outer=Z_Construct_UClass_UEnxtensionHUDblueprint();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ChangeLanguage"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04042401, 65535, sizeof(EnxtensionHUDblueprint_eventChangeLanguage_Parms));
			UProperty* NewProp_langue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("langue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(langue, EnxtensionHUDblueprint_eventChangeLanguage_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Language"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("Target"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/EnxtensionHUDblueprint.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UEnxtensionHUDblueprint_getCurrentLanguage()
	{
		struct EnxtensionHUDblueprint_eventgetCurrentLanguage_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UEnxtensionHUDblueprint();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("getCurrentLanguage"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04042401, 65535, sizeof(EnxtensionHUDblueprint_eventgetCurrentLanguage_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, EnxtensionHUDblueprint_eventgetCurrentLanguage_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Language"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/EnxtensionHUDblueprint.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnxtensionHUDblueprint_NoRegister()
	{
		return UEnxtensionHUDblueprint::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnxtensionHUDblueprint()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_Alien_build();
			OuterClass = UEnxtensionHUDblueprint::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_UEnxtensionHUDblueprint_BindControl());
				OuterClass->LinkChild(Z_Construct_UFunction_UEnxtensionHUDblueprint_ChangeLanguage());
				OuterClass->LinkChild(Z_Construct_UFunction_UEnxtensionHUDblueprint_getCurrentLanguage());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UEnxtensionHUDblueprint_BindControl(), "BindControl"); // 3274355742
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UEnxtensionHUDblueprint_ChangeLanguage(), "ChangeLanguage"); // 2880123226
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UEnxtensionHUDblueprint_getCurrentLanguage(), "getCurrentLanguage"); // 2843603095
				static TCppClassTypeInfo<TCppClassTypeTraits<UEnxtensionHUDblueprint> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnxtensionHUDblueprint.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/EnxtensionHUDblueprint.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnxtensionHUDblueprint, 2336368254);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnxtensionHUDblueprint(Z_Construct_UClass_UEnxtensionHUDblueprint, &UEnxtensionHUDblueprint::StaticClass, TEXT("/Script/Alien_build"), TEXT("UEnxtensionHUDblueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnxtensionHUDblueprint);
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
	void UOperatorExtension::StaticRegisterNativesUOperatorExtension()
	{
		UClass* Class = UOperatorExtension::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "isBetween", (Native)&UOperatorExtension::execisBetween },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_UOperatorExtension_isBetween()
	{
		struct OperatorExtension_eventisBetween_Parms
		{
			float Min;
			float Max;
			float toCheck;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UOperatorExtension();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("isBetween"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14042401, 65535, sizeof(OperatorExtension_eventisBetween_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, OperatorExtension_eventisBetween_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, OperatorExtension_eventisBetween_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, OperatorExtension_eventisBetween_Parms), sizeof(bool), true);
			UProperty* NewProp_toCheck = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("toCheck"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(toCheck, OperatorExtension_eventisBetween_Parms), 0x0010000000000080);
			UProperty* NewProp_Max = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Max"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Max, OperatorExtension_eventisBetween_Parms), 0x0010000000000080);
			UProperty* NewProp_Min = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Min"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Min, OperatorExtension_eventisBetween_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Operator"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OperatorExtension.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOperatorExtension_NoRegister()
	{
		return UOperatorExtension::StaticClass();
	}
	UClass* Z_Construct_UClass_UOperatorExtension()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_Alien_build();
			OuterClass = UOperatorExtension::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_UOperatorExtension_isBetween());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UOperatorExtension_isBetween(), "isBetween"); // 837303351
				static TCppClassTypeInfo<TCppClassTypeTraits<UOperatorExtension> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("OperatorExtension.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/OperatorExtension.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOperatorExtension, 3281002417);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOperatorExtension(Z_Construct_UClass_UOperatorExtension, &UOperatorExtension::StaticClass, TEXT("/Script/Alien_build"), TEXT("UOperatorExtension"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatorExtension);
	UPackage* Z_Construct_UPackage__Script_Alien_build()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Alien_build")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x239CD14B;
			Guid.B = 0xADCFA5B2;
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
