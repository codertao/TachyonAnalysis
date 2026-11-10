
/* ASTEROID class +0x1c: placement +0x38 = 16.16 scale (radius = int(scale) * des radius) */

void Asteroid_SpawnAtLoad(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0041b790(&DAT_0058b014,0xb,param_3);
  if (iVar2 != 0) {
    FUN_0041b870(iVar2);
    *(int *)(iVar2 + 0x8c) = param_2;
    *(int *)(iVar2 + 200) = param_1;
    *(int *)(param_1 + 0x28) = iVar2;
    *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_2 + 0xac);
    *(undefined1 *)(iVar2 + 0x7e) = *(undefined1 *)(param_2 + 0xb0);
    uVar1 = *(uint *)(param_1 + 0x38);
    *(uint *)(iVar2 + 0x1c) = uVar1;
    *(undefined4 *)(iVar2 + 0x18) = 0x10;
    *(uint *)(iVar2 + 0xbc) = (uVar1 >> 0x10) * *(int *)(param_2 + 0xb8);
    *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(param_1 + 0x10);
    *(int *)(iVar2 + 0x4c) = *(int *)(param_1 + 0x14) << 0x10;
    *(int *)(iVar2 + 0x50) = *(int *)(param_1 + 0x18) << 0x10;
    *(int *)(iVar2 + 0x54) = *(int *)(param_1 + 0x1c) << 0x10;
    *(undefined4 *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x88) = 0;
    *(code **)(iVar2 + 0x80) = FUN_00407e60;
    *(undefined1 *)(iVar2 + 0xc3) = 7;
    *(undefined1 *)(iVar2 + 0xc0) = 0;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined4 *)(iVar2 + 0xb8) = 0;
    *(undefined4 *)(iVar2 + 0xc4) = 0;
    FUN_0045cda0(iVar2,*(int *)(iVar2 + 100) + 0x14);
  }
  return;
}

