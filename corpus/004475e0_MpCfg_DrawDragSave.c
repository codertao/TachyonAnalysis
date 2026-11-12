
/* sweep: guess */

void MpCfg_DrawDragSave(void)

{
  if ((((DAT_00562c78 != 0) && (*(int *)(DAT_00562c78 + 0xd4) != 0)) && (DAT_00564ae4 == 0)) &&
     ((DAT_00592fc4 != 0 && ((*(uint *)(DAT_00562c78 + 0x10c) & 0x20000) == 0)))) {
    Gfx_Lock(1);
    if (GLBL_some_str != 0) {
      Blit_SetSrc(GLBL_some_str,DAT_00604488,DAT_00604448);
      Blit_SetDst(DAT_00592fc4,DAT_00604488,*(int *)(*(int *)(DAT_00562c78 + 0xd4) + 0x1664) + 0x18)
      ;
      Blit_CopyRect(0,0,*(int *)(*(int *)(DAT_00562c78 + 0xd4) + 0x166c) + 0x18,
                    *(undefined4 *)(*(int *)(DAT_00562c78 + 0xd4) + 0x1670),
                    *(undefined4 *)(DAT_00562c78 + 0xc4),*(undefined4 *)(DAT_00562c78 + 200));
    }
    DAT_00546618 = *(undefined4 *)(DAT_00562c78 + 0xc4);
    DAT_0054661c = *(undefined4 *)(DAT_00562c78 + 200);
  }
  return;
}

