
/* sweep */

int Ui_RefreshButtonsInRect(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  pcVar4 = *(char **)(param_1 + 0x18);
  uVar3 = 0;
  local_14 = 0;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0xf0) & 2) != 0)) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      do {
        if (*pcVar4 == '\0') {
          return local_14;
        }
        iVar2 = __stricmp(pcVar4 + 0x40,param_2);
        if ((iVar2 == 0) && ((*(uint *)(pcVar4 + 0x204) & 0x80000) == 0)) {
          local_10 = *(int *)(pcVar4 + 0xd4) + *(int *)(param_2 + 0x44);
          local_c = *(int *)(pcVar4 + 0xd8) + *(int *)(param_2 + 0x48);
          local_8 = *(int *)(pcVar4 + 200) + local_10;
          local_4 = *(int *)(pcVar4 + 0xcc) + local_c;
          iVar2 = Rect_Overlaps(&local_10,param_3);
          if (iVar2 != 0) {
            *(uint *)(pcVar4 + 0x204) = *(uint *)(pcVar4 + 0x204) | 0x400;
            if (*(int *)(pcVar4 + 0x1e4) != 0) {
              puVar1 = (uint *)(*(int *)(pcVar4 + 0x1e4) + 0x11c);
              *puVar1 = *puVar1 | 4;
            }
            local_14 = local_14 + 1;
          }
        }
        uVar3 = uVar3 + 1;
        pcVar4 = pcVar4 + 0x23c;
      } while (uVar3 < *(uint *)(param_1 + 0x4c));
    }
    return local_14;
  }
  return 0;
}

