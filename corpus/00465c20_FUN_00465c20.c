
void FUN_00465c20(int *param_1)

{
  int *piVar1;
  int iVar2;
  POINT pt;
  LONG LVar3;
  LONG LVar4;
  BOOL BVar5;
  int *piVar6;
  RECT local_10;
  
  LVar4 = DAT_00603e44;
  LVar3 = DAT_00603e40;
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    piVar6 = param_1 + 1;
    do {
      if (0 < piVar6[0xd]) {
        iVar2 = *piVar6;
        local_10.left = piVar6[6] + *(int *)(iVar2 + 0x44);
        local_10.top = piVar6[7] + *(int *)(iVar2 + 0x48);
        local_10.right = piVar6[8] + *(int *)(iVar2 + 0x44);
        local_10.bottom = piVar6[9] + *(int *)(iVar2 + 0x48);
        pt.y = LVar4;
        pt.x = LVar3;
        BVar5 = PtInRect(&local_10,pt);
        if ((BVar5 == 0) && (piVar6[2] != 2)) {
          piVar6[2] = 0;
        }
        else if (((byte)DAT_00603e48 & 1) == 0) {
          DAT_00563578 = 0;
          piVar6[2] = 1;
        }
        else {
          FUN_00465b30(param_1 + piVar6[-1] * 0x10,LVar3,LVar4,DAT_00563578);
          if ((DAT_00563578 != 0) && (piVar6[2] != 2)) {
            piVar6[2] = 2;
          }
          DAT_00563578 = 1;
        }
      }
      piVar1 = piVar6 + 0xf;
      piVar6 = piVar6 + 0x10;
    } while (*piVar1 != -1);
  }
  return;
}

