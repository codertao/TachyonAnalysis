
/* rebuild/refresh a window by name [tentative] */

void Ui_RefreshWindow(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = Ui_FindWindowDef(param_1,param_2);
  if (iVar2 != 0) {
    if (param_3 == (int *)0x0) {
      *(int *)(iVar2 + 0xf4) = *(int *)(iVar2 + 0x44);
      *(int *)(iVar2 + 0xf8) = *(int *)(iVar2 + 0x48);
      *(int *)(iVar2 + 0xfc) = *(int *)(iVar2 + 0x4c) + *(int *)(iVar2 + 0x44);
      *(int *)(iVar2 + 0x100) = *(int *)(iVar2 + 0x50) + *(int *)(iVar2 + 0x48);
    }
    else {
      piVar4 = (int *)(iVar2 + 0xf4);
      if ((*(uint *)(iVar2 + 0xf0) & 0x200) == 0) {
        *piVar4 = *param_3;
        *(int *)(iVar2 + 0xf8) = param_3[1];
        *(int *)(iVar2 + 0xfc) = param_3[2];
        *(int *)(iVar2 + 0x100) = param_3[3];
      }
      else {
        FUN_0043b0a0(param_3,piVar4,&local_20);
        *piVar4 = local_20;
        *(undefined4 *)(iVar2 + 0xf8) = local_1c;
        *(undefined4 *)(iVar2 + 0xfc) = local_18;
        *(undefined4 *)(iVar2 + 0x100) = local_14;
      }
    }
    piVar4 = (int *)(iVar2 + 0xf4);
    *(uint *)(iVar2 + 0xf0) = *(uint *)(iVar2 + 0xf0) | 0x200;
    if (*piVar4 < 0) {
      *piVar4 = 0;
    }
    if (*(int *)(iVar2 + 0xf8) < 0) {
      *(undefined4 *)(iVar2 + 0xf8) = 0;
    }
    if (0x27f < *(int *)(iVar2 + 0xfc)) {
      *(undefined4 *)(iVar2 + 0xfc) = 0x27f;
    }
    if (0x1df < *(int *)(iVar2 + 0x100)) {
      *(undefined4 *)(iVar2 + 0x100) = 0x1df;
    }
    if (param_4 == 0) {
      local_20 = *piVar4;
      local_1c = *(undefined4 *)(iVar2 + 0xf8);
      local_18 = *(undefined4 *)(iVar2 + 0xfc);
      local_14 = *(undefined4 *)(iVar2 + 0x100);
      FUN_0043e470(param_1,iVar2,&local_20);
      FUN_0043cb00(param_1,iVar2,&local_20);
      FUN_0043f920(param_1,iVar2,&local_20);
      uVar1 = *(uint *)(iVar2 + 0x40);
joined_r0x0043b25f:
      uVar1 = uVar1 + 1;
      if (uVar1 < 5) {
        pcVar3 = *(char **)(param_1 + 0xc);
        uVar5 = 0;
        if (*(int *)(param_1 + 0x40) != 0) {
          do {
            if (*pcVar3 == '\0') break;
            if ((uVar1 <= *(uint *)(pcVar3 + 0x40)) && ((pcVar3[0xf0] & 2U) != 0)) {
              local_10 = *(int *)(pcVar3 + 0x44);
              local_c = *(int *)(pcVar3 + 0x48);
              local_8 = *(int *)(pcVar3 + 0x4c) + local_10;
              local_4 = *(int *)(pcVar3 + 0x50) + local_c;
              iVar2 = FUN_0043af70(&local_10,&local_20);
              if (iVar2 != 0) {
                Ui_RefreshWindow(param_1,pcVar3,&local_20,0);
              }
            }
            uVar5 = uVar5 + 1;
            pcVar3 = pcVar3 + 0x114;
          } while (uVar5 < *(uint *)(param_1 + 0x40));
        }
        goto joined_r0x0043b25f;
      }
    }
  }
  return;
}

