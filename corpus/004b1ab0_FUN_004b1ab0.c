
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1ab0(byte *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    if ((*param_1 & 0x40) == 0) {
      DAT_00666afc = 0;
    }
    else {
      DAT_00666afc = *(int *)(param_1 + 0x10) - DAT_00666b00;
      if (DAT_00666afc < -0xff) {
        DAT_00666afc = -0xff;
      }
    }
    if ((*param_1 & 0x80) == 0) {
      DAT_00668f38 = 0xff;
    }
    else {
      DAT_00668f38 = *(undefined4 *)(param_1 + 0x14);
    }
    if ((*param_1 & 0x10) == 0) {
      DAT_00666b04 = 0x10000;
    }
    else {
      DAT_00666b04 = *(undefined4 *)(param_1 + 4);
    }
    _DAT_00668fe0 = (uint)*(ushort *)(param_1 + 0x18);
    DAT_006691e4 = iVar1;
    if (DAT_00669210 != 0) {
      param_1[0x1a] = 0xff;
      param_1[0x1b] = 0xff;
    }
    FUN_004b50d0(param_1,param_2);
    if (DAT_0066920c != 0) {
      thunk_FUN_004babf0();
      return;
    }
  }
  return;
}

