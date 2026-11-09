
undefined4 __cdecl
FUN_10001530(int *param_1,undefined4 *param_2,byte param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int local_4;
  
  puVar1 = (undefined4 *)FUN_100014f0(&local_4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar6 = puVar1;
    for (iVar3 = 0x2f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puVar6 = param_2;
    puVar2 = puVar1;
    for (iVar3 = 0x26; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + 1;
    }
    if (puVar1[0x21] == 0) {
      puVar1[0x20] = 0;
    }
    else {
      puVar2 = malloc(puVar1[0x21]);
      uVar5 = puVar1[0x21];
      puVar1[0x20] = puVar2;
      puVar6 = (undefined4 *)param_2[0x20];
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
    }
    puVar1[0x27] = 1;
    puVar1[0x26] = param_4;
    puVar1[0x28] = local_4;
    puVar1[0x29] = param_5;
    if (param_5 != 0) {
      *(undefined4 *)(param_5 + 0xc) = 1;
      *(undefined4 *)(param_5 + 0x10) = param_4;
    }
    *param_1 = local_4;
    if ((param_3 & 1) != 0) {
      DAT_10019b00 = puVar1;
    }
    if ((*(char *)(puVar1 + 0x22) == '\0') && (iVar3 = puVar1[0x29], iVar3 != 0)) {
      sprintf((char *)(puVar1 + 0x22),s__08x__04x_10007014,*(undefined4 *)(iVar3 + 4),
              *(undefined4 *)(iVar3 + 0x14));
    }
    return 0;
  }
  return 5;
}

