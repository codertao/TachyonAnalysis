
void FUN_004a82a0(uint param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(int *)(param_3 + 0xc) != 0) && (param_1 < *(uint *)(param_3 + 4))) {
    uVar1 = *(undefined4 *)(*(int *)(param_3 + 8) + param_1 * 0x38);
    FUN_004a80a0(param_1,param_2,param_3);
    iVar2 = _AIL_3D_sample_status_4(uVar1);
    if (iVar2 != 4) {
      _AIL_start_3D_sample_4(uVar1);
    }
  }
  return;
}

