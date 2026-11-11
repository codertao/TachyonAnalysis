
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441b70(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *text;
  int local_10;
  undefined4 local_8;
  
  if (((DAT_005a41b4 != (char *)0x0) && (DAT_005a41a8 != 0)) && (DAT_005a41b0 != 0)) {
    DAT_005a4120 = DAT_005a680c;
    copy_str32_to_some_global(&DAT_005a4120);
    iVar10 = DAT_005a4190;
    iVar9 = DAT_005a418c;
    iVar8 = DAT_005a4188;
    iVar7 = DAT_005a4184;
    DAT_005a4120 = GLBL_some_str;
    DAT_005a41b0 = 0;
    local_8 = 1;
    text = DAT_005a41b4;
    if (DAT_005a41b4 != (char *)0x0) {
      do {
        while ((*(int *)(text + 300) == 0 || (*(int *)(text + 0x84) == 0))) {
LAB_00441dff:
          text = *(char **)(text + 0x130);
          if (text == (char *)0x0) goto LAB_00441e13;
        }
        if ((float)(iVar8 - *(int *)(text + 0x128)) <= *(float *)(text + 0x124)) {
          local_8 = 0;
          if (*(float *)(text + 0x124) <= (float)iVar10) {
            if ((DAT_00564ae4 == 0) || (*(int *)(*(int *)(text + 0x84) + 0x238) == 0)) {
              FUN_00452180(0x100);
              Font_SetColorRamp(*(int *)(text + 200),*(int *)(text + 0xcc),*(int *)(text + 0xd0),
                                *(int *)(text + 0x114),*(int *)(text + 0x118),*(int *)(text + 0x11c)
                               );
              local_10 = (int)(longlong)ROUND(*(float *)(text + 0x124));
              lVar5 = (longlong)(*(int *)(text + 0x120) + iVar7) * (longlong)DAT_005a67e4;
              call_Font_DrawStringClipped
                        (text,(void *)(*(int *)(text + 0x84) + 0x50),
                         (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10,
                         (uint)((longlong)local_10 * (longlong)DAT_005a67e4) >> 0x10 |
                         (int)((ulonglong)((longlong)local_10 * (longlong)DAT_005a67e4) >> 0x20) <<
                         0x10,0,0,0);
            }
            else {
              FUN_00452180(1);
              iVar1 = *(int *)(text + 200);
              uVar2 = *(uint *)(text + 0xcc);
              uVar3 = *(uint *)(text + 0xd0);
              lVar5 = (longlong)iVar10 * (longlong)DAT_005a67e4;
              lVar6 = (longlong)iVar8 * (longlong)DAT_005a67e4;
              FUN_004ad470((uint)((longlong)iVar7 * (longlong)DAT_005a67e4) >> 0x10 |
                           (int)((ulonglong)((longlong)iVar7 * (longlong)DAT_005a67e4) >> 0x20) <<
                           0x10,(uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10,
                           (uint)((longlong)iVar9 * (longlong)DAT_005a67e4) >> 0x10 |
                           (int)((ulonglong)((longlong)iVar9 * (longlong)DAT_005a67e4) >> 0x20) <<
                           0x10,(uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
              local_10 = (int)(longlong)ROUND(*(float *)(text + 0x124));
              lVar5 = (longlong)(*(int *)(text + 0x120) + iVar7) * (longlong)DAT_005a67e4;
              iVar4 = *(int *)(text + 0x84);
              FUN_004ae1a0(text,*(undefined4 *)(iVar4 + 0x238),
                           (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10,
                           (uint)((longlong)local_10 * (longlong)DAT_005a67e4) >> 0x10 |
                           (int)((ulonglong)((longlong)local_10 * (longlong)DAT_005a67e4) >> 0x20)
                           << 0x10,(iVar1 << 8 | uVar2) << 8 | uVar3,*(undefined4 *)(iVar4 + 0x24c),
                           iVar4 + 0x23c);
              FUN_004ad470(DAT_005a67c0,DAT_005a67c4,DAT_005a67c8,DAT_005a67cc);
            }
          }
          goto LAB_00441dff;
        }
        text = *(char **)(text + 0x130);
      } while (text != (char *)0x0);
      FUN_00441160();
    }
LAB_00441e13:
    _DAT_005a41ac = local_8;
    copy_str32_to_some_global(&DAT_005a67a0);
    FUN_00452150();
  }
  return;
}

