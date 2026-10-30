
int FUN_00409c40(uint *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar6 = 0;
  if (param_1 != (uint *)0x0) {
    FUN_0048e380(&local_4c,0x4c);
    puVar2 = (undefined4 *)param_1[1];
    local_c = *puVar2;
    local_4c = 0x10;
    local_54 = 0;
    puVar7 = puVar2;
    if (*param_1 != 0) {
      do {
        if (puVar7 == puVar2) {
          iVar6 = FUN_004b2370(*puVar7,puVar7[3]);
          puVar7[0x13] = 0;
          puVar7[0x14] = 0;
          puVar7[0x15] = 0;
        }
        else {
          puVar3 = (undefined4 *)puVar7[7];
          local_c = *puVar3;
          local_48 = puVar3[3];
          local_18 = puVar3[4];
          local_14 = puVar3[5];
          local_10 = puVar3[6];
          FUN_004b21c0(&local_4c);
          iVar5 = FUN_004b1db0(local_c,puVar7[8]);
          piVar4 = *(int **)(iVar5 + 0xc);
          puVar7[0x13] = puVar3[0x13] + *piVar4;
          puVar7[0x14] = piVar4[1] + puVar3[0x14];
          piVar1 = puVar7 + 0x13;
          local_c = *puVar7;
          puVar7[0x15] = piVar4[2] + puVar3[0x15];
          local_18 = puVar7[4];
          local_14 = puVar7[5];
          local_10 = puVar7[6];
          local_48 = puVar7[3];
          FUN_004b21c0(&local_4c);
          iVar5 = FUN_004b1db0(local_c,puVar7[9]);
          piVar4 = *(int **)(iVar5 + 0xc);
          *piVar1 = *piVar1 - *piVar4;
          puVar7[0x14] = puVar7[0x14] - piVar4[1];
          puVar7[0x15] = puVar7[0x15] - piVar4[2];
          iVar5 = FUN_004b2210(local_c,piVar1,puVar7[3]);
          if (iVar6 <= iVar5) {
            iVar6 = FUN_004b2210(local_c,piVar1,puVar7[3]);
          }
        }
        local_54 = local_54 + 1;
        puVar7 = puVar7 + 0x20;
      } while (local_54 < *param_1);
    }
    return iVar6;
  }
  return 0;
}

