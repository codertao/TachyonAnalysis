
/* replica +0x68: SP copies linked server DCB (+0xf4) exactly; MP dead-reckons snapshot (1/16 ease)
    */

void TachCli_ReplicaThink(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xf4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x108) + *(int *)(param_1 + 0xa0);
    iVar2 = *(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0xa4);
    iVar3 = *(int *)(param_1 + 0x110) + *(int *)(param_1 + 0xa8);
    *(int *)(param_1 + 0x108) = iVar1;
    *(int *)(param_1 + 0x110) = iVar3;
    *(int *)(param_1 + 0x34) = (iVar1 - *(int *)(param_1 + 0x34) >> 4) + *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x38) = (iVar2 - *(int *)(param_1 + 0x38) >> 4) + *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x3c) = (iVar3 - *(int *)(param_1 + 0x3c) >> 4) + *(int *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x4c) =
         ((*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0x4c)) * 0x80 >> 0xc) +
         *(int *)(param_1 + 0x4c) & 0x1ffffff;
    *(int *)(param_1 + 0x10c) = iVar2;
    *(uint *)(param_1 + 0x50) =
         ((*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0x50)) * 0x80 >> 0xc) +
         *(int *)(param_1 + 0x50) & 0x1ffffff;
    *(uint *)(param_1 + 0x54) =
         ((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54)) * 0x80 >> 0xc) +
         *(int *)(param_1 + 0x54) & 0x1ffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar1 + 0xac);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(iVar1 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar1 + 0xb4);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar1 + 0xa4);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar1 + 0xa8);
  }
  if (*(int *)(param_1 + 200) != 0) {
    Ent_UpdateSound3D(param_1);
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  iVar2 = *(int *)(param_1 + 0xac) * 0x80 + iVar1 * -0x80 >> 7;
  if (0x800 < iVar2) {
    *(int *)(param_1 + 0xf8) = iVar1 + 0x800;
    return;
  }
  if (iVar2 < -0x800) {
    iVar2 = -0x800;
  }
  *(int *)(param_1 + 0xf8) = iVar1 + iVar2;
  return;
}

