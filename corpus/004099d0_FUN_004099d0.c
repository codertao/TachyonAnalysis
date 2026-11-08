
void FUN_004099d0(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  clr_bytes(&local_4c,0x4c);
  puVar5 = (undefined4 *)param_1[1];
  uVar4 = 0;
  local_4c = 0x10;
  if (*param_1 != 0) {
    do {
      if (uVar4 == 0) {
        puVar5[0x19] = 0;
        puVar5[0x1a] = 0;
        puVar5[0x1b] = 0;
      }
      else {
        puVar1 = (undefined4 *)puVar5[7];
        local_c = *puVar1;
        local_48 = puVar1[3];
        local_18 = puVar1[4];
        local_14 = puVar1[5];
        local_10 = puVar1[6];
        FUN_004b21c0(&local_4c);
        iVar3 = Pak_GetAttachPoint(local_c,puVar5[8]);
        piVar2 = *(int **)(iVar3 + 0xc);
        puVar5[0x19] = puVar1[0x19] + *piVar2;
        puVar5[0x1a] = piVar2[1] + puVar1[0x1a];
        local_c = *puVar5;
        puVar5[0x1b] = piVar2[2] + puVar1[0x1b];
        local_18 = puVar5[4];
        local_14 = puVar5[5];
        local_10 = puVar5[6];
        local_48 = puVar5[3];
        FUN_004b21c0(&local_4c);
        iVar3 = Pak_GetAttachPoint(local_c,puVar5[9]);
        piVar2 = *(int **)(iVar3 + 0xc);
        puVar5[0x19] = puVar5[0x19] - *piVar2;
        puVar5[0x1a] = puVar5[0x1a] - piVar2[1];
        puVar5[0x1b] = puVar5[0x1b] - piVar2[2];
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0x20;
    } while (uVar4 < *param_1);
  }
  return;
}

