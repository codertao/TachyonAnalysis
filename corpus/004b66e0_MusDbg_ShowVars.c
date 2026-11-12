
/* refine: console: variable list (MusDbg_FormatVar) */

int MusDbg_ShowVars(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = DAT_0066921c;
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  if (DAT_0066921c == 0) {
    return 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  iVar2 = (*(int *)(DAT_0066921c + 0x110) + 2) / 3;
  iVar5 = *(int *)(DAT_0066921c + 0x10c) + *(int *)(param_1 + 4);
  iVar6 = 0;
  if (0 < *(int *)(DAT_0066921c + 0x110)) {
    do {
      uVar4 = MusDbg_FormatVar(iVar5,uVar1,0x19);
      MusDbg_FindLine(uVar4,(iVar6 / iVar2) * 0x19,iVar6 % iVar2 + param_2,7);
      iVar5 = iVar5 + *(int *)(iVar3 + 0x100);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar3 + 0x110));
  }
  return iVar2;
}

