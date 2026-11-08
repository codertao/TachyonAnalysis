
void FUN_00471f40(void)

{
  if ((((DAT_00563608 != 0) && (*(int *)(DAT_00563608 + 0xd4) != 0)) && (DAT_00564ae4 == 0)) &&
     (((DAT_00577f70 != 0 && ((*(uint *)(DAT_00563608 + 0x10c) & 0x20000) == 0)) &&
      ((DAT_0054f87c != -1 && (DAT_0054f880 != -1)))))) {
    FUN_00452180(1);
    if (GLBL_some_str != 0) {
      FUN_0043a680(DAT_00577f70,DAT_00604488,*(int *)(*(int *)(DAT_00563608 + 0xd4) + 0x1664) + 0x18
                  );
      FUN_0043a6a0(GLBL_some_str,DAT_00604488,DAT_00604448);
      FUN_0043a6c0(DAT_0054f87c,DAT_0054f880,*(int *)(*(int *)(DAT_00563608 + 0xd4) + 0x166c) + 0x18
                   ,*(undefined4 *)(*(int *)(DAT_00563608 + 0xd4) + 0x1670),0,0);
    }
  }
  return;
}

