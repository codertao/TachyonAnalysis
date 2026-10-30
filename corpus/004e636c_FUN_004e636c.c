
undefined8 __fastcall FUN_004e636c(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    uVar1 = (uint)*(byte *)(*(int *)(param_3 + 4) + 0x20c);
  }
  else {
    uVar1 = *(uint *)(param_3 + 0x1c);
  }
  return CONCAT44(param_2,uVar1);
}

