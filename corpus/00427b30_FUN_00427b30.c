
void FUN_00427b30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_64 [6];
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  char *local_2c;
  char *local_28;
  undefined *local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined1 *local_c;
  undefined *local_8;
  
  iVar4 = *(int *)(param_1 + 0xa74);
  puVar3 = local_64;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_10 = 6;
  local_1c = 1;
  local_18 = 1;
  local_20 = 0xff;
  local_2c = s_TELE_BEEP_005366d4;
  local_28 = s_NOSOUND_005366cc;
  local_24 = &DAT_005a61e0;
  local_c = &LAB_00427b20;
  local_8 = &DAT_005b0c78;
  iVar2 = 0;
  puVar3 = &DAT_005b0c8c;
  do {
    FUN_0048b740(iVar2,0xd400);
    local_3c = *(int *)(param_1 + 0xa70);
    local_34 = *(int *)(param_1 + 0xa78) + local_3c;
    iVar1 = *(int *)(param_1 + 0xa68);
    local_30 = iVar4 + 0x1e;
    local_4a = *(undefined1 *)(iVar1 + 0x1c);
    local_4b = *(undefined1 *)(iVar1 + 0x20);
    local_4c = *(undefined1 *)(iVar1 + 0x24);
    local_47 = *(undefined1 *)(iVar1 + 0x28);
    local_48 = *(undefined1 *)(iVar1 + 0x2c);
    local_49 = *(undefined1 *)(iVar1 + 0x30);
    iVar1 = *(int *)(param_1 + 0xa6c);
    local_44 = *(undefined1 *)(iVar1 + 0x1c);
    local_45 = *(undefined1 *)(iVar1 + 0x20);
    local_46 = *(undefined1 *)(iVar1 + 0x24);
    local_41 = *(undefined1 *)(iVar1 + 0x28);
    local_42 = *(undefined1 *)(iVar1 + 0x2c);
    local_43 = *(undefined1 *)(iVar1 + 0x30);
    local_38 = iVar4;
    FUN_0048ca60(iVar2,local_64,0x37ff);
    FUN_0048b800(iVar2,0);
    *puVar3 = *(undefined4 *)(param_1 + 0xa64);
    puVar3 = puVar3 + 0x15;
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 0xc;
  } while ((int)puVar3 < 0x5b0f2c);
  return;
}

