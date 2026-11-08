
void FUN_004034e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar3 = *(int *)(param_1 + 0x8c);
  iVar1 = iVar3 + 0xd0;
  iVar2 = param_1 + 0x10c;
  iVar5 = Shield_GetMax(iVar2,iVar1);
  if (*(ushort *)(param_1 + 0x310) < 2) {
    if (*(int *)(iVar3 + 0xe0) * 4 < *(int *)(param_1 + 0x114)) goto LAB_0040357e;
LAB_0040356d:
    uVar6 = 0x800;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x114);
    if (iVar4 <= *(int *)(iVar3 + 0xe0) * 4) goto LAB_0040356d;
    if (iVar5 >> 2 < iVar4) {
      if (iVar5 >> 1 < iVar4) {
        if (*(int *)(param_1 + 0x118) == 0x10000) goto LAB_0040357e;
        uVar6 = 0x10000;
      }
      else {
        uVar6 = 0x18000;
      }
    }
    else {
      uVar6 = 0x20000;
    }
  }
  FUN_00455f40(iVar2,uVar6,0,iVar1);
LAB_0040357e:
  FUN_00455e90(iVar2,iVar1);
  return;
}

