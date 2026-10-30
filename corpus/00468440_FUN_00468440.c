
void FUN_00468440(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iVar4 = DAT_005b9084;
  FUN_00452180(1);
  FUN_004af220(0xff,0xff,0xff);
  if (((*(int *)(iVar4 + 0x10) == 0) || (*(int *)(iVar4 + 0xdc) != 0)) || (DAT_005b2c74 == 0)) {
    FUN_00452460();
    if (*(int *)(iVar4 + 0xdc) != 0) {
      if (DAT_00564ae4 != 0) {
        FUN_00445720();
      }
      goto LAB_00468582;
    }
  }
  else {
    if (DAT_00564ae4 == 0) {
      FUN_00452410();
    }
    else {
      FUN_00452460();
    }
    FUN_004b1920(&DAT_00640000,0x2ee00000);
    FUN_0048e380(&uStack_4c,0x4c);
    iStack_c = *(int *)(iVar4 + 0x10);
    uStack_4c = 0x10;
    uStack_48 = 0x20000;
    uStack_18 = *(undefined4 *)(iVar4 + 0x1c);
    uStack_14 = *(undefined4 *)(iVar4 + 0x20);
    uStack_10 = *(undefined4 *)(iVar4 + 0x24);
    uStack_32 = 0xffff;
    FUN_004b19f0(&uStack_4c);
    if ((*(int *)(iVar4 + 0x28) != 0) &&
       (iVar1 = DAT_005b9088 >> 0x10, *(int *)(DAT_005b9084 + 0x34) < iVar1)) {
      uStack_34 = DAT_005b9090;
      iStack_38 = iVar1;
      if (0xff < iVar1) {
        iStack_38 = 0xff;
      }
      uStack_4c = 0x90;
      uStack_48 = 0x20000;
      iStack_c = *(int *)(iVar4 + 0x28);
      FUN_004b19f0(&uStack_4c);
    }
    FUN_004babf0();
LAB_00468582:
    if (*(int *)(iVar4 + 0xdc) != 0) {
      iVar4 = DAT_00668fb4 + 0xfa0000;
      goto LAB_00468652;
    }
  }
  FUN_00468e20();
  FUN_0048ab90();
  FUN_004babf0();
  FUN_00452180(1);
  if (DAT_005b2c88 != 0) {
    FUN_004b23a0(0,0xffffffff,0xffffffff);
    uVar2 = 0;
    if (*(int *)(iVar4 + 200) != 0) {
      piVar3 = (int *)(*(int *)(iVar4 + 0xcc) + 0x34);
      do {
        *piVar3 = piVar3[-10] + DAT_005b9600;
        piVar3[1] = piVar3[-9] + DAT_005b9604;
        piVar3[2] = piVar3[-8] + DAT_005b9608;
        *(undefined2 *)((int)piVar3 + -2) = 0xffff;
        FUN_004b19a0(piVar3 + -7);
        FUN_004b19f0(piVar3 + -7);
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 0x19;
      } while (uVar2 < *(uint *)(iVar4 + 200));
    }
    FUN_004b23a0(1,0xffffffff,0xffffffff);
  }
  DAT_00668f8c = DAT_005b9088 >> 8;
  iVar4 = DAT_005b2b9c;
LAB_00468652:
  FUN_004b1920(0x2000,iVar4);
  FUN_004af220(*(undefined4 *)(DAT_005b9084 + 0x138),*(undefined4 *)(DAT_005b9084 + 0x13c),
               *(undefined4 *)(DAT_005b9084 + 0x140));
  FUN_004babf0();
  return;
}

