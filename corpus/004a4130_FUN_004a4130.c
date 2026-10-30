
undefined4 FUN_004a4130(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_004a3fd0(param_1,param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0xb4) = 1;
    return 0;
  }
  uVar2 = FUN_004a4070(0,2,param_2);
  FUN_004a4070(0,0,param_2);
  *(undefined4 *)(param_2 + 0xb0) = uVar2;
  DAT_006038a4 = uVar2;
  uVar3 = FUN_0049c3b0(uVar2,4,0,s_PFF_LOADED_FILE_0055e140);
  FUN_004a4040(uVar3,uVar2,param_2);
  if ((**(byte **)(param_2 + 0x9c) & 1) != 0) {
    FUN_004a4100(uVar3,uVar2);
  }
  *(undefined4 *)(param_2 + 0xb4) = 0;
  return uVar3;
}

