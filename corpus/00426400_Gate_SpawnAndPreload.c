
/* spawn gate entity; preloads linked sector .spx via Spx_LoadSector(def+0x38) */

void Gate_SpawnAndPreload(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DcbPool_Alloc(&DAT_0058af9c,10,param_3);
  if (iVar1 != 0) {
    FUN_0041b850(iVar1);
    if (DAT_0058b06c == 0) {
      DAT_0058b06c = *(int *)(iVar1 + 0x78);
    }
    *(int *)(iVar1 + 0x8c) = param_2;
    *(undefined4 *)(iVar1 + 0xe4) = 0;
    *(int *)(iVar1 + 0xf0) = param_1;
    *(int *)(param_1 + 0x28) = iVar1;
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_2 + 0x11c);
    *(undefined4 *)(iVar1 + 0x1c) = 0x10000;
    *(undefined1 *)(iVar1 + 0x7e) = *(undefined1 *)(param_2 + 0x120);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x10);
    *(int *)(iVar1 + 0x4c) = *(int *)(param_1 + 0x14) << 0x10;
    *(int *)(iVar1 + 0x50) = *(int *)(param_1 + 0x18) << 0x10;
    *(int *)(iVar1 + 0x54) = *(int *)(param_1 + 0x1c) << 0x10;
    if ((*(uint *)(param_1 + 0x24) & 0x200) == 0) {
      *(undefined4 *)(iVar1 + 0x68) = 0;
    }
    else {
      *(undefined1 **)(iVar1 + 0x68) = &LAB_004263e0;
    }
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x88) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined1 **)(iVar1 + 0x80) = &LAB_00460f30;
    *(undefined1 *)(iVar1 + 0xc2) = 0;
    *(undefined1 *)(iVar1 + 0xc3) = 3;
    *(undefined1 *)(iVar1 + 0xc0) = 0x44;
    if (*(int *)(param_1 + 0x58) == 0) {
      *(undefined1 *)(iVar1 + 0xc0) = 0x45;
    }
    *(undefined4 *)(iVar1 + 0xb8) = 0;
    *(undefined4 *)(iVar1 + 0xbc) = 0;
    FUN_0045cbf0(iVar1,*(int *)(iVar1 + 100) + 0x14);
    if ((*(char *)(param_1 + 0x38) == '\0') || (*(int *)(param_1 + 0x58) != 0)) {
      FUN_00426310(iVar1,param_1);
      *(undefined4 *)(iVar1 + 0x110) = 0xffffffff;
    }
    else {
      iVar2 = Spx_LoadSector(param_1 + 0x38,0);
      if (iVar2 != 0) {
        FUN_004262b0(iVar1,param_1,iVar2);
        *(undefined4 *)(iVar1 + 0x110) = *(undefined4 *)(iVar2 + 0x30);
      }
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      *(uint *)(iVar1 + 0xe4) = *(uint *)(iVar1 + 0xe4) | 2;
    }
    Gate_UpdateCollideState(iVar1);
  }
  return;
}

