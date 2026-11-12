
/* sweep */

void DPlay_Shutdown(void)

{
  if (DAT_0055e3e0 != 0) {
    if (DAT_005b9af4 != (int *)0x0) {
      (**(code **)(*DAT_005b9af4 + 8))(DAT_005b9af4);
      DAT_005b9af4 = (int *)0x0;
    }
    if (DAT_005b9c00 != (int *)0x0) {
      (**(code **)(*DAT_005b9c00 + 8))(DAT_005b9c00);
      DAT_005b9c00 = (int *)0x0;
    }
    if (DAT_005b9cb0 != (int *)0x0) {
      (**(code **)(*DAT_005b9cb0 + 8))(DAT_005b9cb0);
      DAT_005b9cb0 = (int *)0x0;
    }
    DPlay_FreeAllSessions();
    Mem_FreeTemp(DAT_00564910);
    DAT_00564910 = 0;
    DAT_0055e3e0 = 0;
  }
  return;
}

