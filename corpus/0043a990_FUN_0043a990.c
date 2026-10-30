
void FUN_0043a990(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  
  iVar1 = Ui_FindWindowDef(param_1,param_2);
  iVar3 = *(int *)(param_1 + 0x14);
  pcVar5 = *(char **)(param_1 + 0x18);
  uVar4 = 0;
  if (iVar1 != 0) {
    FUN_00437bf0(iVar1 + 0xf0,2);
    *(undefined4 *)(iVar1 + 0x10c) = 0;
    if (*(int *)(iVar1 + 0xe8) != 0) {
      FUN_00439f70(param_1,*(int *)(iVar1 + 0xe8));
      *(undefined4 *)(iVar1 + 0xe8) = 0;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      do {
        if (*pcVar5 == '\0') break;
        iVar2 = FUN_004c67c0(pcVar5 + 0x40,iVar1);
        if (iVar2 == 0) {
          if (*(int *)(pcVar5 + 0x1e8) != 0) {
            FUN_00439f70(param_1,*(int *)(pcVar5 + 0x1e8));
            pcVar5[0x1e8] = '\0';
            pcVar5[0x1e9] = '\0';
            pcVar5[0x1ea] = '\0';
            pcVar5[0x1eb] = '\0';
          }
          if ((*(int *)(pcVar5 + 0x1f8) != 8) && (*(int *)(pcVar5 + 0x1f8) != 0x10)) {
            FUN_0043ce50(param_1,pcVar5,1);
            iVar2 = FUN_0043e3d0(param_1,pcVar5);
            if (iVar2 != 0) {
              *(undefined4 *)(iVar2 + 0x120) = *(undefined4 *)(pcVar5 + 0x1f8);
            }
          }
        }
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar5 + 0x23c;
      } while (uVar4 < *(uint *)(param_1 + 0x4c));
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      piVar6 = (int *)(iVar3 + 0xd4);
      do {
        iVar3 = FUN_004c67c0(piVar6 + -0x25,iVar1);
        if ((iVar3 == 0) && (*piVar6 != 0)) {
          FUN_00439f70(param_1,*piVar6);
          *piVar6 = 0;
        }
        uVar4 = uVar4 + 1;
        piVar6 = piVar6 + 0x4c;
      } while (uVar4 < *(uint *)(param_1 + 0x48));
    }
  }
  return;
}

