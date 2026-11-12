
/* sweep: guess */

void Map_AddConnectionLine(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar4 = param_1;
  iVar2 = Map_FindStarbase(&DAT_005525c8);
  if (iVar2 == 0) {
    uVar5 = 0xff;
    uVar6 = 0xff;
    uVar3 = 0xff;
  }
  else {
    uVar5 = *(undefined4 *)(iVar2 + 0x20);
    uVar6 = *(undefined4 *)(iVar2 + 0x24);
    uVar3 = *(undefined4 *)(iVar2 + 0x28);
  }
  DAT_005524e0 = 1;
  Cfg_ClearScratch();
  param_1 = (int *)0x3f;
  do {
    iVar2 = *piVar4;
    if ((iVar2 != 0) && (iVar1 = piVar4[1], iVar1 != 0)) {
      MountLine_Add(*(undefined4 *)(iVar2 + 0x80),*(undefined4 *)(iVar2 + 0x84),
                    *(undefined4 *)(iVar1 + 0x80),*(undefined4 *)(iVar1 + 0x84),7,0xffffffff,uVar5,
                    uVar6,uVar3,1,1,0xf,0,0x19);
    }
    piVar4 = piVar4 + 1;
    param_1 = (int *)((int)param_1 + -1);
  } while (param_1 != (int *)0x0);
  return;
}

