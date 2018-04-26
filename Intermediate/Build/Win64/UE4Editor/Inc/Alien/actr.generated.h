// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALIEN_actr_generated_h
#error "actr.generated.h already included, missing '#pragma once' in actr.h"
#endif
#define ALIEN_actr_generated_h

#define Alien_4_16_Source_Alien_Public_actr_h_12_RPC_WRAPPERS
#define Alien_4_16_Source_Alien_Public_actr_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Alien_4_16_Source_Alien_Public_actr_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAactr(); \
	friend ALIEN_API class UClass* Z_Construct_UClass_Aactr(); \
public: \
	DECLARE_CLASS(Aactr, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Alien"), NO_API) \
	DECLARE_SERIALIZER(Aactr) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Alien_4_16_Source_Alien_Public_actr_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAactr(); \
	friend ALIEN_API class UClass* Z_Construct_UClass_Aactr(); \
public: \
	DECLARE_CLASS(Aactr, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Alien"), NO_API) \
	DECLARE_SERIALIZER(Aactr) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Alien_4_16_Source_Alien_Public_actr_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aactr(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aactr) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aactr); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aactr); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aactr(Aactr&&); \
	NO_API Aactr(const Aactr&); \
public:


#define Alien_4_16_Source_Alien_Public_actr_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aactr(Aactr&&); \
	NO_API Aactr(const Aactr&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aactr); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aactr); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aactr)


#define Alien_4_16_Source_Alien_Public_actr_h_12_PRIVATE_PROPERTY_OFFSET
#define Alien_4_16_Source_Alien_Public_actr_h_9_PROLOG
#define Alien_4_16_Source_Alien_Public_actr_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Alien_4_16_Source_Alien_Public_actr_h_12_PRIVATE_PROPERTY_OFFSET \
	Alien_4_16_Source_Alien_Public_actr_h_12_RPC_WRAPPERS \
	Alien_4_16_Source_Alien_Public_actr_h_12_INCLASS \
	Alien_4_16_Source_Alien_Public_actr_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Alien_4_16_Source_Alien_Public_actr_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Alien_4_16_Source_Alien_Public_actr_h_12_PRIVATE_PROPERTY_OFFSET \
	Alien_4_16_Source_Alien_Public_actr_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Alien_4_16_Source_Alien_Public_actr_h_12_INCLASS_NO_PURE_DECLS \
	Alien_4_16_Source_Alien_Public_actr_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Alien_4_16_Source_Alien_Public_actr_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
