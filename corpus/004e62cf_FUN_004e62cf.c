
undefined8 __fastcall FUN_004e62cf(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  undefined1 *puVar1;
  
  puVar1 = &stack0xfffffffc;
  FUN_004e6234();
  mark_alloc_memory_with_flags(**(undefined4 **)(puVar1 + 0xc),*(undefined4 *)(puVar1 + 0x14));
  mark_alloc_memory_with_flags
            (*(undefined4 *)(*(int *)(puVar1 + 0xc) + 4),*(undefined4 *)(puVar1 + 0x14));
  return CONCAT44(param_2,in_EAX);
}

