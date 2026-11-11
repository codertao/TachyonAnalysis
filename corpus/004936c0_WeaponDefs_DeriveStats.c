
/* startup: +0x44=-1 -> +0x40; shield/hull/system DPS at +0x24..+0x38; +0xcc = speed*life */

void WeaponDefs_DeriveStats(void)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  
  if (g_WeaponDefs[0].id != 0x26) {
    piVar4 = &g_WeaponDefs[0].refire;
    do {
      iVar3 = (int)(0x320000 / (longlong)*piVar4);
      if (piVar4[1] == -1) {
        piVar4[1] = *piVar4;
      }
      lVar2 = (longlong)(piVar4[-0xb] * piVar4[-10] >> 8) * (longlong)iVar3;
      piVar4[-7] = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)(piVar4[-9] * piVar4[-0xb] >> 8) * (longlong)iVar3;
      piVar4[-6] = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)(piVar4[-8] * piVar4[-0xb] >> 8) * (longlong)iVar3;
      piVar4[-5] = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar3 = (int)(0x320000 / (longlong)piVar4[1]);
      lVar2 = (longlong)(piVar4[-0xb] * piVar4[-10] >> 8) * (longlong)iVar3;
      piVar4[-4] = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)(piVar4[-9] * piVar4[-0xb] >> 8) * (longlong)iVar3;
      piVar4[-3] = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)(piVar4[-8] * piVar4[-0xb] >> 8) * (longlong)iVar3;
      piVar4[-2] = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      piVar4[0x23] = piVar4[5] * piVar4[-1];
      piVar1 = piVar4 + 0x34;
      piVar4 = piVar4 + 0x44;
    } while (*piVar1 != 0x26);
  }
  return;
}

