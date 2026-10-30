
void __thiscall FUN_00421e40(undefined4 param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  bVar2 = FUN_0048e350(param_1);
  if ((bVar2 & 0xf) < 6) {
    *(undefined4 *)(param_2 + 0x104) = 0;
    return;
  }
  uVar3 = FUN_0048e350();
  if ((uVar3 & 1) == 0) {
    *(undefined4 *)(param_2 + 0x104) = DAT_005b216c;
  }
  else {
    *(undefined4 *)(param_2 + 0x104) = DAT_005b2160;
  }
  iVar4 = FUN_0048e350();
  uVar3 = iVar4 * 4 - 0x40000U & 0x40000;
  *(uint *)(param_2 + 0x108) = uVar3;
  *(uint *)(param_2 + 0x124) = uVar3 >> 4;
  FUN_0048ecf0(*(undefined4 *)(param_2 + 0x104),(int *)(param_2 + 0x118));
  piVar1 = (int *)(param_2 + 0x10c);
  *piVar1 = *(int *)(param_2 + 0x118);
  *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(param_2 + 0x114) = *(undefined4 *)(param_2 + 0x120);
  FUN_004e04ba(piVar1);
  *(int *)(param_2 + 0x110) = *(int *)(param_2 + 0x110) >> 2;
  *(int *)(param_2 + 0x114) = *(int *)(param_2 + 0x114) >> 2;
  *piVar1 = *piVar1 >> 2;
  return;
}

