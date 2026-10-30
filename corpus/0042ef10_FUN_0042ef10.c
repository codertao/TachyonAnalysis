
void FUN_0042ef10(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int local_14;
  int local_10;
  undefined4 *local_c;
  undefined **local_4;
  
  local_4 = &PTR_PTR_00536d70;
  puVar4 = &DAT_0053cbc8;
  iVar8 = DAT_0053cbc8;
  while (puVar3 = PTR_PTR_00536d70, iVar8 != 0) {
    piVar11 = puVar4 + 8;
    puVar4 = puVar4 + 8;
    iVar8 = *piVar11;
  }
  do {
    if (puVar3 == (undefined *)0x0) {
      return;
    }
    if (*(int *)(*local_4 + 0xc) != 0) {
      FUN_0049c530(*(int *)(*local_4 + 0xc));
      *(undefined4 *)(*local_4 + 0xc) = 0;
    }
    if (*(int *)(*local_4 + 4) != 0) {
      FUN_0049c530(*(int *)(*local_4 + 4));
      *(undefined4 *)(*local_4 + 4) = 0;
    }
    if (*(int *)(*local_4 + 8) != 0) {
      FUN_0049c530(*(int *)(*local_4 + 8));
      *(undefined4 *)(*local_4 + 8) = 0;
    }
    if (*(int *)(*local_4 + 0x10) != 0) {
      FUN_0049c530(*(int *)(*local_4 + 0x10));
      *(undefined4 *)(*local_4 + 0x10) = 0;
    }
    piVar11 = *(int **)*local_4;
    iVar8 = *piVar11;
    iVar9 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = (undefined4 *)0x0;
    if (iVar8 != 0) {
      do {
        puVar5 = &DAT_0053cbc8;
        iVar2 = DAT_0053cbc8;
        while (iVar2 != 0) {
          if (iVar8 == iVar2) {
            if (puVar5[2] != -1) {
              iVar9 = iVar9 + 1;
            }
            if (puVar5[3] != 0) {
              local_c = (undefined4 *)((int)local_c + 1);
            }
            if (puVar5[1] != -1) {
              if ((puVar5[6] & 4) != 0) {
                local_14 = local_14 + 1;
              }
              if ((puVar5[6] & 8) != 0) {
                local_10 = local_10 + 1;
              }
            }
            break;
          }
          piVar7 = puVar5 + 8;
          puVar5 = puVar5 + 8;
          iVar2 = *piVar7;
        }
        iVar8 = piVar11[1];
        piVar11 = piVar11 + 1;
      } while (iVar8 != 0);
      if (iVar9 != 0) {
        uVar6 = FUN_0049c500(iVar9 * 4 + 4,4,0,s_JoyStateList_0053cb10,0xe0000);
        *(undefined4 *)(*local_4 + 0xc) = uVar6;
      }
      if (local_14 != 0) {
        uVar6 = FUN_0049c500(local_14 * 4 + 4,4,0,s_KeyPressList_0053cb00,0xe0000);
        *(undefined4 *)(*local_4 + 4) = uVar6;
      }
      if (local_10 != 0) {
        uVar6 = FUN_0049c500(local_10 * 4 + 4,4,0,s_KeyStateList_0053caf0,0xe0000);
        *(undefined4 *)(*local_4 + 8) = uVar6;
      }
      if (local_c != (undefined4 *)0x0) {
        uVar6 = FUN_0049c500((int)local_c * 4 + 4,4,0,s_MouseStateList_0053cae0,0xe0000);
        *(undefined4 *)(*local_4 + 0x10) = uVar6;
      }
    }
    puVar5 = (undefined4 *)*local_4;
    piVar11 = (int *)*puVar5;
    puVar12 = (undefined4 *)puVar5[1];
    puVar13 = (undefined4 *)puVar5[2];
    puVar10 = (undefined4 *)puVar5[3];
    local_c = (undefined4 *)puVar5[4];
    iVar8 = *piVar11;
    while (iVar8 != 0) {
      piVar7 = &DAT_0053cbc8;
      do {
        if (iVar8 == *piVar7) {
          if (piVar7[2] != -1) {
            *puVar10 = piVar7;
            puVar10 = puVar10 + 1;
          }
          if (piVar7[3] != 0) {
            *local_c = piVar7;
            local_c = local_c + 1;
          }
          if (piVar7[1] != -1) {
            if ((*(byte *)(piVar7 + 6) & 4) != 0) {
              *puVar12 = piVar7;
              puVar12 = puVar12 + 1;
            }
            if ((*(byte *)(piVar7 + 6) & 8) != 0) {
              *puVar13 = piVar7;
              puVar13 = puVar13 + 1;
            }
          }
          break;
        }
        piVar7 = piVar7 + 8;
      } while (piVar7 != (int *)0x0);
      piVar7 = piVar11 + 1;
      piVar11 = piVar11 + 1;
      iVar8 = *piVar7;
    }
    if (puVar12 != (undefined4 *)0x0) {
      *puVar12 = puVar4;
    }
    if (puVar13 != (undefined4 *)0x0) {
      *puVar13 = puVar4;
    }
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = puVar4;
    }
    if (local_c != (undefined4 *)0x0) {
      *local_c = puVar4;
    }
    ppuVar1 = local_4 + 1;
    local_4 = local_4 + 1;
    puVar3 = *ppuVar1;
  } while( true );
}

