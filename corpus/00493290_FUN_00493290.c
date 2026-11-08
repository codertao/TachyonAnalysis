
void FUN_00493290(uint *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0xffffffff;
  uVar7 = 0xffffffff;
  uVar5 = 0xffffffff;
  if (g_WeaponDefs != 0x1c) {
    piVar4 = &DAT_0055a574;
    do {
      iVar2 = *piVar4;
      uVar3 = piVar4[2] * iVar2 >> 8;
      if ((uVar3 != 0) && (uVar3 < uVar6)) {
        uVar6 = uVar3;
      }
      uVar3 = iVar2 * piVar4[1] >> 8;
      if ((uVar3 != 0) && (uVar3 < uVar7)) {
        uVar7 = uVar3;
      }
      uVar3 = piVar4[3] * iVar2 >> 8;
      if ((uVar3 != 0) && (uVar3 < uVar5)) {
        uVar5 = uVar3;
      }
      piVar1 = piVar4 + 0x3f;
      piVar4 = piVar4 + 0x44;
    } while (*piVar1 != 0x1c);
  }
  if (param_1 != (uint *)0x0) {
    *param_1 = uVar6;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar7;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar5;
  }
  return;
}

