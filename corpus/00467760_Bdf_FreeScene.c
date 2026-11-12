
/* sweep */

void Bdf_FreeScene(int param_1)

{
  int iVar1;
  uint uVar2;
  
  ModelRef_Release(param_1 + 0x10);
  ModelRef_Release(param_1 + 0x44);
  iVar1 = *(int *)(param_1 + 0xcc);
  uVar2 = 0;
  if (*(int *)(param_1 + 200) != 0) {
    do {
      ModelRef_Release(iVar1);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 100;
    } while (uVar2 < *(uint *)(param_1 + 200));
  }
  OurFreeMem(*(undefined4 *)(param_1 + 0xcc));
  clr_bytes(param_1,0x144);
  return;
}

