
void FUN_004452e0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_4c;
  undefined4 local_48;
  int local_38;
  undefined2 local_34;
  int local_c;
  
  iVar1 = DAT_005b9084;
  FUN_00452180(1);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if (*(int *)(iVar1 + 0xdc) != 0) goto LAB_004453e8;
    if (DAT_00564ae4 == 0) {
      FUN_004e4b29();
      FUN_00452360(DAT_00604464,DAT_0060446c - DAT_00604464,
                   *(undefined4 *)(&DAT_005a6440 + (uint)DAT_005a632a * 4));
    }
    set_global_near_far(&DAT_00640000,0x2ee00000);
    clr_bytes(&local_4c,0x4c);
    local_c = *(int *)(iVar1 + 0x10);
    local_4c = 0x10;
    local_48 = 0x20000;
    FUN_004b19f0(&local_4c);
    if ((*(int *)(iVar1 + 0x28) != 0) &&
       (iVar2 = DAT_005b9088 >> 0x10, *(int *)(DAT_005b9084 + 0x34) < iVar2)) {
      local_34 = DAT_005b9090;
      local_38 = iVar2;
      if (0xff < iVar2) {
        local_38 = 0xff;
      }
      local_4c = 0x90;
      local_48 = 0x20000;
      local_c = *(int *)(iVar1 + 0x28);
      FUN_004b19f0(&local_4c);
    }
  }
  if (*(int *)(iVar1 + 0xdc) == 0) {
    if (DAT_005b9678 == DAT_005b9674 >> 7) {
      FUN_00468e20();
    }
    FUN_0048ab90();
    FUN_00452180(1);
    if (GLBL_spacesav[0x32] != 0) {
      uVar3 = 0;
      if (*(int *)(iVar1 + 200) != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0xcc) + 0x34);
        do {
          *piVar4 = piVar4[-10] + DAT_005b9600;
          piVar4[1] = piVar4[-9] + DAT_005b9604;
          piVar4[2] = piVar4[-8] + DAT_005b9608;
          FUN_004b19a0(piVar4 + -7);
          FUN_004b19f0(piVar4 + -7);
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 0x19;
        } while (uVar3 < *(uint *)(iVar1 + 200));
      }
    }
    DAT_00668f8c = DAT_005b9088 >> 8;
    set_global_near_far(0x2000,0x13880000);
    return;
  }
LAB_004453e8:
  set_global_near_far(0x2000,DAT_00668fb4 + 0xfa0000);
  return;
}

