
/* sweep */

undefined4 Midi_ReadEvent(uint param_1,int *param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_8;
  int local_4;
  
  iVar7 = param_1;
  if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
    return 0xb;
  }
  iVar6 = *(int *)(param_1 + 0x98);
  iVar8 = 0;
  param_1 = 0xffffffff;
  iVar9 = iVar7 + 0xc0;
  if (iVar6 != 0) {
    do {
      iVar6 = iVar6 + -1;
      if ((*(byte *)(iVar9 + 0x18) & 1) == 0) {
        iVar3 = Midi_ReadVarLen(*(undefined4 *)(iVar9 + 0x10),*(undefined4 *)(iVar9 + 0xc),&local_8)
        ;
        if (iVar3 == 0) {
          return 1;
        }
        uVar4 = (*(int *)(iVar9 + 8) - *(int *)(iVar7 + 0x8c)) + local_8;
        if (uVar4 < param_1) {
          iVar8 = iVar9;
          param_1 = uVar4;
        }
      }
      iVar9 = iVar9 + 0x24;
    } while (iVar6 != 0);
    if (iVar8 != 0) {
      if (param_3 <= *(int *)(iVar7 + 0x8c) + param_1) {
        return 0xc;
      }
      iVar9 = Midi_ReadVarLen(*(undefined4 *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 0xc),&local_8);
      uVar4 = *(int *)(iVar8 + 0xc) - iVar9;
      *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + iVar9;
      *(uint *)(iVar8 + 0xc) = uVar4;
      if (uVar4 < 3) {
        return 1;
      }
      local_8 = *(int *)(iVar8 + 8) + local_8;
      *(int *)(iVar8 + 8) = local_8;
      *param_2 = local_8 - *(int *)(iVar7 + 0x8c);
      *(undefined4 *)(iVar7 + 0x8c) = *(undefined4 *)(iVar8 + 8);
      bVar1 = **(byte **)(iVar8 + 0x10);
      *(byte **)(iVar8 + 0x10) = *(byte **)(iVar8 + 0x10) + 1;
      if (bVar1 < 0x80) {
        if (*(char *)(iVar8 + 0x14) == '\0') {
          return 1;
        }
        *(char *)(param_2 + 1) = *(char *)(iVar8 + 0x14);
        *(byte *)((int)param_2 + 5) = bVar1;
        uVar4 = 1;
        if (*(int *)(&DAT_0055e39c + (uint)(*(byte *)(iVar8 + 0x14) >> 4) * 4) == 3) {
          *(undefined1 *)((int)param_2 + 6) = **(undefined1 **)(iVar8 + 0x10);
          *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
          *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + -2;
          return 0;
        }
      }
      else if (bVar1 < 0xf0) {
        *(byte *)(iVar8 + 0x14) = bVar1;
        *(byte *)(param_2 + 1) = bVar1;
        uVar4 = 2;
        *(undefined1 *)((int)param_2 + 5) = **(undefined1 **)(iVar8 + 0x10);
        puVar5 = (undefined1 *)(*(int *)(iVar8 + 0x10) + 1);
        *(undefined1 **)(iVar8 + 0x10) = puVar5;
        if (*(int *)(&DAT_0055e39c + (uint)(bVar1 >> 4) * 4) == 3) {
          *(undefined1 *)((int)param_2 + 6) = *puVar5;
          *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
          *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + -3;
          return 0;
        }
      }
      else {
        *(undefined1 *)(iVar8 + 0x14) = 0;
        if (bVar1 == 0xff) {
          *(undefined1 *)(param_2 + 1) = 0xff;
          cVar2 = **(char **)(iVar8 + 0x10);
          *(char *)((int)param_2 + 5) = cVar2;
          *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
          if (cVar2 == '/') {
            *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) | 1;
          }
          iVar7 = 2;
        }
        else {
          if ((bVar1 != 0xf0) && (bVar1 != 0xf7)) {
            return 1;
          }
          *(byte *)(param_2 + 1) = bVar1;
          iVar7 = 1;
        }
        iVar9 = Midi_ReadVarLen(*(undefined4 *)(iVar8 + 0x10),*(int *)(iVar8 + 0xc) + -2,&local_4);
        if (iVar9 == 0) {
          return 1;
        }
        *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + iVar9;
        uVar4 = local_4 + iVar7 + iVar9;
        if (*(uint *)(iVar8 + 0xc) < uVar4) {
          return 1;
        }
        param_2[2] = local_4;
        param_2[3] = *(int *)(iVar8 + 0x10);
        *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + local_4;
      }
      *(uint *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) - uVar4;
      return 0;
    }
  }
  *(uint *)(iVar7 + 0xa0) = *(uint *)(iVar7 + 0xa0) | 1;
  return 0xb;
}

