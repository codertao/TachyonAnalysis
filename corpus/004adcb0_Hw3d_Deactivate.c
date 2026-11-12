
/* refine: driver slot 0x604518; hardware mode off */

void Hw3d_Deactivate(void)

{
  if (DAT_006044e0 != 0) {
    (*DAT_00604518)();
    DAT_00564ae4 = 0;
  }
  return;
}

