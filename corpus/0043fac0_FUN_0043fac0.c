
void FUN_0043fac0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(param_1 + 0x14);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    do {
      if (*pcVar4 == '\0') {
        return;
      }
      if ((*(uint *)(pcVar4 + 0x10c) & 0x80000) != 0) {
        *(uint *)(pcVar4 + 0x10c) = *(uint *)(pcVar4 + 0x10c) | 0x400;
      }
      if (((*(uint *)(pcVar4 + 0x10c) & 0x200000) != 0) &&
         (iVar2 = FUN_0043f590(param_1,pcVar4,DAT_005a54f4,DAT_005a54f8), iVar2 != 0)) {
        *(uint *)(pcVar4 + 0x10c) = *(uint *)(pcVar4 + 0x10c) | 0x400;
      }
      if ((*(int *)(pcVar4 + 0xdc) != *(int *)(pcVar4 + 0xd8)) && (*(int *)(pcVar4 + 0xf4) != 0)) {
        if ((*(int *)(pcVar4 + 0xe0) == *(int *)(pcVar4 + 0xdc)) && (*(int *)(pcVar4 + 0x118) != 0))
        {
          *(int *)(pcVar4 + 0x118) = *(int *)(pcVar4 + 0x118) + -1;
        }
        else if (((*(uint *)(pcVar4 + 0x10c) & 0x100000) == 0) || (*(int *)(pcVar4 + 0xec) == 0)) {
          if ((((*(uint *)(pcVar4 + 0x10c) & 0x40000) != 0) ||
              ((iVar2 = Ui_FindWindowDef(param_1,pcVar4 + 0x40), iVar2 != 0 &&
               ((param_2 == 0 || ((*(byte *)(iVar2 + 0xf0) & 2) != 0)))))) &&
             (iVar2 = *(int *)(pcVar4 + 0xe8), *(int *)(pcVar4 + 0xe8) = iVar2 + 1,
             *(int *)(pcVar4 + 0xe4) <= iVar2 + 1)) {
            uVar1 = *(uint *)(pcVar4 + 0x10c);
            pcVar4[0xe8] = '\0';
            pcVar4[0xe9] = '\0';
            pcVar4[0xea] = '\0';
            pcVar4[0xeb] = '\0';
            *(uint *)(pcVar4 + 0x10c) = uVar1 | 0x400;
            if ((uVar1 & 0x10000) == 0) {
              iVar2 = *(int *)(pcVar4 + 0xe0);
              *(int *)(pcVar4 + 0xe0) = iVar2 + *(int *)(pcVar4 + 0xf4);
              if (iVar2 + *(int *)(pcVar4 + 0xf4) == *(int *)(pcVar4 + 0xdc)) {
                *(undefined4 *)(pcVar4 + 0x118) = *(undefined4 *)(pcVar4 + 0x114);
              }
              if ((*(int *)(pcVar4 + 0xdc) < *(int *)(pcVar4 + 0xe0)) &&
                 (*(undefined4 *)(pcVar4 + 0xe0) = *(undefined4 *)(pcVar4 + 0xd8),
                 (*(uint *)(pcVar4 + 0x10c) & 0x100000) != 0)) {
                iVar2 = _rand();
                *(int *)(pcVar4 + 0xec) = iVar2 % *(int *)(pcVar4 + 0xf0);
              }
              if (*(int *)(pcVar4 + 0xe0) < 0) {
                pcVar4[0xe0] = '\0';
                pcVar4[0xe1] = '\0';
                pcVar4[0xe2] = '\0';
                pcVar4[0xe3] = '\0';
              }
              if (((*(int *)(pcVar4 + 0xf8) == *(int *)(pcVar4 + 0xe0)) &&
                  (*(int *)(pcVar4 + 0x100) != 0)) && (*(int *)(pcVar4 + 0xfc) == 0)) {
                pcVar4[0xfc] = '\x01';
                pcVar4[0xfd] = '\0';
                pcVar4[0xfe] = '\0';
                pcVar4[0xff] = '\0';
                (**(code **)(pcVar4 + 0x100))(pcVar4,*(undefined4 *)(pcVar4 + 0x104));
              }
            }
            else {
              iVar2 = _rand();
              *(int *)(pcVar4 + 0xe0) = iVar2 % *(int *)(*(int *)(pcVar4 + 0xd4) + 0x1680);
            }
          }
        }
        else {
          *(int *)(pcVar4 + 0xec) = *(int *)(pcVar4 + 0xec) + -1;
        }
      }
      uVar3 = uVar3 + 1;
      pcVar4 = pcVar4 + 0x130;
    } while (uVar3 < *(uint *)(param_1 + 0x48));
  }
  return;
}

