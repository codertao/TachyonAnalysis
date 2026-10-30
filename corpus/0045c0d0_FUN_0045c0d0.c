
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c0d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_18 [24];
  
  uVar4 = DAT_005b3300;
  if ((*(uint *)(param_2 + 0x34) & 1) == 0) {
    if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x144);
      goto LAB_0045c108;
    }
    uVar4 = FUN_00436fd0(*(undefined4 *)(param_2 + 4));
  }
  *(undefined4 *)(param_2 + 0x30) = uVar4;
LAB_0045c108:
  if (*(int *)(param_2 + 0x30) != 0) {
    if ((*(byte *)(param_2 + 0x34) & 4) != 0) {
      *(int *)(param_1 + 0x144) = *(int *)(param_2 + 0x30);
    }
    FUN_0045c010(param_2);
    iVar2 = *(int *)(param_2 + 0x30);
    if ((*(byte *)(param_2 + 0x34) & 8) != 0) {
      iVar3 = *(int *)(param_1 + 0x144);
      FUN_0052db6a(local_18,*(undefined4 *)(iVar3 + 0x4c),*(undefined4 *)(iVar3 + 0x50),
                   *(undefined4 *)(iVar3 + 0x54));
      FUN_0052dbcd(local_18);
      piVar1 = (int *)(iVar2 + 0x34);
      *piVar1 = *(int *)(param_2 + 0x14);
      *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(param_2 + 0x1c);
      FUN_004b24d0(piVar1,piVar1);
      *piVar1 = *piVar1 + *(int *)(iVar3 + 0x34);
      *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + *(int *)(iVar3 + 0x38);
      *(int *)(iVar2 + 0x3c) = *(int *)(iVar2 + 0x3c) + *(int *)(iVar3 + 0x3c);
      *(int *)(iVar2 + 0x4c) = *(int *)(param_2 + 8) + *(int *)(iVar3 + 0x4c);
      *(int *)(iVar2 + 0x50) = *(int *)(param_2 + 0xc) + *(int *)(iVar3 + 0x50);
      *(int *)(iVar2 + 0x54) = *(int *)(param_2 + 0x10) + *(int *)(iVar3 + 0x54);
    }
    if (*(int *)(param_2 + 0x30) == *(int *)(param_1 + 0x144)) {
      _DAT_0058f1c8 = param_2;
    }
  }
  return;
}

