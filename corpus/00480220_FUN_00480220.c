
void FUN_00480220(void)

{
  int *piVar1;
  POINT pt;
  LONG LVar2;
  LONG LVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 *puVar6;
  
  puVar6 = &DAT_005564f8;
  LVar2 = DAT_00603e44;
  LVar3 = DAT_00603e40;
  iVar4 = DAT_005564f8;
  if (DAT_00563d78 == 0) {
    while (DAT_00603e40 = LVar3, DAT_00603e44 = LVar2, iVar4 != 0) {
      if (((puVar6[0x11] == DAT_00563d74) &&
          (pt.y = LVar2, pt.x = LVar3, BVar5 = PtInRect((RECT *)(puVar6 + 0x12),pt), BVar5 != 0)) &&
         (((byte)DAT_00603e48 & 1) != 0)) {
        FUN_004800a0(puVar6,LVar3,LVar2);
      }
      piVar1 = puVar6 + 0x1b;
      puVar6 = puVar6 + 0x1b;
      LVar2 = DAT_00603e44;
      LVar3 = DAT_00603e40;
      iVar4 = *piVar1;
    }
  }
  return;
}

