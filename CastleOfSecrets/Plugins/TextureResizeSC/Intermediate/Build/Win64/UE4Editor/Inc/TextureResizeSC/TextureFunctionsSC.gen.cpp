// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TextureResizeSC/Public/TextureFunctionsSC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureFunctionsSC() {}
// Cross Module References
	TEXTURERESIZESC_API UClass* Z_Construct_UClass_UTextureFunctionsSC_NoRegister();
	TEXTURERESIZESC_API UClass* Z_Construct_UClass_UTextureFunctionsSC();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TextureResizeSC();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTextureFunctionsSC::execPrintPixelFormat)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTextureFunctionsSC::PrintPixelFormat(Z_Param_texture);
		P_NATIVE_END;
	}
	void UTextureFunctionsSC::StaticRegisterNativesUTextureFunctionsSC()
	{
		UClass* Class = UTextureFunctionsSC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrintPixelFormat", &UTextureFunctionsSC::execPrintPixelFormat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextureFunctionsSC_PrintPixelFormat_Statics
	{
		struct TextureFunctionsSC_eventPrintPixelFormat_Parms
		{
			UTexture2D* texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureFunctionsSC_PrintPixelFormat_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextureFunctionsSC_eventPrintPixelFormat_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureFunctionsSC_PrintPixelFormat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureFunctionsSC_PrintPixelFormat_Statics::NewProp_texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureFunctionsSC_PrintPixelFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/TextureFunctionsSC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureFunctionsSC_PrintPixelFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureFunctionsSC, nullptr, "PrintPixelFormat", nullptr, nullptr, sizeof(TextureFunctionsSC_eventPrintPixelFormat_Parms), Z_Construct_UFunction_UTextureFunctionsSC_PrintPixelFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureFunctionsSC_PrintPixelFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextureFunctionsSC_PrintPixelFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureFunctionsSC_PrintPixelFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextureFunctionsSC_PrintPixelFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextureFunctionsSC_PrintPixelFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTextureFunctionsSC_NoRegister()
	{
		return UTextureFunctionsSC::StaticClass();
	}
	struct Z_Construct_UClass_UTextureFunctionsSC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureFunctionsSC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TextureResizeSC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextureFunctionsSC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextureFunctionsSC_PrintPixelFormat, "PrintPixelFormat" }, // 402425918
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFunctionsSC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TextureFunctionsSC.h" },
		{ "ModuleRelativePath", "Public/TextureFunctionsSC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureFunctionsSC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureFunctionsSC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextureFunctionsSC_Statics::ClassParams = {
		&UTextureFunctionsSC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureFunctionsSC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFunctionsSC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureFunctionsSC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextureFunctionsSC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureFunctionsSC, 1178605732);
	template<> TEXTURERESIZESC_API UClass* StaticClass<UTextureFunctionsSC>()
	{
		return UTextureFunctionsSC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureFunctionsSC(Z_Construct_UClass_UTextureFunctionsSC, &UTextureFunctionsSC::StaticClass, TEXT("/Script/TextureResizeSC"), TEXT("UTextureFunctionsSC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureFunctionsSC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
