
int FUN_0041aa30(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0xdc) != 0)) {
    iVar2 = DcbPool_Alloc(&DAT_0058b03c,0xb,DAT_005b29cc);
    if (iVar2 != 0) {
      FUN_0041b850(iVar2);
      uVar3 = FUN_0048e350();
      *(undefined4 *)(iVar2 + 0xd8) = 3;
      *(undefined2 *)(iVar2 + 0x74) = 1;
      *(undefined4 *)(iVar2 + 0x58) = DAT_005b293c;
      *(undefined1 *)(iVar2 + 0x7e) = *(undefined1 *)(DAT_005b29c8 + 0x100);
      *(undefined4 *)(iVar2 + 0x68) = 0;
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x88) = 0;
      *(undefined1 **)(iVar2 + 0x80) = &LAB_0041a8d0;
      *(undefined4 *)(iVar2 + 0x18) = 0x10;
      *(undefined4 *)(iVar2 + 0x1c) = 0x10000;
      *(undefined4 *)(iVar2 + 0x28) = 0x18;
      *(undefined4 *)(iVar2 + 0xb8) = 0x10000;
      *(int *)(iVar2 + 0x8c) = DAT_005b29c8;
      FUN_004b21c0(param_1 + 0x18);
      iVar4 = FUN_004b1db0(*(undefined4 *)(param_1 + 0xdc),uVar3 & 3);
      piVar1 = *(int **)(iVar4 + 0xc);
      *(int *)(iVar2 + 0x34) = *(int *)(param_1 + 0x34) + *piVar1;
      *(int *)(iVar2 + 0x38) = piVar1[1] + *(int *)(param_1 + 0x38);
      *(int *)(iVar2 + 0x3c) = piVar1[2] + *(int *)(param_1 + 0x3c);
      *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      local_4 = (uVar3 & 3) * -0x800000 + 0x800000;
      local_c = 0;
      local_8 = 0;
      Vec_RotateByOrientation(&local_c,(undefined4 *)(iVar2 + 0x4c));
      FUN_004b21c0((undefined4 *)(iVar2 + 0x18));
      iVar4 = FUN_004b1db0(DAT_005b293c,0);
      piVar1 = *(int **)(iVar4 + 0xc);
      *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) - *piVar1;
      *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) - piVar1[1];
      *(int *)(iVar2 + 0x3c) = *(int *)(iVar2 + 0x3c) - piVar1[2];
      *(undefined1 *)(iVar2 + 0xc3) = 3;
      *(undefined1 *)(iVar2 + 0xc0) = 4;
      FUN_0045cbf0(iVar2,*(int *)(iVar2 + 100) + 0x14);
      return iVar2;
    }
  }
  return 0;
}

