
void FUN_0047a740(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar2 = param_2;
  iVar1 = (int)param_1;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    param_1 = (undefined4 *)
              FUN_0047a560(*(undefined4 *)((int)param_1 + 0x8c),*(undefined4 *)((int)param_1 + 0x88)
                          );
    if (param_1 == (undefined4 *)0x0) {
      FUN_0048e3d0(&param_1,0x30,4,s_MAP_CNCT_NODE_005525d0,0xa105);
      if (param_1 == (undefined4 *)0x0) {
        return;
      }
      param_1[1] = *(undefined4 *)(iVar1 + 0x8c);
      *param_1 = *(undefined4 *)(iVar1 + 0x88);
      param_1[0xb] = DAT_00563690;
      DAT_00563690 = param_1;
    }
    piVar3 = param_1 + 3;
    uVar4 = 0;
    while (*piVar3 != iVar2) {
      if (*piVar3 == 0) {
        *piVar3 = iVar2;
        return;
      }
      piVar3 = piVar3 + 1;
      uVar4 = uVar4 + 1;
      if (7 < uVar4) {
        return;
      }
    }
  }
  return;
}

