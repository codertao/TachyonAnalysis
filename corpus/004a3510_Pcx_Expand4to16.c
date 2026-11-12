
/* sweep: guess */

void Pcx_Expand4to16(byte *param_1,undefined2 *param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  Pal_Build16Lut();
  iVar6 = param_3 >> 1;
  do {
    while( true ) {
      bVar1 = *param_1;
      if (0xbf < bVar1) break;
      *param_2 = *(undefined2 *)(&DAT_00602800 + (uint)bVar1 * 2);
      param_2 = param_2 + 1;
      iVar7 = iVar6 + -1;
      bVar3 = iVar6 < 1;
      iVar6 = iVar7;
      param_1 = param_1 + 1;
      if (iVar7 == 0 || bVar3) {
        return;
      }
    }
    uVar2 = *(undefined2 *)(&DAT_00602800 + (uint)param_1[1] * 2);
    uVar4 = (uint)(byte)(bVar1 + 0x40);
    do {
      *param_2 = uVar2;
      param_2 = param_2 + 1;
      iVar7 = iVar6 + -1;
      if (iVar7 == 0 || iVar6 < 1) {
        return;
      }
      uVar5 = uVar4 - 1;
      bVar3 = 0 < (int)uVar4;
      uVar4 = uVar5;
      iVar6 = iVar7;
    } while (uVar5 != 0 && bVar3);
    param_1 = param_1 + 2;
  } while (0 < iVar7);
  return;
}

