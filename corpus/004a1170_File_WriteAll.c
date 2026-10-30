
/* open-for-write, write buf[len], close */

undefined4 File_WriteAll(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004a0d60(param_1);
  if (iVar1 == -1) {
    DAT_006038b8 = 1;
    return 0xffffffff;
  }
  FUN_004a0ef0(param_2,param_3);
  FUN_004a0ec0();
  DAT_006038b8 = 0;
  return 0;
}

