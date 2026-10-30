
void FUN_0042fca0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  ushort local_8;
  ushort uStack_6;
  
  uVar2 = FUN_0049ec30();
  local_8 = (ushort)uVar2;
  uStack_6 = (ushort)(uVar2 >> 0x10);
  while (uVar2 != 0) {
    iVar7 = param_1;
    if (param_1 != 0) {
      do {
        piVar4 = *(int **)(iVar7 + 4);
        if (piVar4 != (int *)0x0) {
          for (piVar1 = (int *)*piVar4; (piVar1 != (int *)0x0 && (*piVar1 != 0));
              piVar1 = (int *)*piVar1) {
            if ((*(byte *)(piVar1 + 6) & 1) == 0) {
              uVar5 = uVar2 & 0xff;
            }
            else {
              uVar5 = (uVar2 & 0xff) + (uint)uStack_6;
            }
            if (uVar5 == piVar1[1]) {
              uVar5 = uVar5 & 0x1ff;
              if ((&DAT_005aefdc)[uVar5] == 0) {
                (&DAT_005aefdc)[uVar5] = DAT_005b3304;
                (&DAT_005af7dc)[uVar5] = *piVar4;
                uVar2 = CONCAT22(uStack_6,local_8);
              }
              if ((&DAT_005af7dc)[uVar5] == *piVar4) {
                (**(code **)(*piVar4 + 0x10))
                          (*(undefined4 *)(*piVar4 + 0x14),1,DAT_005b3304 - (&DAT_005aefdc)[uVar5]);
                goto LAB_0042fdab;
              }
            }
            piVar1 = piVar4 + 1;
            piVar4 = piVar4 + 1;
          }
        }
        if (*(code **)(iVar7 + 0x18) != (code *)0x0) {
          iVar3 = (**(code **)(iVar7 + 0x18))(&local_8);
          uVar2 = CONCAT22(uStack_6,local_8);
          if (iVar3 != 0) {
            (&DAT_005aefdc)[local_8 & 0xff] = DAT_005b3304;
            (&DAT_005af7dc)[local_8 & 0xff] = 1;
            break;
          }
        }
        if ((*(int *)(iVar7 + 0x1c) != 0) || (iVar7 = *(int *)(iVar7 + 0x14), iVar7 == 0)) break;
      } while( true );
    }
LAB_0042fdab:
    uVar2 = FUN_0049ec30();
    local_8 = (ushort)uVar2;
    uStack_6 = (ushort)(uVar2 >> 0x10);
  }
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x14)) {
    piVar4 = *(int **)(param_1 + 8);
    if (piVar4 != (int *)0x0) {
      for (piVar1 = (int *)*piVar4; (piVar1 != (int *)0x0 && (*piVar1 != 0));
          piVar1 = (int *)*piVar1) {
        uVar2 = piVar1[1] & 0x1ff;
        if ((&DAT_00603a20)[piVar1[1]] == '\0') {
          if (((*(byte *)(piVar1 + 6) & 2) != 0) && ((int *)(&DAT_005af7dc)[uVar2] == piVar1)) {
            (*(code *)piVar1[4])(piVar1[5],0,DAT_005b3304 - (&DAT_005aefdc)[uVar2]);
            (&DAT_005aefdc)[uVar2] = 0;
            (&DAT_005af7dc)[uVar2] = 0;
          }
        }
        else {
          if ((&DAT_005aefdc)[uVar2] == 0) {
            (&DAT_005aefdc)[uVar2] = DAT_005b3304;
          }
          iVar7 = *piVar4;
          if ((&DAT_005af7dc)[uVar2] == iVar7) {
            (**(code **)(iVar7 + 0x10))
                      (*(undefined4 *)(iVar7 + 0x14),1,DAT_005b3304 - (&DAT_005aefdc)[uVar2]);
          }
        }
        piVar1 = piVar4 + 1;
        piVar4 = piVar4 + 1;
      }
    }
    if (*(int *)(param_1 + 0x1c) != 0) break;
  }
  piVar4 = &DAT_005aefdc;
  pcVar6 = &DAT_00603a20;
  iVar7 = 0x200;
  do {
    if ((*pcVar6 == '\0') && ((*piVar4 != 0 || (piVar4[0x200] != 0)))) {
      *piVar4 = 0;
      piVar4[0x200] = 0;
    }
    piVar4 = piVar4 + 1;
    pcVar6 = pcVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}

