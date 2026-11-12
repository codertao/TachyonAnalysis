
/* refine: driver slot 0x604508; on success hardware mode on (0x564ae4), 565 masks */

int Hw3d_Activate(void)

{
  int iVar1;
  
  if (DAT_006044e0 == 0) {
    return -1;
  }
  iVar1 = (*DAT_00604508)();
  if (iVar1 == 0) {
    DAT_00602338 = 0xf800;
    DAT_0060233c = 0x7e0;
    DAT_00602340 = 0x1f;
    DAT_00564ae4 = 1;
  }
  return iVar1;
}

