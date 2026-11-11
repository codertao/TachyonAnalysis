
/* (mode) select nearest-colour matcher 0x4e3053: 1 0x4e3c94, 2 0x4e3dbb, 3 0x4e3e58, else 0x4e3d34
    */

void __cdecl Pal_SetMatchMode(int mode)

{
  if (mode == 1) {
    PTR_FUN_004e3053 = &LAB_004e3c94;
  }
  else if (mode == 2) {
    PTR_FUN_004e3053 = &LAB_004e3dbb;
  }
  else if (mode == 3) {
    PTR_FUN_004e3053 = &LAB_004e3e58;
  }
  else {
    PTR_FUN_004e3053 = FUN_004e3d34;
  }
  return;
}

