#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
223,
231,
232,
233,
234,
235,
236,
237,
238,
239,
242,
243,
414,
415,
417,
445,
446,
447,
467,
468,
469,
470,
568,
569,
570,
573,
610,
611,
612,
615,
617,
619,
621,
626,
634,
635,
636,
637,
638,
639,
640,
641,
642,
643,
644,
645,
646,
647,
648,
649,
650,
652,
653,
654,
655,
656,
657,
658,
750,
751,
752,
753,
754,
755,
756,
757,
758,
759,
760,
761,
762,
763,
764,
765,
766,
768,
769,
770,
771,
772,
773,
774,
900,
909,
912,
914,
919,
920,
922,
923,
927,
928,
930,
931,
934,
935,
936,
939,
941,
944,
946,
948,
1019,
1021,
1023,
1032,
1033,
1034,
1035,
1037,
1044,
1045,
1046,
1047,
1048,
1056,
1057,
1058,
1062,
1063,
1065,
1069,
1070,
1071,
1342,
1537,
1538,
8827,
8828,
8830,
8831,
8832,
8833,
8834,
8836,
8838,
8840,
8841,
8850,
8852,
8856,
8857,
8859,
8861,
8863,
8874,
8883,
8884,
8886,
8887,
8888,
8889,
8890,
8892,
8894,
9940,
9944,
9946,
9947,
9948,
9949,
10091,
10092,
10093,
10094,
10114,
10115,
10116,
10118,
10161,
10221,
10223,
10234,
10235,
10236,
10237,
10549,
10550,
10555,
10556,
10586,
10609,
10615,
10622,
10632,
10635,
10723,
10732,
10734,
10735,
10741,
10754,
10774,
10775,
10783,
10785,
10792,
10793,
10796,
10798,
10803,
10809,
10810,
10817,
10819,
10831,
10834,
10835,
10836,
10847,
10856,
10862,
10863,
10864,
10866,
10867,
10885,
10887,
10901,
10924,
10925,
10943,
10948,
10978,
10979,
11430,
11431,
11503,
11582,
11832,
11833,
11839,
11840,
11841,
11847,
11917,
12311,
12312,
12721,
12722,
13671,
13692,
13699,
13701,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 223,
ves_icall_System_Array_InternalCreate,
// token 231,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 232,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 233,
ves_icall_System_Array_CanChangePrimitive,
// token 234,
ves_icall_System_Array_FastCopy_raw,
// token 235,
ves_icall_System_Array_GetLength_raw,
// token 236,
ves_icall_System_Array_GetLowerBound_raw,
// token 237,
ves_icall_System_Array_GetGenericValue_icall,
// token 238,
ves_icall_System_Array_GetValueImpl_raw,
// token 239,
ves_icall_System_Array_SetGenericValue_icall,
// token 242,
ves_icall_System_Array_SetValueImpl_raw,
// token 243,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 414,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 415,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 417,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 445,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 446,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 447,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 467,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 468,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 469,
ves_icall_System_Enum_InternalGetCorElementType,
// token 470,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 568,
ves_icall_System_Environment_get_ProcessorCount,
// token 569,
ves_icall_System_Environment_get_TickCount,
// token 570,
ves_icall_System_Environment_get_TickCount64,
// token 573,
ves_icall_System_Environment_FailFast_raw,
// token 610,
ves_icall_System_GC_GetCollectionCount,
// token 611,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 612,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 615,
ves_icall_System_GC_SuppressFinalize_raw,
// token 617,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 619,
ves_icall_System_GC_GetGCMemoryInfo,
// token 621,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 626,
ves_icall_System_Object_MemberwiseClone_raw,
// token 634,
ves_icall_System_Math_Acos,
// token 635,
ves_icall_System_Math_Acosh,
// token 636,
ves_icall_System_Math_Asin,
// token 637,
ves_icall_System_Math_Asinh,
// token 638,
ves_icall_System_Math_Atan,
// token 639,
ves_icall_System_Math_Atan2,
// token 640,
ves_icall_System_Math_Atanh,
// token 641,
ves_icall_System_Math_Cbrt,
// token 642,
ves_icall_System_Math_Ceiling,
// token 643,
ves_icall_System_Math_Cos,
// token 644,
ves_icall_System_Math_Cosh,
// token 645,
ves_icall_System_Math_Exp,
// token 646,
ves_icall_System_Math_Floor,
// token 647,
ves_icall_System_Math_Log,
// token 648,
ves_icall_System_Math_Log10,
// token 649,
ves_icall_System_Math_Pow,
// token 650,
ves_icall_System_Math_Sin,
// token 652,
ves_icall_System_Math_Sinh,
// token 653,
ves_icall_System_Math_Sqrt,
// token 654,
ves_icall_System_Math_Tan,
// token 655,
ves_icall_System_Math_Tanh,
// token 656,
ves_icall_System_Math_FusedMultiplyAdd,
// token 657,
ves_icall_System_Math_Log2,
// token 658,
ves_icall_System_Math_ModF,
// token 750,
ves_icall_System_MathF_Acos,
// token 751,
ves_icall_System_MathF_Acosh,
// token 752,
ves_icall_System_MathF_Asin,
// token 753,
ves_icall_System_MathF_Asinh,
// token 754,
ves_icall_System_MathF_Atan,
// token 755,
ves_icall_System_MathF_Atan2,
// token 756,
ves_icall_System_MathF_Atanh,
// token 757,
ves_icall_System_MathF_Cbrt,
// token 758,
ves_icall_System_MathF_Ceiling,
// token 759,
ves_icall_System_MathF_Cos,
// token 760,
ves_icall_System_MathF_Cosh,
// token 761,
ves_icall_System_MathF_Exp,
// token 762,
ves_icall_System_MathF_Floor,
// token 763,
ves_icall_System_MathF_Log,
// token 764,
ves_icall_System_MathF_Log10,
// token 765,
ves_icall_System_MathF_Pow,
// token 766,
ves_icall_System_MathF_Sin,
// token 768,
ves_icall_System_MathF_Sinh,
// token 769,
ves_icall_System_MathF_Sqrt,
// token 770,
ves_icall_System_MathF_Tan,
// token 771,
ves_icall_System_MathF_Tanh,
// token 772,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 773,
ves_icall_System_MathF_Log2,
// token 774,
ves_icall_System_MathF_ModF,
// token 900,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 909,
ves_icall_RuntimeType_make_array_type_raw,
// token 912,
ves_icall_RuntimeType_make_byref_type_raw,
// token 914,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 919,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 920,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 922,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 923,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 927,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 928,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 930,
ves_icall_System_RuntimeType_getFullName_raw,
// token 931,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 934,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 935,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 936,
ves_icall_RuntimeType_GetFields_native_raw,
// token 939,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 941,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 944,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 946,
ves_icall_RuntimeType_GetName_raw,
// token 948,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1019,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1021,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1023,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1032,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1033,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1034,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1035,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1037,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1044,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1045,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1046,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1047,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1048,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1056,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1057,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1058,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1062,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1063,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1065,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1069,
ves_icall_System_String_FastAllocateString_raw,
// token 1070,
ves_icall_System_String_InternalIsInterned_raw,
// token 1071,
ves_icall_System_String_InternalIntern_raw,
// token 1342,
ves_icall_System_Type_internal_from_handle_raw,
// token 1537,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1538,
ves_icall_System_ValueType_Equals_raw,
// token 8827,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8828,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8830,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8831,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8832,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8833,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8834,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8836,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8838,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8840,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8841,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 8850,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8852,
mono_monitor_exit_icall_raw,
// token 8856,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 8857,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8859,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8861,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8863,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8874,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 8883,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8884,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8886,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8887,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8888,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8889,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8890,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8892,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8894,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9940,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9944,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9946,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9947,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9948,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9949,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 10091,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 10092,
ves_icall_System_GCHandle_InternalFree_raw,
// token 10093,
ves_icall_System_GCHandle_InternalGet_raw,
// token 10094,
ves_icall_System_GCHandle_InternalSet_raw,
// token 10114,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 10115,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 10116,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 10118,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 10161,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 10221,
mono_object_hash_icall_raw,
// token 10223,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 10234,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 10235,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 10236,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 10237,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 10549,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 10550,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 10555,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 10556,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 10586,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 10609,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 10615,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 10622,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 10632,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 10635,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 10723,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 10732,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 10734,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 10735,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 10741,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 10754,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 10774,
ves_icall_reflection_get_token_raw,
// token 10775,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 10783,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 10785,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 10792,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 10793,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 10796,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 10798,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10803,
ves_icall_reflection_get_token_raw,
// token 10809,
ves_icall_get_method_info_raw,
// token 10810,
ves_icall_get_method_attributes,
// token 10817,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10819,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10831,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10834,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10835,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10836,
ves_icall_reflection_get_token_raw,
// token 10847,
ves_icall_InternalInvoke_raw,
// token 10856,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10862,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10863,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10864,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10866,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10867,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10885,
ves_icall_InvokeClassConstructor_raw,
// token 10887,
ves_icall_InternalInvoke_raw,
// token 10901,
ves_icall_reflection_get_token_raw,
// token 10924,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 10925,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10943,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 10948,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10978,
ves_icall_reflection_get_token_raw,
// token 10979,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 11430,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 11431,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 11503,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 11582,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 11832,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11833,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11839,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 11840,
ves_icall_ModuleBuilder_getToken_raw,
// token 11841,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 11847,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11917,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 12311,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 12312,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 12721,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 12722,
ves_icall_System_Diagnostics_Debugger_Log,
// token 13671,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 13692,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 13699,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 13701,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
};
