
void FUN_0049da70(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  ushort *puVar8;
  uint *puVar9;
  int local_14;
  uint local_10;
  uint *local_c;
  uint local_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    FUN_004a14f0(*(int *)(param_1 + 0x10),0);
    FUN_004a1490(&local_4,4);
    FUN_004a14f0(*(undefined4 *)(param_1 + 0x10),0);
    FUN_004a1490(param_1 + 0x24,local_4);
    if (*(int *)(param_1 + 0x28) != 0) {
      puVar2 = (undefined4 *)
               FUN_0049c500(*(int *)(param_1 + 0x28) * 0x70,4,0,s_SNDTRIG_SETS_0055de9c,
                            *(undefined4 *)(param_1 + 0xc4));
      *(undefined4 **)(param_1 + 0x38) = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        for (uVar5 = (uint)(*(int *)(param_1 + 0x28) * 0x70) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)puVar2 = 0;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
        }
        FUN_004a14f0(*(undefined4 *)(param_1 + 0x2c),0);
        FUN_004a1490(&local_14,4);
        iVar6 = *(int *)(param_1 + 0x38);
        uVar5 = 0;
        if (*(int *)(param_1 + 0x28) != 0) {
          do {
            FUN_004a14f0(uVar5 * local_14 + *(int *)(param_1 + 0x2c),0);
            FUN_004a1490(iVar6,local_14);
            uVar5 = uVar5 + 1;
            iVar6 = iVar6 + 0x70;
          } while (uVar5 < *(uint *)(param_1 + 0x28));
        }
        local_8 = 0;
        if (*(int *)(param_1 + 0x28) != 0) {
          puVar7 = (uint *)(*(int *)(param_1 + 0x38) + 0x24);
          do {
            if (((*puVar7 != 0) &&
                (puVar3 = (ushort *)
                          FUN_0049c500(*puVar7 * 0x30,4,0,s_SET_LAYERS_0055de90,
                                       *(undefined4 *)(iVar1 + 0xc4)), puVar3 != (ushort *)0x0)) &&
               (local_10 = 0, *puVar7 != 0)) {
              puVar9 = puVar7 + 1;
              do {
                local_c = puVar9;
                if (7 < local_10) {
                  *puVar7 = 8;
                  break;
                }
                FUN_004a14f0(*puVar9,0);
                FUN_004a1490(puVar3,0x30);
                *puVar9 = (uint)puVar3;
                if (((*puVar3 != 0) &&
                    (piVar4 = (int *)FUN_0049c500((uint)*puVar3 * 0x1c,4,0,s_LAYER_MEMBERS_0055de80,
                                                  *(undefined4 *)(iVar1 + 0xc4)),
                    piVar4 != (int *)0x0)) && (param_1 = 0, *puVar3 != 0)) {
                  puVar8 = puVar3 + 8;
                  do {
                    if (7 < param_1) {
                      *puVar3 = 8;
                      break;
                    }
                    FUN_004a14f0(*(undefined4 *)puVar8,0);
                    FUN_004a1490(piVar4,0x1c);
                    *(int **)puVar8 = piVar4;
                    iVar6 = *(int *)(iVar1 + 0x1c) + *piVar4 * 0x34;
                    *piVar4 = iVar6;
                    if ((((puVar3[4] & 0x40) != 0) && (iVar6 != 0)) &&
                       (*(char *)(iVar6 + 0x23) == '\0')) {
                      FUN_0049d1c0(iVar6,iVar1);
                    }
                    param_1 = param_1 + 1;
                    puVar8 = puVar8 + 2;
                    piVar4 = piVar4 + 7;
                  } while (param_1 < *puVar3);
                }
                local_10 = local_10 + 1;
                puVar9 = local_c + 1;
                puVar3 = puVar3 + 0x18;
                local_c = puVar9;
              } while (local_10 < *puVar7);
            }
            local_8 = local_8 + 1;
            puVar7 = puVar7 + 0x1c;
          } while (local_8 < *(uint *)(iVar1 + 0x28));
        }
        FUN_0049d270(iVar1);
      }
    }
  }
  return;
}

