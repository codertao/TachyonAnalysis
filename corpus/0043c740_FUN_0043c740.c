
void FUN_0043c740(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  
  iVar1 = param_1;
  pcVar5 = *(char **)(param_1 + 0x18);
  if (DAT_00562bd0 == 0) {
    param_1 = FUN_0049ec30();
    if ((param_1 != 0) && (iVar2 = FUN_00437ac0(param_1 & 0xff), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 4) = 1;
    }
  }
  else {
    param_1 = 0;
  }
  uVar4 = 0;
  if (*(int *)(iVar1 + 0x4c) != 0) {
    do {
      if (*pcVar5 == '\0') {
        return;
      }
      if (*(int *)(pcVar5 + 0x1e0) == 0) {
        uVar3 = Ui_FindWindowDef(iVar1,pcVar5 + 0x40);
        *(undefined4 *)(pcVar5 + 0x1e0) = uVar3;
      }
      iVar2 = *(int *)(pcVar5 + 0x1e0);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xf0) & 2) != 0)) {
        FUN_0043c220(iVar1,pcVar5,*(undefined4 *)(iVar2 + 0x44),*(undefined4 *)(iVar2 + 0x48),
                     param_1);
        if ((*(int *)(pcVar5 + 0x1fc) != *(int *)(pcVar5 + 0x1f8)) ||
           ((*(byte *)(*(int *)(pcVar5 + 0x1e0) + 0xf0) & 4) != 0)) {
          *(uint *)(pcVar5 + 0x204) = *(uint *)(pcVar5 + 0x204) | 0x400;
        }
        *(undefined4 *)(pcVar5 + 0x1fc) = *(undefined4 *)(pcVar5 + 0x1f8);
        if ((*(int *)(pcVar5 + 0x1e4) == 0) && (pcVar5[0x160] != '\0')) {
          uVar3 = FUN_0043e3d0(iVar1,pcVar5);
          *(undefined4 *)(pcVar5 + 0x1e4) = uVar3;
        }
        iVar2 = *(int *)(pcVar5 + 0x1e4);
        if (iVar2 != 0) {
          if ((*(uint *)(pcVar5 + 0x204) & 0x80000) == 0) {
            if ((*(uint *)(iVar2 + 0x11c) & 0x10000) != 0) {
              FUN_00437bf0(iVar2 + 0x11c,0x10000);
            }
          }
          else {
            FUN_00437c10(iVar2 + 0x11c,0x10000);
          }
          if ((*(uint *)(pcVar5 + 0x204) & 0x400) != 0) {
            FUN_00437c10(*(int *)(pcVar5 + 0x1e4) + 0x11c,4);
          }
          *(undefined4 *)(*(int *)(pcVar5 + 0x1e4) + 0x120) = *(undefined4 *)(pcVar5 + 0x1f8);
          *(char **)(*(int *)(pcVar5 + 0x1e4) + 0x130) = pcVar5;
        }
        iVar2 = *(int *)(pcVar5 + 0x238);
        if (((iVar2 != 0) && ((*(uint *)(pcVar5 + 0x204) & 0x400) != 0)) &&
           ((*(uint *)(iVar2 + 0x204) & 0x800000) == 0)) {
          if ((*(int *)(pcVar5 + 0x1f8) != 4) && (*(int *)(iVar2 + 0x1f8) == 1)) {
            *(int *)(iVar2 + 0x1f8) = *(int *)(pcVar5 + 0x1f8);
          }
          *(uint *)(*(int *)(pcVar5 + 0x238) + 0x204) =
               *(uint *)(*(int *)(pcVar5 + 0x238) + 0x204) | 0x400;
          *(uint *)(*(int *)(pcVar5 + 0x238) + 0x204) =
               *(uint *)(*(int *)(pcVar5 + 0x238) + 0x204) | 0x800000;
        }
        switch(*(undefined4 *)(pcVar5 + 0x1f8)) {
        case 1:
          pcVar5[0xc4] = '\0';
          pcVar5[0xc5] = '\0';
          pcVar5[0xc6] = '\0';
          pcVar5[199] = '\0';
          break;
        case 2:
          pcVar5[0xc4] = '\x01';
          pcVar5[0xc5] = '\0';
          pcVar5[0xc6] = '\0';
          pcVar5[199] = '\0';
          pcVar5[0x1f8] = '\x01';
          pcVar5[0x1f9] = '\0';
          pcVar5[0x1fa] = '\0';
          pcVar5[0x1fb] = '\0';
          break;
        case 4:
          pcVar5[0x200] = '\x01';
          pcVar5[0x201] = '\0';
          pcVar5[0x202] = '\0';
          pcVar5[0x203] = '\0';
          if ((*(uint *)(pcVar5 + 0x204) & 0x2000) != 0) {
            FUN_0043cfa0(iVar1,uVar4,*(undefined4 *)(pcVar5 + 0xd0),1,1);
          }
          iVar2 = *(int *)(pcVar5 + 0xdc);
          pcVar5[0xc4] = '\x02';
          pcVar5[0xc5] = '\0';
          pcVar5[0xc6] = '\0';
          pcVar5[199] = '\0';
          *(int *)(pcVar5 + 0xdc) = iVar2 + -1;
          if (iVar2 + -1 < 0) {
            pcVar5[0xdc] = '\0';
            pcVar5[0xdd] = '\0';
            pcVar5[0xde] = '\0';
            pcVar5[0xdf] = '\0';
          }
          if (*(int *)(pcVar5 + 0xdc) == 0) {
            iVar2 = *(int *)(pcVar5 + 0x1ec);
            if ((iVar2 != 0) && (*(code **)(iVar2 + 0x40) != (code *)0x0)) {
              (**(code **)(iVar2 + 0x40))(*(undefined4 *)(iVar2 + 0x44));
            }
            if ((pcVar5[0x204] & 4U) == 0) {
              *(undefined4 *)(pcVar5 + 0x1f8) = *(undefined4 *)(pcVar5 + 0x200);
            }
            else {
              pcVar5[0x1f8] = '\x10';
              pcVar5[0x1f9] = '\0';
              pcVar5[0x1fa] = '\0';
              pcVar5[0x1fb] = '\0';
            }
          }
          break;
        case 8:
          pcVar5[0xc4] = '\x03';
          pcVar5[0xc5] = '\0';
          pcVar5[0xc6] = '\0';
          pcVar5[199] = '\0';
          break;
        case 0x10:
          pcVar5[0xc4] = '\x02';
          pcVar5[0xc5] = '\0';
          pcVar5[0xc6] = '\0';
          pcVar5[199] = '\0';
        }
        if ((*(uint *)(pcVar5 + 0x204) & 0x800000) != 0) {
          *(uint *)(pcVar5 + 0x204) = *(uint *)(pcVar5 + 0x204) & 0xff7fffff;
        }
      }
      uVar4 = uVar4 + 1;
      pcVar5 = pcVar5 + 0x23c;
    } while (uVar4 < *(uint *)(iVar1 + 0x4c));
  }
  return;
}

