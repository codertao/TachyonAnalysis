
void FUN_00492950(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_005657ac;
  iVar1 = str_cmp(*(undefined4 *)(DAT_005657ac + 4),s_MUTE_ALL_00559f80);
  if (iVar1 == 0) {
    uVar3 = 0x1b9;
  }
  else {
    iVar1 = str_cmp(*(undefined4 *)(iVar2 + 4),s_UNMUTE_ALL_00559f8c);
    if (iVar1 == 0) {
      uVar3 = 0x1ba;
    }
    else {
      iVar2 = str_cmp(*(undefined4 *)(iVar2 + 4),s_VOLUME_0054b060);
      if (iVar2 != 0) goto LAB_004929c0;
      if (param_1 < 0) {
        uVar3 = 0x1b5;
      }
      else {
        uVar3 = 0x1b4;
      }
    }
  }
  FUN_004910f0(uVar3);
LAB_004929c0:
  FUN_00466590(1,0xb,0,0xff);
  return;
}

