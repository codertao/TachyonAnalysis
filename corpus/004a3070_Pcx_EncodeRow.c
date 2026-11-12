
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Pcx_EncodeRow(byte *param_1,int param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  
  iVar1 = 0;
  uVar4 = 1;
  bVar3 = 1;
  bVar2 = *param_1;
  pbVar5 = param_1;
  param_1._0_1_ = bVar2;
  if (1 < _DAT_00603100) {
    do {
      pbVar5 = pbVar5 + 1;
      if (*pbVar5 == bVar2) {
        if (bVar3 == 0x3f) {
          *(undefined1 *)(iVar1 + param_2) = 0xff;
          iVar1 = Pcx_FlushRle(param_2,iVar1 + 1);
          *(byte *)(iVar1 + param_2) = (byte)param_1;
          iVar1 = Pcx_FlushRle(param_2,iVar1 + 1);
          goto LAB_004a3110;
        }
        bVar3 = bVar3 + 1;
      }
      else {
        if ((bVar3 == 1) && ((bVar2 & 0xc0) != 0xc0)) {
          *(byte *)(iVar1 + param_2) = bVar2;
          iVar1 = Pcx_FlushRle(param_2,iVar1 + 1);
        }
        else {
          *(byte *)(iVar1 + param_2) = bVar3 | 0xc0;
          iVar1 = Pcx_FlushRle(param_2,iVar1 + 1);
          *(byte *)(iVar1 + param_2) = (byte)param_1;
          iVar1 = Pcx_FlushRle(param_2,iVar1 + 1);
        }
        param_1._0_1_ = *pbVar5;
LAB_004a3110:
        bVar3 = 1;
        bVar2 = (byte)param_1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < _DAT_00603100);
  }
  *(byte *)(iVar1 + param_2) = bVar3 | 0xc0;
  iVar1 = Pcx_FlushRle(param_2,iVar1 + 1);
  *(byte *)(iVar1 + param_2) = (byte)param_1;
  if (param_3 != (code *)0x0) {
    (*param_3)(param_2,iVar1 + 1,param_4);
  }
  DAT_00603160 = DAT_00603160 + iVar1 + 1;
  return;
}

