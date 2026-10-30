
void FUN_004a82f0(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(int *)(param_2 + 0xc) != 0) && (param_1 < *(uint *)(param_2 + 4))) {
    uVar1 = *(undefined4 *)(*(int *)(param_2 + 8) + param_1 * 0x38);
    iVar2 = _AIL_3D_sample_status_4(uVar1);
    if (iVar2 == 4) {
      _AIL_end_3D_sample_4(uVar1);
    }
  }
  return;
}

